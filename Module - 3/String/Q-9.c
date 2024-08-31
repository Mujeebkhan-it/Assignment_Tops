//Write a program in C to find the maximum number of characters in a string
#include<stdio.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("Enter any string: ");
	gets(str);
	
	i=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	
	printf("maximum number of string = %d",count);
	return 0;
}
