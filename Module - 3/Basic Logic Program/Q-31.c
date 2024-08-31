//Convert kilometers into meters

#include<stdio.h>

int main()
{
	int kms,meters;
	printf("Enter the totle kilometers : ");
	scanf("%d",&kms);
	
	meters = kms * 1000;
	
	printf("Given kilometers are : %d and convert into \nmeters are : %d",kms,meters);
		
	return 0;
}
