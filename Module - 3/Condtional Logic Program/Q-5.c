//Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
	int num;
	printf("Enter your number : ");
	scanf("%d",&num);
	
	if(num >= 0){
		printf("%d is positive",num);
	}
	else{
		printf("%d is negative",num);
	}
	
	return 0;
}
