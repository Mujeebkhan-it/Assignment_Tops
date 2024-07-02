//WAP to convert years into days and days into years

#include<stdio.h>

//a. Convert days into years
//int main()
//{
//	int days,years;
//	printf("Enter totle days : ");
//	scanf("%d",&days);
//	
//	years = days / 365;
//	
//	printf("The given days are %d into years is : %d",days,years);
//	return 0;
//}


// ------------------------------------------------------------------------


//b. Convert years into days
int main()
{
	int days,years;
	printf("Enter totle years : ");
	scanf("%d",&years);
	
	days = years * 365;
	
	printf("The given years are %d into totle days are : %d",years,days);
	return 0;
}
