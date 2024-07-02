//WAP to Find Area And Circumference of Circle
#include<stdio.h>

int main()
{
	float r,area,circumference;
	float pie = 3.14;
	
	printf("Enter the radius of circle : ");
	scanf("%f",&r);
	
	area = pie * r * r;
	circumference = 2 * pie * r;
	
	printf("The area of circle is %f : \n",area);
	printf("The circumference of circle is %f : \n",circumference);
	
	return 0;
}
