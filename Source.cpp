// Demonstrate public access modifier using a C++ program.
// Define a class called Circle, has one public member variable radius,
// and one public member function called Area 
// Then create an object called Cir, access member variable and set it to 5.5
// finallly access member function Area and compute area of circle
#include <iostream>
using namespace std;

class Circle
{
	public:     // class definition
		double radius;  // public member function
		double Area()	// public member function
		{
			return 3.14 * radius * radius;
		}
};

//+++++++++++++Main Program++++++++++++++++++++

int main()
{
	Circle Cir; // instance of class Circle
	Cir.radius = 5.5; //  accessing public member outside class

	cout << "Radius is: " << Cir.radius << endl;
	cout << "Area is: " << Cir.Area() << endl;



	system("pause");
	return 0; 
}