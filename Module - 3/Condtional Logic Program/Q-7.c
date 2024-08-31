//Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks >= 33 && marks <= 100){
		printf("PASS");
	}
	else if(marks >= 0 && marks < 33){
		printf("Fail");
	}
	else{
		printf("Invalid");
	}
	
	return 0;
}
