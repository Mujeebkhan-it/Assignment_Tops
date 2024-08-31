//Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable

#include<stdio.h>

//a. with 3rd var
//int main()
//{
//	int a,b,c;
//	printf("Enter the value of a : ");
//	scanf("%d",&a);
//	printf("Enter the value of b : ");
//	scanf("%d",&b);
//	printf("\nbefore swapping"); 
//	printf("\na is : %d",a);
//	printf("\nb is : %d\n",b);
//	
//	c = a;
//	a = b;
//	b = c;
//	
//	printf("\nafter swapping"); 
//	printf("\na is : %d",a);
//	printf("\nb is : %d",b);
//	return 0;
//	
//		
//	return 0;
//}



//---------------------------------------------------------------------------------------------------


//b.Without 3rd variable
int main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\nbefore swapping"); 
	printf("\na is : %d",a);
	printf("\nb is : %d\n",b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nafter swapping"); 
	printf("\na is : %d",a);
	printf("\nb is : %d",b);
	
	return 0;	
	
}
