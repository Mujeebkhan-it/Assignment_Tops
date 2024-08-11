//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main()
{
	int num,rem,i,reverse = 0;
	printf("Enter the number : ");
	scanf("%d",&num);
	int copy = num;
	
	for(i = 1; num != 0; i++)
	{
		rem = num % 10;
		reverse = (reverse * 10) + rem;
		num = num / 10;
	
	}
	printf("\nOriginal Number is : %d",copy);
	printf("\nReverse Number is : %d",reverse);
	
	return 0;
}
