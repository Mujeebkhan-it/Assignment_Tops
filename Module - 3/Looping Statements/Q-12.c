//Program of Armstrong Number in C Using For Loop & While
//Loop


//While Loop
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int num,i,count = 0,sum = 0,rem = 0,power =0;
//	printf("Enter the number : ");
//	scanf("%d",&num);
//	int copy1 = num;
//	int copy2 = num;
//	
//	
//	while(num != 0)
//	{
//		count++;
//		num = num / 10;
//	}
//	
//	while(copy1 != 0)
//	{
//		rem = copy1 % 10;
//		power = pow(rem ,count);
//		sum = sum + power;
//		copy1 = copy1 / 10;
//	}
//	
//	if(sum == copy2){
//		printf("\nArmstrong number");
//	}
//	else
//	{
//		printf("\nNot Armstrong number");
//	}
//	
//	return 0;
//}


//For loop
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,count = 0,sum = 0,rem = 0,power =0;
	printf("Enter the number : ");
	scanf("%d",&num);
	int copy1 = num;
	int copy2 = num;
	
	for(i = 1; num != 0; i++)
	{
		count++;
		num = num / 10;
	}
	
	for(i = 1; copy1 != 0; i++)
	{
		rem = copy1 % 10;
		power = pow(rem ,count);
		sum = sum + power;
		copy1 = copy1 / 10;
	}
	
	if(sum == copy2){
		printf("\nArmstrong number");
	}
	else
	{
		printf("\nNot Armstrong number");
	}
	
	return 0;
}
