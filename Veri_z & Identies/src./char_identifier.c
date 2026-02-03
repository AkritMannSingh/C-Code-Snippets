#include <stdio.h>

int main() {
    char ch, feedback[100];
    int continueProgram = 1;

    printf("╔════════════════════════════════════════════╗\n");
    printf("║        CHARACTER IDENTIFIER PROGRAM       ║\n");
    printf("║           ASCII & TYPE ANALYZER           ║\n");
    printf("╚════════════════════════════════════════════╝\n\n");

    do {
        printf("══════════════════════════════════════════════\n");
        printf("ANALYSIS REQUEST:\n");
        printf("══════════════════════════════════════════════\n");


        printf("Enter a character: ");
        ch = getchar();


        int clearBuffer;
        while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);

        printf("\n══════════════════════════════════════════════\n");
        printf("ANALYSIS RESULTS:\n");
        printf("══════════════════════════════════════════════\n");

        printf("┌────────────────────────────────────────────┐\n");
        printf("│ Character Details:                         │\n");
        printf("├────────────────────────────────────────────┤\n");
        printf("│ Character entered: '%c'                   │\n", ch);
        printf("│ ASCII Decimal value: %3d                   │\n", ch);
        printf("│ ASCII Hexadecimal value: 0x%02X            │\n", ch);
        printf("│ ASCII Binary value: ", ch);


        for(int i = 7; i >= 0; i--) {
            printf("%d", (ch >> i) & 1);
            if(i == 4) printf(" ");
        }
        printf("   │\n");
        printf("└────────────────────────────────────────────┘\n\n");

        printf("┌────────────────────────────────────────────┐\n");
        printf("│ Character Type Analysis:                   │\n");
        printf("├────────────────────────────────────────────┤\n");


        int isLower = (ch >= 'a' && ch <= 'z');
        int isUpper = (ch >= 'A' && ch <= 'Z');
        int isDigit = (ch >= '0' && ch <= '9');
        int isSpace = (ch == ' ' || ch == '\t' || ch == '\n');
        int isPunct = (ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || 
                      (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126);

        printf("│ %s Lowercase letter (a-z)            │\n", 
               isLower ? "✓" : "✗");
        printf("│ %s Uppercase letter (A-Z)            │\n", 
               isUpper ? "✓" : "✗");
        printf("│ %s Digit (0-9)                       │\n", 
               isDigit ? "✓" : "✗");
        printf("│ %s Whitespace character              │\n", 
               isSpace ? "✓" : "✗");
        printf("│ %s Punctuation/Special character     │\n", 
               isPunct ? "✓" : "✗");

        printf("└────────────────────────────────────────────┘\n\n");


        printf("┌────────────────────────────────────────────┐\n");
        printf("│ Additional Information:                    │\n");
        printf("├────────────────────────────────────────────┤\n");

        if(isLower) {
            char upper = ch - 32;
            printf("│ Uppercase equivalent: '%c'            │\n", upper);
        }
        else if(isUpper) {
            char lower = ch + 32;
            printf("│ Lowercase equivalent: '%c'            │\n", lower);
        }
        else if(isDigit) {
            printf("│ Numeric value: %d                      │\n", ch - '0');
        }


        if(ch == 32) {
            printf("│ This is the SPACE character          │\n");
        }
        else if(ch == 10) {
            printf("│ This is the NEWLINE character        │\n");
        }
        else if(ch == 9) {
            printf("│ This is the TAB character            │\n");
        }

        printf("└────────────────────────────────────────────┘\n");

        printf("\n══════════════════════════════════════════════\n");
        printf("What would you like to do next?\n");
        printf("1. Analyze another character\n");
        printf("2. Exit program and provide feedback\n");

        int choice;
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        while ((clearBuffer = getchar()) != '\n' && clearBuffer != EOF);

        if(choice == 2) {
            continueProgram = 0;
        }

        printf("\n");

    } while(continueProgram);

    printf("══════════════════════════════════════════════\n");
    printf("FEEDBACK SECTION:\n");
    printf("══════════════════════════════════════════════\n");
    printf("We'd love to hear your feedback!\n");
    printf("Please share your thoughts about this program:\n");

    printf("Your feedback: ");
    fgets(feedback, sizeof(feedback), stdin);


    int i = 0;
    while(feedback[i] != '\0') {
        if(feedback[i] == '\n') {
            feedback[i] = '\0';
            break;
        }
        i++;
    }

    printf("\n╔════════════════════════════════════════════╗\n");
    printf("║            THANK YOU!                     ║\n");
    printf("╠════════════════════════════════════════════╣\n");

    if(feedback[0] != '\0') {
        printf("║ Feedback received:                      ║\n");
        printf("║ \"%s\"\n", feedback);
        printf("║                                        ║\n");
    }

    printf("║ Thank you for using Character Identifier! ║\n");
    printf("║ Program has analyzed %d character(s)       ║\n", 1); 
    printf("╚════════════════════════════════════════════╝\n");

    printf("\n══════════════════════════════════════════════\n");
    printf("ASCII REFERENCE (Common values):\n");
    printf("  Space: 32      '0'-'9': 48-57\n");
    printf("  'A'-'Z': 65-90 'a'-'z': 97-122\n");
    printf("══════════════════════════════════════════════\n");

    return 0;
}
