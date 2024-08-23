//Write a program to calculate the area of circle, rectangle and
//triangleusing Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area*
//breadthCircle: Pi * Area
//*Area

#include <iostream>
#include <cmath>
using namespace std;

double area(double radius) 
{
    return M_PI * radius * radius;
}

double area(double length, double breadth) 
{
    return length * breadth;
}

double area(double base, double height, bool isTriangle) 
{
    return 0.5 * base * height;
}

int main() 
{
    double radius, length, breadth, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << area(length, breadth) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, true) << endl;

    return 0;
}

