using System;

namespace Application
{
	public class KeypadPermutations
	{
		public int Factorial(int num){

			if (num == 1 || num == 0) {
				return 1;
			} else {
				
				return num * Factorial (num - 1);
			}

		}

		public int ComputePermutation(int i){

			int n;
			int perm;

			perm = Factorial (n) / Factorial (n - i);


		}

		static void Main(string[] args){
			KeypadPermutations k = new KeypadPermutations();
			Console.WriteLine("Fact is :" + k.Factorial (1));
			Console.ReadLine ();
		}
	}
}

