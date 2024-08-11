//Write a program in C to find the number of times a given word 'is'
//appears inthe given string.

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100];
    int i,count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]=='s' && str[i-1]=='i' && str[i+1]==' ' && str[i-2]==' ')
    	count++;
	}
	
	printf("'is' in the sentence is used for %d times",count);
    return 0;
}
