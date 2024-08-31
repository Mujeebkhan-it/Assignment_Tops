//calculate compound interest 
#include <stdio.h>
#include <math.h>

int main() {
    double principal = 1000; 
    double rate = 0.05; // annual interest rate (5%)
    int years = 5; 
    int comp_per_year = 12; // compounded monthly
    
    double amount;
    double base = 1 + (rate / comp_per_year);
    int n = comp_per_year * years;
    
    amount = principal * pow(base, n);
    
    printf("Compound interest after %d years: %.2f\n", years, amount);

    return 0;
}

