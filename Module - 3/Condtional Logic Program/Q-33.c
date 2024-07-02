//WAP to input the week number and print week day.

#include<stdio.h>
int main()
{
	int week_number;
	printf("Enter Week Number : ");
	scanf("%d",&week_number);
	
	switch(week_number){
		case 1:
			printf("Day %d = Monday",week_number);
			break;
		case 2:
			printf("Day %d = Tuesday",week_number);
			break;
		case 3:
			printf("Day %d = Wednesday",week_number);
			break;
		case 4:
			printf("Day %d = Thursday",week_number);
			break;
		case 5:
			printf("Day %d = Friday",week_number);
			break;
		case 6:
			printf("Day %d = Saturday",week_number);
			break;
		case 7:
			printf("Day %d = Sunday",week_number);
			break;
		default:
			printf("Invalid number day...please enter number between 1 - 7!");
			break;
	}
	return 0;
}
