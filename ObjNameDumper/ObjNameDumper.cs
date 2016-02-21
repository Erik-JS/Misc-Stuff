using System;
using System.IO; // File
using System.Diagnostics; // Process
using System.Runtime.InteropServices; // DllImport
using System.Collections.Generic; // List<T>
using System.Threading; // Thread
using System.Linq; // Where

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
	
	static int GObjectsNum;
	
	static string[] arrayLines;
	
	static int count;
	static int rcount;
	static int fcount;
	static string filter;
	static bool appendNameID;
	
	static Object thisLock = new Object();
	static Object thisLockR = new Object();
	static Object thisLockF = new Object();
	
	static void Main(string[] args)
	{
		Console.WriteLine("ObjNameDumper by Erik JS\n");
		if (args.Length > 2)
		{
			ShowExitMessage("Unsupported number of parameters. No operation.");
			return;
		}
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
		// no parameters
		if (args.Length == 0)
		{
			LogAllObjectFullNamesToFile();
			CloseHandle(hGame);
			return;
		}
		// one parameter
		if (args.Length == 1)
		{
			if(args[0].StartsWith("0x", StringComparison.Ordinal))
			{
				Console.WriteLine("Reading single object...\n");
				uint targetObject = Convert.ToUInt32(args[0], 16);
				Console.ForegroundColor = ConsoleColor.White;
				Console.WriteLine(String.Format("{0:X8} : {1}", targetObject, GetObjectFullName(targetObject)));
				Console.ResetColor();
				CloseHandle(hGame);
				return;
			}
			if(args[0] == "!")
				appendNameID = true;
			else
				filter = args[0];
			LogAllObjectFullNamesToFile();
			CloseHandle(hGame);
			return;
		}
		// two parameters
		filter = args[0];
		if (filter == "!")
		{
			appendNameID = true;
			filter = args[1];
		}
		else if (args[1] == "!")
			appendNameID = true;
		
		LogAllObjectFullNamesToFile();
		CloseHandle(hGame);
	}
	
	static void LogAllObjectFullNamesToFile()
	{
		Console.WriteLine ("Reading contents from game's memory...");
		if (filter != null)
		{
			Console.Write("Using filter: \"");
			Console.ForegroundColor = ConsoleColor.Cyan;
			Console.Write(filter);
			Console.ResetColor();
			Console.WriteLine("\"");
		}
		uint GObjectsList = ReadUInt32(GObjects);
		GObjectsNum =  ReadInt32(GObjects + 4);
		Console.WriteLine(String.Format("Current list of GObjects: 0x{0:X8}", GObjectsList));
		Console.WriteLine("GObjects->Num: " + GObjectsNum);
		arrayLines = new string[GObjectsNum];
		ReadBoundaries rb1, rb2;
		rb1.firstIndex = 0;
		rb2.lastIndex = GObjectsNum - 1;
		rb1.lastIndex = rb2.lastIndex / 2;
		rb2.firstIndex = rb1.lastIndex + 1;
		Thread t1 = new Thread(ReadNames);
		Thread t2 = new Thread(ReadNames);
		t1.Start(rb1);
		t2.Start(rb2);
		while(t1.IsAlive || t2.IsAlive)
		{
			ShowProgressLine();
			Thread.Sleep(10);
		}
		ShowProgressLine(); // show updated last stats after threads have fully stopped
		Console.ResetColor();
		Console.Write("\n");
		Console.WriteLine ("Writing to file...");
		// remove empty elements from array
		arrayLines = arrayLines.Where(x => !string.IsNullOrEmpty(x)).ToArray();
		try
		{
			File.WriteAllLines("ME3_GObject_names.txt", arrayLines);
			ShowExitMessage("Done => ME3_GObject_names.txt");
		}
		catch (Exception ex)
		{
			ShowExitMessage(ex.GetType().Name + ": " + ex.Message);
		}
	}
	
	static void ShowProgressLine()
	{
		Console.ForegroundColor = ConsoleColor.White;
		Console.Write(String.Format("\r{0}{1}", ((float)count/GObjectsNum).ToString("0%").PadRight(10), rcount.ToString().PadRight(10)));
		if (filter != null)
		{
			Console.ForegroundColor = ConsoleColor.Cyan;
			Console.Write(fcount);
		}
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
		string fullname = null;
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
		if (fullname != null)
		{
			if(appendNameID)
			{
				uint count30 = ReadUInt32(CurrentObject + 0x30);
				return (count30 == 0) ? fullname: fullname + "_" + (count30 - 1);
			}
			return fullname;
		}
		return "(null)";
	}
	
	static uint GetObjectOuter(uint CurrentObject)
	{
		return ReadUInt32(CurrentObject + 0x28);
	}
	
	static uint GetObjectClass(uint CurrentObject)
	{
		return ReadUInt32(CurrentObject + 0x34);
	}
	
	struct ReadBoundaries
	{
		public int firstIndex;
		public int lastIndex;
	}
	
	static void ReadNames(object obj)
	{
		ReadBoundaries sb = (ReadBoundaries)obj;
		uint GObjectBase = ReadUInt32(GObjects);
		uint CurrentObject;
		string CurrentFullName;
		for (int i = sb.firstIndex; i <= sb.lastIndex; i++)
		{
			IncreaseCount();
			CurrentObject = ReadUInt32(GObjectBase + (uint)i * 4);
			if (CurrentObject == 0)
			{
				continue;
			}
			
			CurrentFullName = GetObjectFullName(CurrentObject);
			IncreaseCountR();
			
			if(filter != null && CurrentFullName.IndexOf(filter, StringComparison.OrdinalIgnoreCase) >= 0)
			{
				arrayLines[i] = String.Format("{0:D8} {0:X8} : {1:X8} : {2}", i, CurrentObject, CurrentFullName);
				IncreaseCountF();
			}
			if (filter == null)
				arrayLines[i] = String.Format("{0:D8} {0:X8} : {1:X8} : {2}", i, CurrentObject, CurrentFullName);
			
		}
	}
	
	static void IncreaseCount()
	{
		lock(thisLock)
		{
			count++;
		}
	}
	
	static void IncreaseCountR()
	{
		lock(thisLockR)
		{
			rcount++;
		}
	}
	
	static void IncreaseCountF()
	{
		lock(thisLockF)
		{
			fcount++;
		}
	}

}