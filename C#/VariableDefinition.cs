using System;

namespace Application
{
	public class VariableDefinition
	{
		static void Main(string[] args){
			int i = 10;
			String s = "Microsoft";
			bool b = true;
			int num;
			Console.WriteLine (" values of i, s and b are {0}, {1}, {2} ", i, s, b);
			num = Convert.ToInt32 (Console.ReadLine()); //Console.ReadLine accepts the data in string format
			//Convert.ToInt32 takes the input and converts to integer
			Console.WriteLine (num);
		}
	}
}

