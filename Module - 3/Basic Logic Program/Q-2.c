//Write a program to make Simple calculator (to make addition,
//subtraction,multiplication, division and modulo)

#include<stdio.h>

int main()
{
	int num1,num2;
	printf("Enter the value of number 1 : ");
	scanf("%d",&num1);
	printf("Enter the value of number 2 : ");
	scanf("%d",&num2);
	
	//addition
	int addition = num1 + num2;
	
	//substraction
	int subs = num1 - num2;
	
	//multiplication
	int mul = num1 * num2;
	
	//division
	int dev = num1 / num2;
	
	//modulo
	int modulo = num1 % num2;
	
	printf("\n\tCalculator\n\n");
	printf("Addition of given number is : %d\n",addition);
	printf("Substraction of given number is : %d\n",subs);
	printf("Multiplication of given number is : %d\n",mul);
	printf("Devision of given number is : %d\n",dev);
	printf("Modulo of given number is : %d\n",modulo);
	
	return 0;
}
