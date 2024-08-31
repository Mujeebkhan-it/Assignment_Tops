//WAP to print table up to given numbers

#include<stdio.h>
int main()
{
	int i,num,ans=1;
	printf("Enter the number to print table : ");
	scanf("%d",&num);
	
	for(i = 1; i <= 10; i++)
	{
		ans = num * i;
		printf("%d x %d = %d\n",num,i,ans);
	}
	
	return 0; 
}
