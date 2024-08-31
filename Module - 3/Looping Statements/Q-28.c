//1 2 3 6 9 18 27 54...

#include <stdio.h>
int main() 
{
    int num_terms = 10;
    int sequence[num_terms];
    int i;
    
    sequence[0] = 1;
    
    for(i = 1; i < num_terms; i++) {
        if(i % 2 == 1) 
		{
            sequence[i] = sequence[i - 1] * 2;
        } 
		else 
		{
            sequence[i] = sequence[i - 1] * 3 / 2;
        }
    }
    
    for(i = 0; i < num_terms; i++) 
	{
        printf("%d ", sequence[i]);
    }
    
	printf("\n");
    
    return 0;
}

