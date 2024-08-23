//Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template<typename T>

void swapvalues(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x=5,y=6;
	
	cout << "\nValue before swapping = "<< x;
	cout << "\nValue before swapping = "<< y;
	
	swapvalues(x,y);
	
	cout << "\nValue after swapping = "<< x;
	cout << "\nValue after swapping = "<< y;
	
	
	string s1 = "Hello",s2 = "World";
	
	cout << "\nValue before swapping = "<< s1;
	cout << "\nValue before swapping = "<< s2;
	
	swapvalues(s1,s2);
	
	cout << "\nValue after swapping = "<< s1;
	cout << "\nValue after swapping = "<< s2;
	
	
	float p=5.2,q=6.2;
	
	cout << "\nValue before swapping = "<< p;
	cout << "\nValue before swapping = "<< q;
	
	swapvalues(p,q);
	
	cout << "\nValue after swapping = "<< p;
	cout << "\nValue after swapping = "<< q;
	
	
	return 0;
}
