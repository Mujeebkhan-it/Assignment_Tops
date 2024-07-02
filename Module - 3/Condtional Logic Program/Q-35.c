//.Accept the input month number and print number of days in that
//month.


#include<stdio.h>
int main()
{
	int month_number;
	printf("Enter Month Number : ");
	scanf("%d",&month_number);
	
	switch(month_number){
		case 1:
			printf("Month %d = 31 Days",month_number);
			break;
		case 2:
			printf("Month %d = 28 or 29 Days",month_number);
			break;
		case 3:
			printf("Month %d = 31 Days",month_number);
			break;
		case 4:
			printf("Month %d = 30 Days",month_number);
			break;
		case 5:
			printf("Month %d = 31 Days",month_number);
			break;
		case 6:
			printf("Month %d = 30 Days",month_number);
			break;
		case 7:
			printf("Month %d = 31 Days",month_number);
			break;
		case 8:
			printf("Month %d = 31 Days",month_number);
			break;
		case 9:
			printf("Month %d = 30 Days",month_number);
			break;
		case 10:
			printf("Month %d = 31 Days",month_number);
			break;
		case 11:
			printf("Month %d = 30 Days",month_number);
			break;
		case 12:
			printf("Month %d = 31 Days",month_number);
			break;
		default:
			printf("Invalid Number of Month...please enter number between 1 - 12!");
			break;
	}
	return 0;
}
