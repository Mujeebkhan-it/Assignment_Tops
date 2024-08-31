//Accept month number and display month name

#include<stdio.h>
int main()
{
	int month_number;
	printf("Enter Month Number : ");
	scanf("%d",&month_number);
	
	switch(month_number){
		case 1:
			printf("Month %d = January",month_number);
			break;
		case 2:
			printf("Month %d = February",month_number);
			break;
		case 3:
			printf("Month %d = March",month_number);
			break;
		case 4:
			printf("Month %d = April",month_number);
			break;
		case 5:
			printf("Month %d = May",month_number);
			break;
		case 6:
			printf("Month %d = June",month_number);
			break;
		case 7:
			printf("Month %d = July",month_number);
			break;
		case 8:
			printf("Month %d = August",month_number);
			break;
		case 9:
			printf("Month %d = September",month_number);
			break;
		case 10:
			printf("Month %d = October",month_number);
			break;
		case 11:
			printf("Month %d = November",month_number);
			break;
		case 12:
			printf("Month %d = December",month_number);
			break;
		default:
			printf("Invalid Number of Month...please enter number between 1 - 12!");
			break;
	}
	return 0;
}
