//C Program to Check Uppercase or Lowercase or Digit or Special
//Character

#include<stdio.h>
int main()
{
	char letter;
	printf("Enter a letter : ");
	scanf("%c",&letter);
	
	if(letter >= 'A' && letter <= 'Z' ){
		printf("Your letter is in Uppercase");
	}
	else if(letter >= 'a' && letter <= 'z' ){
		printf("Your letter is in Lowercase");
	}
	else if(letter >= '0' && letter <= '9'){
		printf("Your letter is in Digit");
	}
	else{
		printf("Special Character");
	}
	
	
	return 0;
}
