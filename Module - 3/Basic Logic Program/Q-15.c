//.Convert school’s name in abbreviated form
#include<stdio.h>

int main()
{
	char fname[20],midname[20],lname[20];
	printf("Enter the School's first name, midname and last name : \n");
	scanf("%s%s%s",&fname,&midname,&lname);
	
	printf("The abbreviated name of school is : %c.%c.%s",fname[0],midname[0],lname);
	
	return 0;
}
