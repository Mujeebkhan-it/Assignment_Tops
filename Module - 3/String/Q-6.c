//Write a program in C to count the total number of alphabets, digits and
//specialcharacters in a string.

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100];
    int alphabets = 0, digits = 0, specialCharacters = 0,i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isspace(str[i])) {
            specialCharacters++;
        }
    }
    
    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specialCharacters);
    
    return 0;
}

