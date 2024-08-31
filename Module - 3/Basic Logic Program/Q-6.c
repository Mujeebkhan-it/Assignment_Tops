//. Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
int main()
{
		
	float area,b,h;
	printf("Enter the base of triangle : ");
	scanf("%f",&b);
	printf("Enter the height of triangle : ");
	scanf("%f",&h);
	
	area = 0.5 * b * h;
	
	printf("The area of Triangle is %f",area);
	return 0;
}
