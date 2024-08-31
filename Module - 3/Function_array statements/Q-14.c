//perform 2d matrix array
#include<stdio.h>

int main() 
{
	int rows, i, j, cols;    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(i = 0; i < rows; i++) 
	{
        for(j = 0; j < cols; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

