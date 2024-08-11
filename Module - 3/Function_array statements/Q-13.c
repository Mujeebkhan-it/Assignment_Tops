//WAP to accept 5 numbers from user and check entered number is even
//or oddusing of array

#include<stdio.h>
int main()
{
	int arr[100],odd[100],even[100];
	int i,j = 0,sizea,k = 0;
	int cnto = 0,cnte = 0;

	//user input array
	printf("Enter the size of array : ");
	scanf("%d",&sizea);
	
	for(i = 0; i < sizea; i++)
	{
		printf("\nEnter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);	
	}	
	
	//store odd value
	for(i = 0; i < sizea; i++)
	{
		if(arr[i] % 2 == 0)
		{
			even[j] = arr[i];
			j++;
			cnte++;
		}
		else
		{
			odd[k] = arr[i];
			cnto++;
			k++;
		}
	}
	
	//print array
	printf("\nOdd Array = ");
	for(i = 0; i < cnto; i++)
	{
		printf("%d\t",odd[i]);
	}	
	
	printf("\nEven Array = ");
	for(i = 0; i < cnte; i++)
	{
		printf("%d\t",even[i]);
	}

	
	return 0;
}
