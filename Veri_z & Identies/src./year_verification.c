#include <stdio.h>

int main() {
    int year;
    char feedback[100];

    printf("************************************************************\n");
    printf("*         WELCOME TO YEAR VERIFICATION PROGRAM            *\n");
    printf("************************************************************\n\n");


    while (1) {
        printf("Enter a year (1-9999): ");

        if (scanf("%d", &year) != 1) {
            printf("Invalid input! Please enter a valid number.\n");

            while (getchar() != '\n');
            continue;
        }


        while (getchar() != '\n');

        if (year < 1 || year > 9999) {
            printf("Year must be between 1 and 9999!\n");
            continue;
        }

        break;
    }

    printf("\n");
    printf("============================================================\n");
    printf("RESULT:\n");


    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("✓ Year %d is a LEAP YEAR\n", year);
        printf("  - It has 366 days\n");
        printf("  - February has 29 days\n");
    } else {
        printf("✗ Year %d is NOT a leap year\n", year);
        printf("  - It has 365 days\n");
        printf("  - February has 28 days\n");
    }

    printf("============================================================\n\n");

    printf("Did this program help you?\n");
    printf("Please provide your feedback (max 99 characters): ");

    fgets(feedback, sizeof(feedback), stdin);

    size_t len = 0;
    while (feedback[len] != '\0' && feedback[len] != '\n') {
        len++;
    }
    feedback[len] = '\0';

    printf("\n************************************************************\n");
    printf("THANK YOU FOR YOUR FEEDBACK!\n");

    if (len > 0) {
        printf("You said: \"%s\"\n", feedback);
    } else {
        printf("(No feedback provided)\n");
    }

    printf("\nPROGRAM SUMMARY:\n");
    printf("- Verified year: %d\n", year);
    printf("- Leap year status: %s\n", 
           ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "Yes" : "No");

    printf("\n Program End \n");

    printf("************************************************************\n");

    return 0;
}