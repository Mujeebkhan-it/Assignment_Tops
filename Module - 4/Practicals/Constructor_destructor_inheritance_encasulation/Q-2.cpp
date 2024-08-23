//Write a program of Addition, Subtraction, Division, Multiplication
//using constructor.

#include <iostream>

using namespace std;

class Calculator 
{
	private:
    	int num1, num2;

	public:
    	
	    Calculator(int a, int b) 
		{
			num1 = a;
			num2 = b;
		}

    	int add()
		{
        	return num1 + num2;
    	}

    	int subtract()
		{
        	return num1 - num2;
    	}

    	int multiply()
		{
        	return num1 * num2;
    	}

    	double divide()
		{
        	return num1 / num2;
  	    }
};

int main() {
	
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    Calculator calc(a, b);
    cout << "\n\nAddition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
    

    return 0;
}

