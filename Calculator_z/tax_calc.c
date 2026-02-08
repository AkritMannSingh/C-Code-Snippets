#include <stdio.h>
int main()
{
        printf("👋 Hey Welcome to Income Tax Calculator .\n");

        printf("************************************************************\n");

        int income;
        float tax = 0;

        printf("Enter your Income:");
        scanf("%d", &income);
#include <stdio.h>

int main() {
    printf("📊 INCOME TAX CALCULATOR\n");
    printf("===========================\n\n");
    
    int income;
    float tax = 0;
    
    printf("Enter your income: ₹ ");
    scanf("%d", &income);
    
    printf("\nTAX SLABS:\n");
    printf("₹ 0 - 2,50,000   : No tax\n");
    printf("₹ 2,50,001 - 5,00,000 : 5%%\n");
    printf("₹ 5,00,001 - 10,00,000 : 20%%\n");
    printf("Above ₹ 10,00,000 : 30%%\n");
    printf("--------------------------------\n");
    
   
    if (income <= 250000) {
        tax = 0;
        printf("Income falls in slab 1: No tax\n");
    }
    else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
        printf("Income falls in slab 2: 5%% tax\n");
    }
    else if (income <= 1000000) {
        tax = 12500 + (income - 500000) * 0.20;  // 12500 = 5% of 250000
        printf("Income falls in slab 3: 20%% tax\n");
    }
    else {
        tax = 112500 + (income - 1000000) * 0.30;  // 112500 = 12500 + 100000 (20% of 500000)
        printf("Income falls in slab 4: 30%% tax\n");
    }
    
    printf("\n📋 TAX SUMMARY:\n");
    printf("--------------------------------\n");
    printf("Income:      ₹ %d\n", income);
    printf("Tax to pay:  ₹ %.2f\n", tax);
    printf("Income after tax: ₹ %.2f\n", income - tax);
    printf("--------------------------------\n\n");
    
    printf("Thank you for using the calculator! 👍\n");
    
    return 0;
}
