using System;
using System.Diagnostics;


class Program
{
    static void Main(string[] args)
    {
    	const int limit = 1073741824;
    	byte[] bytearray1 = new byte[limit];
    	byte[] bytearray2 = new byte[limit];
    	byte[] bytearray3 = new byte[limit];
    	Random rrr = new Random();
    	int num  = rrr.Next(0, 255);
    	Stopwatch mySW = new Stopwatch();
    	Console.WriteLine("Start...");
    	mySW.Start();
    	for (int i = 0; i < limit; i++)
    	{
    		bytearray1[i] = (byte)((num + 1) % 256);
    		bytearray2[i] = (byte)((num - 1) % 256);
    		num++;
    	}
    	for (int j = 0; j < limit; j++)
    	{
    		bytearray3[j] = (byte)(bytearray1[j] ^ bytearray2[j]);
    	}
    	mySW.Stop();
    	long ms = mySW.ElapsedMilliseconds;
    	Console.WriteLine("End. Time elapsed: {0}.{1:D3}", ms / 1000, ms % 1000);
    	Console.WriteLine("Press any key to quit...");
		Console.ReadKey(true);
    }
    
  
}
