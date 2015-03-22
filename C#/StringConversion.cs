using System;

namespace TypeConversionApplication
{
	public class StringConversion
	{
		static void Main(string[] args){
		
			int i = 10;
			double j = 111234.897;
			float f = 12.8f;
			bool b = false;

			Console.WriteLine ("Converting int to string :" + i.ToString());
			Console.WriteLine ("Converting double to string :" + j.ToString());
			Console.WriteLine ("Converting float to string :" + f.ToString());
			Console.WriteLine ("Converting boolean to string :" + b.ToString());
		}
	}
}

