using System;

namespace RectangleApp{

	class Rectangle{
	
		//member variables
		double length;
		double width;

		public void Details(){
			length = 12.0;
			width = 7.7;
		}

		public double CalcArea(){
			return length * width;
		}

		public double CalcPeri(){
			return 2 * (length + width);
		}
		public void Display(){
			Console.WriteLine ("Length of the rectangle is :" +length);
			Console.WriteLine ("Width of the rectangle is :" +width);
			Console.WriteLine("Area of the rectangle is :"+ CalcArea());
			Console.WriteLine("Perimeter of the rectangle is :"+ CalcPeri());
		}

	}//end class Rectangle

	class ExecuteRectangle{

		static void Main(string[] args){
		
			Rectangle r = new Rectangle ();
			r.Details ();
			r.Display ();
			Console.ReadLine ();
		}//end class ExecuteRectangle

	}

}
