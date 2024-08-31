//Accept 5 names from user at run time
#include <stdio.h>

#define MAX_NAME_LENGTH 100
#define NUM_NAMES 5

int main() 
{
	int i; 
    char names[NUM_NAMES][MAX_NAME_LENGTH];
    
    printf("Please enter %d names:\n", NUM_NAMES);
    
    for(i = 0; i < NUM_NAMES; i++) {
        printf("Name %d: ", i + 1);
        scanf("%99s", names[i]);
    }

    printf("\nYou entered the following names:\n");
    for(i = 0; i < NUM_NAMES; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

