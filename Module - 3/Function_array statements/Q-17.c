//. WAP to show difference between Structure and Union.
#include<stdio.h>

struct Student
{
	int num;
	char ch;
};

union Studentu
{
	int num;
	char ch;
};



int main()
{
	struct Student st;
	st.num = 65;
	st.ch = 'D';
	union Studentu t;
	t.num = 65;
	t.ch = 'D';
	
	
	printf("The Value of num = %d\n",st.num);
	printf("The value of char = %c\n",st.ch);
	printf("The Value of num = %d\n",t.num);
	printf("The value of char = %c\n",t.ch);
	return 0;
}

