//Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main()
{
	float basic_salary,gross_salary,hra,da;
	printf("Enter your salary : ");
	scanf("%f",&basic_salary);
	
	if(basic_salary <= 10000){
		hra = basic_salary * 0.2;
		da = basic_salary * 0.8;
		gross_salary = basic_salary + hra + da;
		printf("Gross salary = %f",gross_salary);
	}
	
	else if(basic_salary <= 20000){
		hra = basic_salary * 0.25;
		da = basic_salary * 0.9;
		gross_salary = basic_salary + hra + da;
		printf("Gross salary = %f",gross_salary);
	}
	
	else if(basic_salary > 20000){
		hra = basic_salary * 0.3;
		da = basic_salary * 0.95;
		gross_salary = basic_salary + hra + da;
		printf("Gross salary = %f",gross_salary);
	}
	
	else {
		printf("Invalid");
	}
	
	return 0;
}
