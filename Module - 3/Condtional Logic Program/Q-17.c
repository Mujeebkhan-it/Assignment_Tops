//Write a C program to check whether a triangle can be formed with the given
//values for the angles.

#include<stdio.h>

int main()
{
	int side1,side2,base;
	printf("Enter Side 1 : ");
	scanf("%d",&side1);
	printf("Enter Side 2 : ");
	scanf("%d",&side2);
	printf("Enter Base : ");
	scanf("%d",&base);	
	
	if(side1 + side2 + base == 180){
		printf("Triangle!");
	}
	else{
		printf("Not Triagle!");
	}
	
	return 0;
}
