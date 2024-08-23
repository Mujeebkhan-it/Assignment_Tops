//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>
using namespace std;

class Person
{
	private : 
		string name;
		int age;
		string country;
		
	public : 
		void setter(string n,int a,string c)
		{
			name = n;
			age = a;
			country = c;
		}
		
		void getter()
		{
			cout << "\nName = " <<name;
			cout << "\nAge = " <<age;
			cout << "\ncountry = " <<country;
		}
};


int main()
{
	Person p1;
	p1.setter("Mujeeb",23,"India");
	p1.getter();
	return 0;
}
