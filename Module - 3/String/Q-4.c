//Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, words;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    i = 0;
    words = 0;
    while (str[i] != '\0') 
	{
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') 
		{
            if (i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t') 
			{
                words++;
            }
        }
        i++;
    }

    // check not a space
    if (i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t') 
	{
        words++;
    }

    printf("Total number of words = %d\n", words);

    return 0;
}
