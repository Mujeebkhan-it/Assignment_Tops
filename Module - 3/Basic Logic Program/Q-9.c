//Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

int main()
{
	int side1,side2,side3,circ;
	printf("Enter the side1 : ");
	scanf("%d",&side1);
	printf("Enter the side2 : ");
	scanf("%d",&side2);
	printf("Enter the side3 : ");
	scanf("%d",&side3);
	
	circ = side1 + side2 + side3;
	
	printf("\nThe circumference of triangle is : %d",circ);
	
	return 0;
}
