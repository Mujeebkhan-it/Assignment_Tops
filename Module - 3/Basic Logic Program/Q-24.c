//Accept 5 employees name and salary and count average and total
//salary 

#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
}e[5];

int main() {
	
	int i;
    struct Employee;
    float totalSalary = 0.0;
    float averageSalary;
    
    for (i = 0; i < 5; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf(" %[^\n]s", e[i].name); 
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &e[i].salary);
        
        totalSalary += e[i].salary;
    }
    
    averageSalary = totalSalary / 5.0;
    
    printf("\nTotal salary of all employees: %.2f\n", totalSalary);
    printf("Average salary of all employees: %.2f\n", averageSalary);
    
    return 0;
}

