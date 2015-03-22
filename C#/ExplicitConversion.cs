using System;

namespace TypeConversionApplication
{
	public class ExplicitConversion
	{
		static void Main(string[] args){

			double num = 7983.562;

			Console.WriteLine ("Before typecasting : "+ num);

			int n;

			n = (int)num;// cast double to integer

			Console.WriteLine ("After typecasting: "+ n);
		}
	}
		
}

