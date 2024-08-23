//Write a program to find the max number from given two
//numbersusing friend function

#include <iostream>
using namespace std;

class Number 
{
private:
    int a, b;

public:
    Number(int x, int y) : a(x), b(y) {}

    friend int findMax(const Number& num);

    void display() const {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int findMax(const Number& num) 
{
    return (num.a > num.b) ? num.a : num.b;
}

int main() 
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Number num(x, y);

    cout << "Numbers: ";
    num.display();

    int maxNumber = findMax(num);

    cout << "Maximum number: " << maxNumber << endl;

    return 0;
}

