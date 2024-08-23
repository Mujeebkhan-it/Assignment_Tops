//Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.


#include <iostream>
using namespace std;

class Account
{
	private:
	    int num;
	    double bal;  
    	
	public:
    
    	void assignValues(int accNumber, double initialBalance) 
    	{
    	    num = accNumber;
   		    bal = initialBalance;
    	}

 
    	void deposit(double amount) 
    	{
        	if (amount > 0) 
        	{
            	bal += amount;
           		cout << "Deposited : " << amount << endl;
        	} 
        	else 
    	    {
    	        cout << "Invalid deposit amount." << endl;
    	    }
    	}


    	void withdraw(double amount) 
    	{
    	    if (amount > 0 && amount <= bal) 
    	    {
    	        bal -= amount;
    	        cout << "Withdrawn : " << amount << endl;
    	    } 
    	    else if (amount > bal) 
    	    {
        	    cout << "Insufficient balance." << endl;
        	} 
        	else 
        	{
        		cout << "Invalid withdrawal amount." << endl;
        	}
    	}

   
    	void display() 
	    {
        	cout << "\nAccount Number: " << num << endl;
        	cout << "Balance: " << bal << endl;
        	cout <<"\n";
    	}
	};

int main()
{
    Account acc;
    acc.assignValues(123852789, 1200.0); 
    acc.display();
    acc.deposit(500.0);  
    acc.withdraw(300.0); 
    acc.display();
    
    return 0;
}

