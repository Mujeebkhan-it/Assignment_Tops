//Write a program in C to separate individual characters from a string

#include<stdio.h>
int main()
{
	int num[5],i;
	printf("Enter string elements: \n");
	for(i=0;i<5;i++)
	{
		scanf(" %d",&num[i]);
	}
	
	printf("String elements are: \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
