//Write a program in C to find the length of a string without using
//libraryfunctions.

#include<stdio.h>
int main()
{
	char name[50];
	int length=0,i;
	printf("\nEnter the string = ");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		length++;
	}
	
	printf("\nLength of string is = %d",length);
	
	return 0;
}
