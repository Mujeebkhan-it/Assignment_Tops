//WAP to take two Array input from user and sort them in
//ascending ordescending order as per user’s choice

#include<stdio.h>

void sortAscending(int arr[], int n) 
{
    int temp,i,j;
    for(i = 0; i < n - 1; i++) 
	{
        for(j = i + 1; j < n; j++) 
		{
           	if(arr[i] > arr[j]) 
			   {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void sortDescending(int arr[], int n) 
{
    int temp,i,j;
    for(i = 0; i < n - 1; i++) 
	{
        for(j = i + 1; j < n; j++) 
		{
            if(arr[i] < arr[j])
			{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) 
{
	int i;
    for(i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
	printf("\n");
}

int main() 
{
    int n1, n2,i;
    int choice;

	printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter the elements of the first array:\n");
    for(i = 0; i < n1; i++) 
	{
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        sortAscending(arr1, n1);
        sortAscending(arr2, n2);
    }
	else if (choice == 2) 
	{
        sortDescending(arr1, n1);
        sortDescending(arr2, n2);
    } 
	else 
	{
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Sorted first array: ");
    printArray(arr1, n1);

    printf("Sorted second array: ");
    printArray(arr2, n2);

    return 0;
}

