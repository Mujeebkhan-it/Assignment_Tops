//WAP to find maximum number among 3 numbers using ternary
//operator

#include<stdio.h>

int main()
{
	int num1,num2,num3;
	printf("Enter the Number1 : ");
	scanf("%d",&num1);
	printf("Enter the Number2 : ");
	scanf("%d",&num2);
	printf("Enter the Number3 : ");
	scanf("%d",&num3);
	
	(num1 > num2 && num1 > num3) ? printf("%d is big",num1) :
	(num2 > num1 && num2 > num3) ? printf("%d is big",num2) :
	printf("%d is big",num3);
	
	return 0; 
}
