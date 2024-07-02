//Find character value from ascii
#include<stdio.h>

int main()
{
		
	int ascii_value;
    printf("Enter correct ASCII value (0-127): ");
    scanf("%d", &ascii_value);
    
    // Convert ASCII value to character
    char ch = ascii_value;
    printf("Character corresponding to ASCII value %d: %c\n", ascii_value, ch);
	
	return 0;
}
