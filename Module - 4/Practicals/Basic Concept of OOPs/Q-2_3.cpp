#include <iostream>
#include <string>
using namespace std;

class Account
{
	private:
	    string name;
	    int num;
   		string type;
	    double bal;  
    	
	public:
    
    	void assignValues(const string& accName, int accNumber, const string& accType, double initialBalance) 
    	{
        	name = accName;
    	    num = accNumber;
    	    type = accType;
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
   	    	cout << "Account Holder: " << name << endl;
        	cout << "Account Number: " << num << endl;
        	cout << "Account Type: " << type << endl;
        	cout << "Balance: " << bal << endl;
    	}
	};

int main()
{
    Account acc;
    acc.assignValues("Mujeeb Khan", 123852789, "Saving", 1200.0); 
    acc.display();
    acc.deposit(500.0);  
    acc.withdraw(300.0); 
    acc.display();
    
    return 0;
}

