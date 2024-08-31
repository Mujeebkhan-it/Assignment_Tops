//Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
	int min,sec,hours;
	printf("Enter the totle minutes : ");
	scanf("%d",&min);
	
	sec = min * 60;
	hours = min / 60;
	
	printf("\nConvert totle %d minutes into \n%d hours and \n%d seconds",min,hours,sec);
	
	return 0;
}
