//WAP to make addition, Subtraction and multiplication of two matrix
//using2-D Array

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],sub[10][10],mul[10][10],row,col,i,j,k,choice;
	char ch;
	
	printf("Enter the row number : ");
	scanf("%d",&row);
	printf("Enter the column number : ");
	scanf("%d",&col);
	
	//======================================================================

	//Storing the value in matrix
	//Array a
	for(i = 0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element at a[%d] [%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Array b
	for(i = 0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter the element at b[%d] b[%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	//======================================================================
	
	
	//Calculation, Logic
	//Sum
	for(i = 0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j] = a[i][j] + b[i][j]; 		
		}
	}
	
	//Substracion
	for(i = 0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sub[i][j] = a[i][j] - b[i][j]; 		
		}
	}
	
	//Multiplication
	for(i = 0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mul[i][j] = 0;
			for(k=0;k<col;k++)
			{
				mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);	
			}	
		}
	}
	
	
	//======================================================================
	
	
	//Multiple choice loop
	do{
	printf("\n\nEnter the choice");
	printf("\nEnter 1 for Addition");
	printf("\nEnter 2 for Substraction");
	printf("\nEnter 3 for Multiplication\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i = 0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",sum[i][j]);
				}
				printf("\n");
			}
			break;
		
		
		case 2:
			for(i = 0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",sub[i][j]);
				}
				printf("\n");
			}
			break;
	
	
		case 3:
			for(i = 0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",mul[i][j]);
				}
				printf("\n");
			}
			break;
		
	}
	
	
	printf("\n\nYou Want to operate again (y/n) : ");
	scanf(" %c",&ch);
	
	}while(ch == 'y' || ch == 'Y');
	
	return 0;
}

