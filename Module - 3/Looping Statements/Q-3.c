//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h>
int main()
{
	int num,i,even=0,odd=0,sumo=0,sume=0;
	
	for(i = 0; i < 10; i++){
		printf("enter a number: ");
		scanf("%d",&num);
		
		if(num % 2 ==0 ){
			even++;
			sume = sume + num;
		}
		else
		{
			odd++;
			sumo = sumo + num;
		}
	}
	
	printf("even numbers= %d\n",even);
	printf("odd numbers= %d\n",odd);
	printf("sum of even numbers= %d\n",sume);
	printf("sum of odd numbers= %d",sumo);
	
	return 0;
}
