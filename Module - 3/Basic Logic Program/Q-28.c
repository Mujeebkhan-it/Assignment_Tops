//Convert years into days and months

#include<stdio.h>
int main(){
	
	int days,years,months;
	printf("Enter the totle years : ");
	scanf("%d",&years);	

	days = years * 365;
	months = days / 30;
	
	
	printf("Total years is %d into days are %d and months are %d",years,days,months);
	
	return 0;
}
