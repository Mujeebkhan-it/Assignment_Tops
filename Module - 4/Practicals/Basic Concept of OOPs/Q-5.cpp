//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;

class Rectangle
{
	private :
		double length;
		double width;
		
	public :
		
		void setter(double l,double w)
		{
			length = l;
			width = w;	
		} 
		
		double area()
		{
			return length * width;
		} 
		
		double perimeter()
		{
			return 2 * (length * width);
 		}
};

int main()
{
	
	Rectangle r1;
	r1.setter(5.0,10.0);
	
	cout << "\nArea of Rectangle is = "<< r1.area();
	cout << "\nPerimeter of Rectangle is = "<< r1.perimeter();
}
