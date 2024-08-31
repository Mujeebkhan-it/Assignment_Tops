//Find the Character Is Vowel or Not
#include<stdio.h>

int main()
{
	char letter;
	printf("Enter Single Letter : ");
	scanf("%c",&letter);
	
	if(letter == 'a' || letter == 'e'|| letter == 'i' || letter == 'o' || letter == 'u'){
		printf("Vowel");
	}
	else{
		printf("Not Vowel");
	}
	
	return 0;
}
