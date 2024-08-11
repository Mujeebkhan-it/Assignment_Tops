//calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main()
{
	int num,fact = 1;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int i = 1;
	while(i <= num)
	{
		fact = fact * i;
		i++;
	}
	
	printf("%d",fact);
	
	return 0;
}

