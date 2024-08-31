//Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main()
{
	
	int num,sum = 0;
	int i = 0;
	while(i < 10)
	{
		printf("Enter the number : \n");
		scanf("%d",&num);
		
		sum = sum + num;
		i++;
	}
	
	printf("The sum of number is = %d",sum);
	return 0;
}
