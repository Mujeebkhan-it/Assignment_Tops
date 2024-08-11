//Accept 3 numbers from user using while loop and check each numbers
//palindrome

#include <stdio.h>

int main() {
    int num, rem, i, reverse = 0;
    int copy;

    for(i = 0; i < 3; i++)
	{
        printf("\nEnter the number: ");
        scanf("%d", &num);
        copy = num;
        reverse = 0;

        while (num != 0) {
            rem = num % 10;
            reverse = (reverse * 10) + rem;
            num = num / 10;
        }

        printf("\nOriginal Number is : %d", copy);
        printf("\nReverse Number is : %d", reverse);

        if (copy == reverse) {
            printf("\nPalindrome\n");
        } else {
            printf("\nNot Palindrome\n");
        }
    }

    return 0;
}

