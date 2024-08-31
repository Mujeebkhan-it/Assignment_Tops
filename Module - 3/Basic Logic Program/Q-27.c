//.Convert days into months

#include<stdio.h>
int main()
{
	int days,month;
	printf("Enter the totle days : ");
	scanf("%d",&days);
	
	month = days / 30;
	
	printf("Month of given days are : %d",month);
	return 0;
}
