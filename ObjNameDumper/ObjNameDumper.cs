using System;
using System.IO; // File
using System.Diagnostics; // Process
using System.Runtime.InteropServices; // DllImport
using System.Collections.Generic; // List<T>

class ObjNameDumper
{
	
	[DllImport("kernel32.dll")]
	public static extern IntPtr OpenProcess(ProcessAccessFlags processAccess, bool bInheritHandle, int processId);

	public enum ProcessAccessFlags : uint
	{
		All = 0x001F0FFF,
		Terminate = 0x00000001,
		CreateThread = 0x00000002,
		VirtualMemoryOperation = 0x00000008,
		VirtualMemoryRead = 0x00000010,
		VirtualMemoryWrite = 0x00000020,
		DuplicateHandle = 0x00000040,
		CreateProcess = 0x000000080,
		SetQuota = 0x00000100,
		SetInformation = 0x00000200,
		QueryInformation = 0x00000400,
		QueryLimitedInformation = 0x00001000,
		Synchronize = 0x00100000
	}

	[DllImport("kernel32.dll", SetLastError=true)]
	public static extern Int32 ReadProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress,[Out] byte[] buffer, UInt32 size, out IntPtr lpNumberOfBytesRead);
	
	[DllImport("kernel32.dll", SetLastError=true)]
	public static extern bool CloseHandle(IntPtr hHandle);
	
	static IntPtr hGame = IntPtr.Zero;
	
	const uint GObjects = 0x01AB5634;
	
	static void Main(string[] args)
	{
		Console.WriteLine("ObjNameDumper by Erik JS\n");
		Console.WriteLine("Verifying MassEffect3.exe...");
		Process[] p = Process.GetProcessesByName("masseffect3");
		if (p.Length == 0)
		{
			ShowExitMessage("Mass Effect 3 is not running.");
			return;
		}
		hGame = OpenProcess(ProcessAccessFlags.All, false, p[0].Id);
		if(hGame == IntPtr.Zero)
		{
			ShowExitMessage("Cannot access MassEffect3.exe.");
			return;
		}
		if (args.Length != 0)
		{
			
			if (args[0].StartsWith("0x", StringComparison.Ordinal))
			{
				Console.WriteLine("Reading single object...\n");
				uint targetObject = Convert.ToUInt32(args[0], 16);
				Console.WriteLine(String.Format("{0:X8} : {1}", targetObject, GetObjectFullName(targetObject)));
			}
			else
				LogAllObjectFullNamesToFile(args[0]);
			
		}
		if (args.Length == 0)
			LogAllObjectFullNamesToFile();
		
		CloseHandle(hGame);
	}
	
	static void LogAllObjectFullNamesToFile(string filter = "")
	{
		bool useFilter = !String.IsNullOrEmpty(filter);
		Console.WriteLine ("Reading contents from game's memory...");
		if (useFilter)
		{
			Console.Write("Using filter: \"");
			Console.ForegroundColor = ConsoleColor.Cyan;
			Console.Write(filter);
			Console.ResetColor();
			Console.WriteLine("\"");
		}
		uint GObjectsList = ReadUInt32(GObjects);
		int GObjectsNum =  ReadInt32(GObjects + 4);
		Console.WriteLine(String.Format("Current list of GObjects: 0x{0:X8}", GObjectsList));
		Console.WriteLine("GObjects->Num: " + GObjectsNum);
		List<string> lstLines = new List<string>();
		int count = 0;
		int rcount = 0;
		int fcount = 0;
		while (count < GObjectsNum)
		{
			uint CurrentGObject = ReadUInt32(GObjectsList + ((uint)count * 4));
			if (CurrentGObject == 0)
			{
				count++;
				ShowProgressLine(GObjectsNum, count, rcount, fcount, useFilter);
				continue;
			}
			
			string objFullName = GetObjectFullName(CurrentGObject);
			
			if (useFilter && objFullName.IndexOf(filter, StringComparison.OrdinalIgnoreCase) >= 0)
			{
				lstLines.Add(String.Format("{0:D8} {0:X8} : {1:X8} : {2}", count, CurrentGObject, objFullName));
				fcount++;
			}
			else if (!useFilter)
				lstLines.Add(String.Format("{0:D8} {0:X8} : {1:X8} : {2}", count, CurrentGObject, objFullName));
			
			rcount++;
			count++;

			ShowProgressLine(GObjectsNum, count, rcount, fcount, useFilter);
		}
		// int numberofnullslots = count - rcount;
		
		Console.Write("\n");
		Console.WriteLine ("Writing to file...");
		try
		{
			File.WriteAllLines("ME3_GObject_names.txt", lstLines);
			ShowExitMessage("Done => ME3_GObject_names.txt");
		}
		catch (Exception ex)
		{
			ShowExitMessage(ex.GetType().Name + ": " + ex.Message);
		}
	}
	
	static void ShowProgressLine(int num, int count, int rcount, int fcount, bool useFilter)
	{
		Console.ForegroundColor = ConsoleColor.White;
		Console.Write(String.Format("\r{0}{1}", ((float)count/num).ToString("0%").PadRight(10), rcount.ToString().PadRight(10)));
		if (useFilter)
		{
			Console.ForegroundColor = ConsoleColor.Cyan;
			Console.Write(fcount);
		}
		Console.ResetColor();
	}
	
	static void ShowExitMessage(string message)
	{
		Console.WriteLine(message);
		Console.WriteLine("Press any key to quit...");
		Console.ReadKey(true);
	}
	
	static byte[] ReadByteArray(uint memAddress, uint size)
	{
		byte[] buffer = new byte[size];
		IntPtr bytesRead;
		ReadProcessMemory(hGame, (IntPtr)memAddress, buffer, size, out bytesRead);
		return buffer;
	}
	
	static UInt32 ReadUInt32(uint memAddress)
	{
		return BitConverter.ToUInt32(ReadByteArray(memAddress, 4), 0);
	}
	
	static Int32 ReadInt32(uint memAddress)
	{
		return BitConverter.ToInt32(ReadByteArray(memAddress, 4), 0);
	}
	
	static string ReadString(uint memAddress)
	{
		List<char> charList = new List<char>();
		do
		{
			char c = (char)ReadByteArray(memAddress + (uint)charList.Count, 1)[0];
			if (c == '\0')
				break;
			charList.Add(c);
		} while (true);
		return new string(charList.ToArray());
	}
	
	static string GetObjectName(uint CurrentObject)
	{
		if (CurrentObject == 0)
			return "";
		uint Pos2C = ReadUInt32(CurrentObject + 0x2C);
		return ReadString(Pos2C + 8);
	}
	
	static string GetObjectFullName(uint CurrentObject)
	{
		string fullname = "(null)";
		uint objOuter = GetObjectOuter(CurrentObject);
		uint objClass = GetObjectClass(CurrentObject);
		if(objOuter != 0 && objClass != 0)
		{
			fullname = GetObjectName(objClass) + " ";
			uint objOuterOuter = GetObjectOuter(objOuter);
			if (objOuterOuter != 0)
				fullname += GetObjectName(objOuterOuter) + ".";
			fullname += GetObjectName(objOuter) + ".";
			fullname += GetObjectName(CurrentObject);
		}
		if (objOuter == 0 && objClass != 0)
		{
			fullname = GetObjectName(objClass) + " ";
			fullname += GetObjectName(CurrentObject) + " (no Outer)";
		}
		return fullname;
	}
	
	static uint GetObjectOuter(uint CurrentObject)
	{
		return ReadUInt32(CurrentObject + 0x28);
	}
	
	static uint GetObjectClass(uint CurrentObject)
	{
		return ReadUInt32(CurrentObject + 0x34);
	}

}