#include <iostream>
using namespace std;
class Calculator 
{
	public:
    
    	double add(double a, double b) 
		{
        	return a + b;
    	}

	    double subtract(double a, double b) 
		{
    	    return a - b;
   	 	}
    
    	double multiply(double a, double b) 
		{
        	return a * b;
    	}
    
   		double divide(double a, double b) 
		{
        	return a / b;
    	}
};

int main() 
{
    Calculator calc;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Addition Result: " << calc.add(num1, num2) << endl;
    cout << "Substraction Result: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication Result: " << calc.multiply(num1, num2) << endl;
    cout << "Division Result: " << calc.divide(num1, num2) << endl;

	return 0;
}

 


