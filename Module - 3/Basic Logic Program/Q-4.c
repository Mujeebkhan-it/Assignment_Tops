//Find Area of Square formula : a = a2

#include<stdio.h>
int main()
{
	float side,area;
	printf("Enter the side of a square : ");
	scanf("%f",&side);
	
	area = side * side;
	
	printf("The area of a sqaure is %f",area);
	
	return 0;
}
