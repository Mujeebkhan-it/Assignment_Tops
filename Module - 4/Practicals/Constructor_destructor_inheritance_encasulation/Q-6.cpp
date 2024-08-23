//Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor

#include <iostream>
#include <string>
using namespace std;

class Employee 
{
	private:
    	string name;
    	int employeeID;
    	double salary;

	public:

    	Employee(string empName, int empID, double empSalary) 
		{
        	name = empName;
        	employeeID = empID;
        	salary = empSalary;
    	}

    	void setSalary(double baseSalary, double performanceBonus) 
		{
        	salary = baseSalary + performanceBonus;
    	}

    	void calculateSalary(double performanceRating) 
		{
        	double baseSalary = 50000; 
        	double performanceBonus = performanceRating * 1000; 
        	setSalary(baseSalary, performanceBonus);
    	}

    	void displayEmployee() 
		{
        	cout << "Employee Name: " << name << endl;
        	cout << "Employee ID: " << employeeID << endl;
        	cout << "Employee Salary: " << salary << endl;
    	}
};

int main() {
    
    Employee emp("John Doe", 12345, 0);

    double performanceRating = 4.5;
    emp.calculateSalary(performanceRating);

    emp.displayEmployee();

    return 0;
}

