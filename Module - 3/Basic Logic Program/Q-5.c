//Find Area of Cube formula : a = 6a2

#include<stdio.h>
int main()
{
	float edge,area;
	printf("Enter the edge of a cube : ");
	scanf("%f",&edge);
	
	area = 6 * edge * 2;
	
	printf("The area of a cube is %f",area);
	
	return 0;
}
