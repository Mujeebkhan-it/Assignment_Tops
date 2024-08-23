//Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

class Triangle 
{
	private:
    	double side1;
   	 	double side2;
    	double side3;

	public:
    	Triangle(double a = 0.0, double b = 0.0, double c = 0.0) 
		{
        	side1 = a;
       		side2 = b;
        	side3 = c;
    	}
    	
    	bool isEquilateral() 
		{
        	return (side1 == side2 && side2 == side3);
    	}
    	
    	bool isIsosceles()
		{
	        return (side1 == side2 || side2 == side3 || side1 == side3);
    	}
    	
    	bool isScalene()
		{
        	return (side1 != side2 && side2 != side3 && side1 != side3);
    	}
    	
    	void displayType() 
		{
        	if (isEquilateral()) 
			{
            	cout << "The triangle is Equilateral." << endl;
        	}
			else if (isIsosceles()) 
			{
            	cout << "The triangle is Isosceles." << endl;
        	}
			else if (isScalene()) 
			{
            	cout << "The triangle is Scalene." << endl;
        	} 
			else 
			{
            cout << "The triangle is not valid." << endl;
        	}
    }
};

int main() 
{
    double a, b, c;

    cout << "Enter the lengths of the three sides of the triangle: ";
	cin >> a >> b >> c;

   	Triangle tri(a, b, c);
    tri.displayType();

    return 0;
}





