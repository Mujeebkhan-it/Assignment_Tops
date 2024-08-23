//Write a program to swap the two numbers using friend
//functionwithout using third variable

#include <iostream>
using namespace std;

class Swap 
{
private:
    int a, b;

public:
    Swap(int x, int y) : a(x), b(y) {}

    friend void swap(Swap& obj);

    void display() 
	{
        cout << "a: " << a << ", b: " << b << endl;
    }
};

void swap(Swap& obj) 
{
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

int main() 
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swap obj(x, y);

    cout << "Before swapping: ";
    obj.display();

    swap(obj);

    cout << "After swapping: ";
    obj.display();

    return 0;
}

