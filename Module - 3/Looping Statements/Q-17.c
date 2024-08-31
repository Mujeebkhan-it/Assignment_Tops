//.Calculate 5 numbers from user and calculate number of even and odd using
//of while loop

#include<stdio.h>
int main()
{
	int num;
	int sum_odd = 0,sum_even = 0;
	
	
	int i = 1; 
	while( i <= 5 )
	{
		printf("Enter the number : ");
		scanf("%d",&num);
		
		if( num % 2 == 0)
		{
			sum_even = sum_even + num;
		}
		else
		{
			sum_odd = sum_odd + num;
		}
		i++;
	}
	
	printf("\n\nSum of Even are : %d\n",sum_even);
	printf("Sum of Odd are : %d",sum_odd);
	
	return 0;
}
