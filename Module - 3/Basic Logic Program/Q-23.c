//WAP to calculate swap 2 numbers with using of multiplication and
//division

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\nbefore swapping"); 
	printf("\na is : %d",a);
	printf("\nb is : %d\n",b);
	
	a = a * b;
	b = a / b;
	a = a / b;
	
	printf("\nafter swapping"); 
	printf("\na is : %d",a);
	printf("\nb is : %d",b);
	
	return 0;

}
