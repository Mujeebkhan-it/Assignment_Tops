//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary

#include<stdio.h>
int main()
{
	float ins_prem,rem_salary,m_salary,loan_inst,ins_perc = 0.1,loan_perc = 0.1;//10%
	printf("Enter the monthly salary of employee : ");
	scanf("%f",&m_salary);
		
	ins_prem = m_salary * ins_perc; //find ins_prem
	
	loan_inst = m_salary * loan_perc; //find loan_installments
	
	rem_salary = m_salary - loan_inst - ins_prem; //deduct them from salary
	
	printf("Your remaining salary is : %.2f",rem_salary);
	return 0;
}
