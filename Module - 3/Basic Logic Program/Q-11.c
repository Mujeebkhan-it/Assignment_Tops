//Find circumference of square formula : C = 4 * a

#include<stdio.h>

int main()
{
	int side,circum;
	printf("Enter the side of sqaure : ");
	scanf("%d",&side);
	
	circum = 4 * side;
	
	printf("The circumference of the square is : %d",circum);
	return 0;
}
