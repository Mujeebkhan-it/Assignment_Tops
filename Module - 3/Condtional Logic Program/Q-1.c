//Write a C program to accept two integers and check whether they are equal
//or not

#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter n1 : ");
	scanf("%d",&n1);
	printf("Enter n2 : ");
	scanf("%d",&n2);
	
	if(n1 == n2){
		printf("%d = %d ...Both are equal",n1,n2);
	}
	else{
		printf("Not equal");
	}
	return 0;
}
