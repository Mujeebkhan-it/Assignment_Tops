//Accept 2 numbers and find out its sum check it size

#include <stdio.h>

int main() {
	
    int num1, num2;
    int sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    
    return 0;
}

