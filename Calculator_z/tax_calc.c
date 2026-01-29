#include <stdio.h>
int main()
{
        printf("👋 Hey! Welcome to Income Tax Calculator .\n");

        printf("************************************************************\n");

        int income;
        float tax = 0;

        printf("Enter your Income:");
        scanf("%d", &income);

        if (income <= 2500000)
        {
                tax = 0;
        }

        else if (income > 2500000 && income < 500000)
        {
                tax = 0.05 * (income - 2500000);
        }

        else if (income > 500000 && income < 1000000)
        {
                tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        }

        else
        {
                tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        }

        printf("The total Tax you should pay is %.3f\n", tax);

        printf("------------------------------------------------------------\n");

        printf("👍 Thank You! I hope I have helped you...\n");


        return 0;
}
