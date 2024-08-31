//.find the area of a rectangular prism formula A=2(wl+hl+hw)
#include<stdio.h>

int main()
{
	float height,length,width,area;
	printf("Enter the height : ");
	scanf("%f",&height);
	printf("Enter the length : ");
	scanf("%f",&length);
	printf("Enter the width : ");
	scanf("%f",&width);
	
	area = 2 * (width*length+height*length+height*width);
	
	printf("\nThe area of rectengular prism is : %f",area);
	
	return 0;
}
