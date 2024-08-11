//Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>

int main()
{
	int i,j,num,fact = 1;
	printf("Enter 5 numbers \n\n");
	
	for(i = 0; i<5 ; i++)
	{
		printf("Number %d : ",i+1);
		scanf("%d",&num);
		
		fact = 1;
		
		for(j=1;j<=num;j++)
		{
			fact = fact * j;
		}
		printf("Factorial of %d = %d\n\n",num,fact);
	}
	
	return 0;
}
