//Write a program in C to read any Month Number in integer and display the
//number of days for this month.

#include<stdio.h>
int main()
{
	
	int month;
	printf("Enter the month number : ");
	scanf("%d",&month);
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		
			printf("Number of Days in this month = 31");
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Numer of Days in this month = 30");
			break;
		
		case 2:
			printf("Number of Days in this month = 28 or 29");
			break;
		
		default:
			printf("Invalid month number...please enter month in between 1 - 12");
	}
	
	return 0;
;}
