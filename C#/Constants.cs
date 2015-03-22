using System;

namespace ConstantsApplication
{
	public class Circle
	{
		const double PI = 3.14159;
		double r;
		public void Inputs(){
			r = 25.9;
		}

		public double CalcArea(){
			return PI*r*r;
		}

		public void Display(){
			Console.WriteLine ("Value of PI is "+ PI);
			Console.WriteLine ("Value of radius r is :" +r);
			Console.WriteLine ("Area of the circle is :" + CalcArea());
		}
		static void Main(string[] args){

			Circle c = new Circle ();
			c.Inputs ();
			c.CalcArea ();
			c.Display ();

		}
	}
}

