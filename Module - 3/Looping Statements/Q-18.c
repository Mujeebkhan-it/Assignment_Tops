//Write a C Program to Print the Multiplication Table of N
//i. E.g. 5 * 1 = 5
//ii. 5 * 2 = 10
//1. .
//2. .
//iii. 5 * 10 = 50

#include<stdio.h>
int main()
{
	int num,i,mul;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for( i = 1; i <= 10; i++)
	{
		mul = num * i;
		printf("\n%d * %d = %d",num,i,mul);
	}
	
	return 0;
}
