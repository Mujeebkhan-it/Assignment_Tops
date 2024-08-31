//Write a program in C to remove characters from a string except
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isCharToKeep(char ch, const char *keepChars) {
    while (*keepChars) {
        if (ch == *keepChars) {
            return true;
        }
        keepChars++;
    }
    return false;
}

void filterString(const char *source, const char *keepChars, char *result) {
    while (*source) {
        if (isCharToKeep(*source, keepChars)) {
            *result++ = *source;
        }
        source++;
    }
    *result = '\0';
}

int main() {
    char source[100], keepChars[100], result[100];
    
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';
    
    printf("Enter the characters to keep: ");
    fgets(keepChars, sizeof(keepChars), stdin);
    keepChars[strcspn(keepChars, "\n")] = '\0';
    
    filterString(source, keepChars, result);
    
    printf("Filtered string: '%s'\n", result);
    
    return 0;
}

