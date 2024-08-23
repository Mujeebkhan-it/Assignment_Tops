//Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.

#include <iostream>
#include <string>

using namespace std;

class Car {
	
	private:
    	string company;
    	string model;
    	int year;

	public:

    	Car(string c, string m, int y)
		{
			company = c; 
			model = m; 
			year = y;
		}
		
    	void display() 
		{
        	cout << "Company: " << company << endl;
        	cout << "Model: " << model << endl;
        	cout << "Year: " << year << endl;
    	}
};

int main() {
    
    Car myCar("Toyota", "Corolla", 2020);
    myCar.display();

    return 0;
}

