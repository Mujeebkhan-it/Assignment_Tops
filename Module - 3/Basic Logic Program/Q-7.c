//Find area of Rectangle Formula : A=wl

#include<stdio.h>
int main()
{
	float length,width,area;
	printf("Enter the length of Rectangle : ");
	scanf("%f",&length);
	printf("Enter the width of Rectangle : ");
	scanf("%f",&width);
	
	area = length * width;
	printf("The area of Rectangle is %f",area);
	
	return 0;
}
