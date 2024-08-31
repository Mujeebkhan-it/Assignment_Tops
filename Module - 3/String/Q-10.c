//Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h>

void extractSubstring(char *source, int start, int length, char *destination) {
    int sourceLen = strlen(source);
    
    if (start < 0 || start >= sourceLen) {
        destination[0] = '\0';
        return;
    }
    
    if (length < 0) {
        destination[0] = '\0';
        return;
    }
    
    int copyLength = (start + length > sourceLen) ? (sourceLen - start) : length;
    strncpy(destination, source + start, copyLength);
    destination[copyLength] = '\0';
}

int main() {
    char source[100], substring[100];
    int start, length;
    
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0';
    
    printf("Enter the start position: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);
    
    extractSubstring(source, start, length, substring);
    
    printf("Extracted substring: '%s'\n", substring);
    
    return 0;
}

