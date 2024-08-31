//.WAP to accept 5 students name and store it in array

#include <stdio.h>
int main(){
    char students[5][50]; 
    int i;

    for(i = 0; i < 5; i++) 
	{
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i]);
    }

    printf("\nThe names of the students are:\n");
    for(i = 0; i < 5; i++)
	{
        printf("%s\n", students[i]);
    }

    return 0;
}
