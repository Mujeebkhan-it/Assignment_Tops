//. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d", &n);

    int finalSum = 0;
    for(i = 1; i <= n; i++)
	{    
        int currentSum = 0;
        for(j = 1; j <= i; j++)
		{
            currentSum += j;
    	}
    	
        finalSum += currentSum;
    }

    printf("The sum of the series is %d\n", finalSum);

    return 0;
}

