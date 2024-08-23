//Write a programto find the multiplication values and the cubic values
//usinginline function

#include <iostream>

using namespace std;

class operation 
{
	int a, b, n, mul, c;


	public:
		void get();
		void multi();
		void cube();
};

inline void operation :: get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void operation :: multi()
{
	mul = a * b;
	cout << "Multiplication of two numbers: " << mul << "\n";
}

inline void operation :: cube()
{
	cout << "Enter value of n :";
	cin >> n;
	c = n*n*n;
	cout << "Cube of n " << c << "\n";
	
}

int main()
{
	operation s;
	s.get();
	s.multi();
	s.cube();
	
	return 0;
}

