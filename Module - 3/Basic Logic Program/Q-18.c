//.Calculate person’s Annual salary

#include<stdio.h>
int main()
{
	int m_salary,a_salary;
	printf("Enter the monthly salary of employee : ");
	scanf("%d",&m_salary);
		
	a_salary = m_salary * 12;
	printf("Your Annual salary is : %d",a_salary);
	return 0;
}
