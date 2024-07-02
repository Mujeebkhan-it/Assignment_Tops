//WAP to make simple calculator (operation include Addition,
//Subtraction,Multiplication, Division, modulo) using conditional
//statement
#include<stdio.h>

int main()
{
	int n1,n2,add,sub,mul,div,modulo;
	char button;
	printf("Enter the number 1 : ");
	scanf("%d",&n1);
	printf("Enter the number 2 : ");
	scanf("%d",&n2);
	
	add = n1 + n2;
	sub = n1 - n2;
	mul = n1 * n2;
	div = n1 / n2;
	modulo = n1 % n2;
	
	printf("\nEnter + for Addition \n");
	printf("Enter - for Subtraction \n");
	printf("Enter * for Multiplication \n");
	printf("Enter / for Division \n");
	printf("Enter %% for Modulo \n\n");
	
	printf("Enter the valid character : ");
	scanf(" %c",&button);
	
	if(button == '+'){
		printf("\nThe Addition of given number is : %d",add);
	}
	else if(button == '-'){
		printf("\nThe Substraction of given number is : %d",sub);
	}
	else if(button == '*'){
		printf("\nThe Multiplication of given number is : %d",mul);
	}
	else if(button == '/'){
		printf("\nThe Division of given number is : %d",div);
	}
	else if(button == '%'){
		printf("\nThe Modulo of given number is : %d",modulo);
	}
	else{
		printf("\nInvalid character");
	}
	return 0;
}
