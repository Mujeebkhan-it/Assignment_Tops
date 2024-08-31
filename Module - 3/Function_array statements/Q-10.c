//WAP to perform Palindrome number using for loop and function

#include<stdio.h>

void palindrome()
{
	int num,i,rem,reverse = 0;
	printf("Enter the number : ");
	scanf("%d",&num);
	int copy = num;

	for(i = 0; num != 0; i++)
	{
		rem = num % 10;
		reverse = (reverse * 10) + rem;
		num = num / 10;	
	}
	
	printf("\nOriginal Number is : %d",copy);
	printf("\nReverse Number is : %d",reverse);
	
	if(copy == reverse)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot Palindrome");
	}
}

int main()
{	
	palindrome();
	
	return 0;
}
