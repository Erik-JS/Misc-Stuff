using System;
using System.IO;
using System.IO.Compression;
using System.Security.Cryptography;

class ProfileTool
{
	
	static void Main(string[] args)
	{
		Console.WriteLine("ProfileTool by Erik JS\n");
		if( args.Length !=2 )
		{
			ShowUsageMessage();
			return;
		}
		int op = 0;
		op = (args[0].ToLower()=="d") ? 1: op;
		op = (args[0].ToLower()=="c") ? 2: op;
		if (op==0)
		{
			ShowUsageMessage();
			return;
		}
		if(!File.Exists(args[1]))
		{
			Console.WriteLine("Invalid file - " + args[1]);
			return;
		}
		string name = Path.GetFileNameWithoutExtension(args[1]);
		if(op==1)
		{
			DecompressProfile(args[1], name + ".bin");
		}
		else
		{
			CompressProfile(args[1], name + ".sav");
		}
		return;
	}
	
	static void DecompressProfile(string srcfile, string dstfile)
	{
		try
		{
			Console.WriteLine("Reading source...");
			byte[] x = File.ReadAllBytes(srcfile); // load all bytes
			byte[] y = new byte[x.Length-0x1A];
			
			Console.WriteLine("Copying array...");
			Array.Copy(x, 0x1A, y, 0, y.Length); // skip hash (0x14) + uncompresed size (0x4) + zlib compression type (0x2) = 0x1A
			
			Console.WriteLine("Initializing streams...");
			DeflateStream defStream = new DeflateStream(new MemoryStream(y),CompressionMode.Decompress);
			FileStream fs = File.Create(dstfile);
			
			Console.WriteLine("Decompressing data to destination...");
			defStream.CopyTo(fs);
			
			Console.WriteLine("Decompression done.\n" + dstfile);
			defStream.Close();
			fs.Close();
		}
		catch(Exception ex)
		{
			Console.WriteLine(ex.GetType().Name + " | " + ex.Message);
			Console.Beep();
		}
		return;
	}
	
	static void CompressProfile(string srcfile, string dstfile)
	{
		try
		{
			Console.WriteLine("Reading source...");
			byte[] x = File.ReadAllBytes(srcfile);
			int usize = x.Length;
			Console.WriteLine("Initializing memory stream...");
			MemoryStream ms = new MemoryStream();
			// write uncompressed size as big endian
			ms.WriteByte((byte)((usize>>24) & 0xFF));
			ms.WriteByte((byte)((usize>>16) & 0xFF));
			ms.WriteByte((byte)((usize>>8) & 0xFF));
			ms.WriteByte((byte)(usize & 0xFF));
			// then, compressed data
			// these two bytes are part of zlib standard, but aren't supported by DeflateStream
			ms.WriteByte(0x78);
			ms.WriteByte(0x9C);
			Console.WriteLine("Compressing data...");
			MemoryStream compData = new MemoryStream();
			DeflateStream ds = new DeflateStream(compData, CompressionMode.Compress);
			ds.Write(x, 0, x.Length);
			ds.Close();
			ms.Write(compData.ToArray(), 0, compData.ToArray().Length);
			// Adler32 chacksum as big endian - also not supported by DeflateStream, but required by zlib standard
			int checksum = GetAdler32(x);
			ms.WriteByte((byte)((checksum>>24) & 0xFF));
			ms.WriteByte((byte)((checksum>>16) & 0xFF));
			ms.WriteByte((byte)((checksum>>8) & 0xFF));
			ms.WriteByte((byte)(checksum & 0xFF));
			// start filestream
			Console.WriteLine("Creating file stream...");
			FileStream fs = File.Create(dstfile);
			// write hash
			fs.Write(new SHA1CryptoServiceProvider().ComputeHash(ms.ToArray()), 0, 0x14);
			// write usize + compressed data
			fs.Write(ms.ToArray(), 0, ms.ToArray().Length);
			Console.WriteLine("Compression done.\n" + dstfile);
			fs.Close();
			ms.Close();
			compData.Close();
		}
		catch(Exception ex)
		{
			Console.WriteLine(ex.GetType().Name + " | " + ex.Message);
			Console.Beep();
		}
		return;
	}
	
	static int GetAdler32(byte[] data)
	{
		int s1 = 1;
		int s2 = 0;
		for (int i = 0; i < data.Length; i++)
		{
			s1 = (s1 + data[i]) % 65521;
			s2 = (s2 + s1) % 65521;
		}
		return s2 * 65536 + s1;
	}
	
	static void ShowUsageMessage()
	{
		Console.WriteLine("Usage: ProfileTool «operation» «file.ext»");
		Console.WriteLine("Operation: d - decompress, c - compress");
		Console.WriteLine("Examples:\nProfileTool d Local_Profile.sav => will create a file named Local_Profile.bin");
		Console.WriteLine("ProfileTool c MyProfile.bin => will create a file named MyProfile.sav");
		return;
	}
}