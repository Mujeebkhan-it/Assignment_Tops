//Write a program of structure employee that provides the
//following
//a. information -print and display empno, empname,
//addressandage

//#include <stdio.h>
//#include <string.h>
//
//struct Employee {
//    int empno;
//    char empname[100];
//    char address[200];
//    int age;
//}e[100];
//
//int main()
//{
//
//	struct Students;
//	int i,size;
//		
//	printf("How many numbers of Employee you want to store  : ");
//	scanf("%d",&size);
//	
//	for(i=0;i<size;i++)
//	{
//		printf("\n\nEnter the Employee number : ");
//		scanf("%d",&e[i].empno);
//		
//		printf("\nEnter the Name of Employee : ");
//		getchar();
//		gets(e[i].empname);
//		
//		printf("\nEnter the Address of Employee : ");
//		getchar();
//		gets(e[i].address);
//		
//		printf("\nEnter the Age of Employee : ");
//		scanf("%d",&e[i].age);	
//	}
//	
//	printf("\n===============================================");
//	printf("\n|      |             |           |            |");
//	printf("\n|  No  |    Name     |  Address  |    Age     |");
//	printf("\n|      |             |           |            |");
//	printf("\n-----------------------------------------------");
//	for(i=0;i<size;i++)
//	{
//		printf("\n|                                         |");
//		printf("\n|   %d\t   %s\t   %s\t       %d   |",e[i].empno,e[i].empname,e[i].address,e[i].age);
//		printf("\n|                                         |");
//	}
//	printf("\n-----------------------------------------------");
//	
//	
//}

//========================================================================

//Write a program of structure for five employee
//that provides the following information -print and
//displayempno, empname, address andage

#include<stdio.h>

struct Employee 
{
    int empno;
    char empname[100];
    char address[200];
    int age;
};

int main() 
{
    struct Employee employees[5];
	int i;
    
    for(i = 0; i < 5; i++) {
        printf("Entering details for employee %d:\n", i + 1);
        
        printf("Enter employee number: ");
        scanf("%d", &employees[i].empno);
        getchar();
        
        printf("Enter employee name: ");
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        employees[i].empname[strcspn(employees[i].empname, "\n")] = '\0';
        
        printf("Enter employee address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = '\0';
        
        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);
        getchar();

        printf("\n");
    }

    printf("Employee Details:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n", employees[i].age);
    }

    return 0;
}


