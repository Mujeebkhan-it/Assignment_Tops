//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
	int range,i,num1 = 0,num2 = 1,num3;
	printf("Enter range : ");
	scanf("%d",&range);
	
	if(range >= 3)
	{
		printf("%d %d ",num1,num2);
		for(i = 1; i <= range-2; i++)
		{
			num3 = num1 + num2;
			printf("%d ",num3);
			num1 = num2;
			num2 = num3;
			
		}	
	}
	else
	{
		printf("Please Enter 3 or above");	
	}	
	
}
