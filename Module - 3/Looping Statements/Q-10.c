//Write a program you have to make a summation of first and last
//Digit. (E.g.,
//1234 Ans: -5)

#include<stdio.h>
int main()
{
	int num,sum=0,f_digit,l_digit;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	//finding last digit from number  
	l_digit = num % 10; 
	
	//finding first number 
	while(num >= 10)
	{
		num = num / 10;
	}
	
	f_digit = num;
	
	//Addition of first and last 
	sum = l_digit + f_digit;
	printf("%d",sum);
		
	return 0;
}
