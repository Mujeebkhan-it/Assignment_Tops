//Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
int main()
{
	float cost,sell,profit,loss;
	printf("Enter the cost price : ");
	scanf("%f",&cost);
	printf("Enter the sell price : ");
	scanf("%f",&sell);
	
	if(cost < sell){
		profit = sell - cost;
		printf("You got profit of rs : %.2f",profit);
	}	
	else if(cost > sell){
		loss = cost - sell;
		printf("You got loss of rs : %.2f",loss);
	}
	else{
		printf("No profit no loss!!!....");
	}
	return 0;
}
