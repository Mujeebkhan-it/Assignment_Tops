//WAP to print number in reverse order e.g.: number = 64728 --->
//reverse =82746

#include<stdio.h>
int main()
{
	int num,rem=0,reverse=0;
	printf("Enter Number : ");
	scanf("%d",&num);
	int copy = num;
	
	while(num != 0)
	{
		rem = num % 10;
		reverse = (reverse * 10) + rem;
		num = num / 10;
	}
	
	printf("\nOriginal number is : %d",copy);
	printf("\nReverse number is : %d",reverse);
		
	return 0;
}
