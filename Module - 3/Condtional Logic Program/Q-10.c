//WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	if(num == 0){
		printf("Number is 0");
	}
	else if(num > 0){
		printf("Number is positive");
	}
	else if(num < 0){
		printf("Number is Negative");
	}
	else{
		printf("Invalid");
	}
	
	return 0;
}
