//WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	
	if(year % 4 == 0){
		printf("Leap Year");
	}
	else{
		printf("Not leap year");
	}
	
	return 0;
}
