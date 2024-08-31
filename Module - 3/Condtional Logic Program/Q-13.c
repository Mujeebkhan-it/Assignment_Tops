//WAP to find minimum number among 3 numbers using
//ternary operator

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
	
	(num1 < num2 && num1 < num3) ? printf("%d is small",num1) :
	(num2 < num1 && num2 < num3) ? printf("%d is small",num2) :
	printf("%d is small",num3);
	
	return 0; 
}
