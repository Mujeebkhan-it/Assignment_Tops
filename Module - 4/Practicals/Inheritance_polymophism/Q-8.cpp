//Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    int x = 10, y = 5, z = 3;
    double p = 15.5, q = 4.5;

    cout << "Addition (int): " << add(x, y) << endl;
    cout << "Addition (double): " << add(p, q) << endl;
    cout << "Addition (3 ints): " << add(x, y, z) << endl;

    cout << "Subtraction (int): " << subtract(x, y) << endl;
    cout << "Subtraction (double): " << subtract(p, q) << endl;

    cout << "Multiplication (int): " << multiply(x, y) << endl;
    cout << "Multiplication (double): " << multiply(p, q) << endl;
    cout << "Multiplication (3 ints): " << multiply(x, y, z) << endl;

    cout << "Division (double): " << divide(p, q) << endl;

    cout << "Division by zero: " << divide(p, 0) << endl;

    return 0;
}

