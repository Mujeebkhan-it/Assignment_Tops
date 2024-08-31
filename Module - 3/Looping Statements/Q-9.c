//Write a program make a summation of given number

#include<stdio.h>
int main()
{
	int num,rem = 0,sum = 0;
	printf("Enter the number : ");
	scanf("%d",&num);
	int copy = num;
	
	while(num != 0)
	{
		rem = num % 10;
		sum = sum + rem;
		num = num / 10;
	}
	printf("Summation of %d is %d",copy,sum);
	return 0;
}
