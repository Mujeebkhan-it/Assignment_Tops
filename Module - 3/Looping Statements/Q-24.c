//1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() 
{
	
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    int sum = 0;
    
    for(i = 1; i <= n; i++)
	{
        sum += i;
    }
    
    printf("The sum of the first %d natural numbers is %d", n, sum);
    
    return 0;

}
