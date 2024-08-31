//.Calculate person’s insurance premium based on salary

#include<stdio.h>
int main()
{
	float ins_prem,salary,ins_perc = 0.1;//10%
	printf("Enter the salary of employee : ");
	scanf("%f",&salary);
		
	ins_prem = salary * ins_perc;
	printf("Your insurance premium is : %.2f",ins_prem);
	return 0;
}
