//Write a program in C to read a sentence and replace lowercase characters
//withuppercase and vice versa.

#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100];
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    printf("Modified sentence: %s", str);

    return 0;
}
