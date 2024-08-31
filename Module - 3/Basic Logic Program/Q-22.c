//Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include <stdio.h>

int main() {
    double principal = 1000; 
    double rate = 5; 
    int years = 5; 
    
    double amount = principal * (1 + rate / 100); // Amount = P(1 + R/100)
    double compound_interest = amount - principal; // Compound Interest = Amount - P
    
    printf("Compound Interest after %d years: %.2f\n", years, compound_interest);

    return 0;
}

