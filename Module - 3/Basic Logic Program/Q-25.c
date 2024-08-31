//Accept 5 expense from user and find average of expense

#include<stdio.h>
int main() {
    float expenses[5];
    float totalExpense = 0.0;
    float averageExpense;
    int i;
    
    printf("Enter 5 expenses:\n");
    for (i = 0; i < 5; ++i) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        
        totalExpense += expenses[i];
    }
    

    averageExpense = totalExpense / 5.0;
    
    printf("\nAverage expense: %.2f\n", averageExpense);
    
    return 0;
}

