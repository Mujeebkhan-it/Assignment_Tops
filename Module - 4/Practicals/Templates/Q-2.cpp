//Write a program of to sort the array using templates

#include <iostream>

using namespace std;

template <typename T>
void selectionSort(T arr[], int size) 
{
	int i,j;
    for(i = 0; i < size - 1; ++i) 
	{
        int minIndex = i;
        for(j = i + 1; j < size; ++j)
		{
            if(arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }
        
        T temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

template <typename T>
void printArray(T arr[], int size) 
{
	int i;
    for(i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int intArray[] = {64, 25, 12, 22, 11};
    //Size of array
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    
	cout << "Integer array before sorting: ";
	printArray(intArray, intSize);
    selectionSort(intArray, intSize);
    
    cout << "Integer array after sorting: ";
    printArray(intArray, intSize);

    return 0;
}

