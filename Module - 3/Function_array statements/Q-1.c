//Write a program to find out the max number from given array using
//function

#include<stdio.h>

int findmax(int arr[],int size)
{
	int i;
	int max = arr[0];
	
	for(i = 1;i < size; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}	
	}
	return max;	
}

int main()
{
	int arr[] = {1,5,6,8,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int max = findmax(arr,size);
	
	printf("Max number is = %d",max);
	
	return 0;
}
