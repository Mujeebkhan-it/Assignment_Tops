//Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
int main()
{
	int num;
	int sum = 0;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int i = 0;
	while(i <= num)
	{
		sum = sum + i;
		i++;
	}
	printf("Sum is : %d",sum);
	
	return 0;
}
