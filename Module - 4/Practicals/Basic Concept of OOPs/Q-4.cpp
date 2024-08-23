//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include<iostream>
using namespace std;

class Circle
{
	private :
		double radius;
		
	public :
		const double pi = 3.14;
		void setradius(double r)
		{
			radius = r;	
		} 
		
		double getradius()
		{
			return radius;
		}
		
		double area()
		{
			return radius * radius * pi;
		} 
		
		double circum()
		{
			return 2 * pi * radius;
 		}
};

int main()
{
	Circle c1;
	c1.setradius(5.0);
	
	cout << "\nRadius of Circle is = " << c1.getradius();
	cout << "\nArea of circle is = "<< c1.area();
	cout << "\nCircumference of Circle is = "<< c1.circum();
}
