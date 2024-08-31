//Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?

#include<stdio.h>

int main()
{
	int stud,req_apples;
	printf("Enter the totle number of students : ");
	scanf("%d",&stud);
	
	req_apples = stud * 5;
	
	printf("\nThe required apples for %d students are %d apples",stud,req_apples);
	
	return 0;
}
