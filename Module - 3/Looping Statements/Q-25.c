// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int sum = 0;
    for(i = 1; i <= n; i++) 
	{
        sum += i * i; 
	}

    printf("The sum of squares of the first %d natural numbers is %d\n", n, sum);

    return 0;
}

