#include <stdio.h>

int main() {
    printf("🔁🔢 WELCOME TO THE LOOP & NUMBERS MASTER PROGRAM 🔢🔁\n");
    printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n\n");
    
    
    printf("Part 1: Basic Number Counting\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Hey! In Loop Section we will print from 1 to 10.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    char feedback;
    int a = 0;
    printf("Counting from 1 to 10:\n");
    printf("----------------------\n");
    
    while(a <= 10) {
        if(a >= 1) {
            printf("%d", a);
            
            
            if(a == 10) {
                printf(" 🎯\n");
            } else if(a == 5) {
                printf(" ⭐ (halfway!)\n");
            } else {
                printf(" ✓\n");
            }
        }
        a++;
    }
    
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    
    printf("\nPart 2: Exploring Natural Numbers (0-20) 🔢\n");
    printf("★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★\n");
    
    int i = 0;
    int count_printed = 0;
    int count_total = 0;
    
    printf("Printing numbers from 10 to 20:\n");
    printf("--------------------------------\n");
    
    while(i <= 20) {
        count_total++; 
        
        if(i >= 10) {
            printf("%d", i);
            count_printed++;  
            
        
            if(i == 10) {
                printf(" ← First");
            }
            if(i == 15) {
                printf(" ← Middle");
            }
            if(i == 20) {
                printf(" ← Last");
            }
            printf("\n");
        }
        i++;
    }
    
    printf("--------------------------------\n");
    printf("Statistics:\n");
    printf("- Numbers checked: %d (0 to 20)\n", count_total);
    printf("- Numbers printed: %d (10 to 20)\n", count_printed);
    printf("- Numbers skipped: %d (0 to 9)\n", count_total - count_printed);
    
    
    printf("\nPart 3: Advanced Number Analysis\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
   
    printf("\nNumbers that were skipped (0-9):\n");
    printf("--------------------------------\n");
    for(int j = 0; j < 10; j++) {
        printf("%d", j);
        
        if(j % 2 == 0 && j != 0) {
            printf(" (even)");
        } else if(j % 2 == 1) {
            printf(" (odd)");
        }
        
        if(j == 0) {
            printf(" - Starting point!");
        }
        printf("\n");
    }
    
    
    printf("\nLet's do some calculations:\n");
    printf("---------------------------\n");
    
    int sum_all = 0;
    int sum_printed = 0;
    
    for(int k = 0; k <= 20; k++) {
        sum_all += k;  
        
        if(k >= 10) {
            sum_printed += k;  
        }
    }
    
    printf("Sum of all numbers (0-20): %d\n", sum_all);
    printf("Sum of printed numbers (10-20): %d\n", sum_printed);
    printf("Sum of skipped numbers (0-9): %d\n", sum_all - sum_printed);
    
    
    float avg_all = (float)sum_all / 21;
    float avg_printed = (float)sum_printed / 11;
    
    printf("Average of all numbers: %.2f\n", avg_all);
    printf("Average of printed numbers: %.2f\n", avg_printed);
    
    
    printf("\nPart 4: Number Pattern Display\n");
    printf("------------------------------\n");
    
    printf("Pattern using numbers 1-5:\n\n");
    
    for(int row = 1; row <= 5; row++) {
        
        for(int space = 0; space < 5 - row; space++) {
            printf("  ");
        }
        
        
        for(int num = 1; num <= row; num++) {
            printf("%d ", num);
        }
        
        
        for(int num = row - 1; num >= 1; num--) {
            printf("%d ", num);
        }
        
        printf("\n");
    }
    
    printf("\n══════════════════════════════════════════════════\n");
    printf("Part 5: Your Feedback\n");
    printf("~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("Now! Give Feedback about this program:\n");
    printf("Enter 'A' for Awesome, 'G' for Good, 'O' for Okay: ");
    
    
    while(getchar() != '\n');
    
    scanf("%c", &feedback);
    
    
    printf("\nFeedback Analysis:\n");
    printf("-----------------\n");
    
    if(feedback == 'A' || feedback == 'a') {
        printf("You selected: Awesome! 🎉\n");
        printf("Thank you! We're glad you enjoyed it!\n");
    } 
    else if(feedback == 'G' || feedback == 'g') {
        printf("You selected: Good! 😊\n");
        printf("Thank you for the positive feedback!\n");
    } 
    else if(feedback == 'O' || feedback == 'o') {
        printf("You selected: Okay. 👌\n");
        printf("We'll try to improve next time!\n");
    }
    else {
        printf("You entered: '%c'\n", feedback);
        printf("That's not a valid option, but thanks anyway!\n");
        printf("Valid options were: A, G, or O\n");
    }
    
    printf("\n══════════════════════════════════════════════════\n");
    printf("Program Summary:\n");
    printf("~~~~~~~~~~~~~~~~\n");
    
    printf("✓ Printed numbers 1 to 10 with decorations\n");
    printf("✓ Printed numbers 10 to 20 with statistics\n");
    printf("✓ Analyzed skipped numbers (0-9)\n");
    printf("✓ Calculated sums and averages\n");
    printf("✓ Displayed number patterns\n");
    printf("✓ Collected user feedback\n\n");
    
    printf("Numbers processed today: %d numbers (0-20)\n", count_total);
    printf("Total calculations performed: 4 different operations\n");
    printf("Pattern elements displayed: 15 numbers\n\n");
    
    printf("_____________________________________________________________\n");
    printf("The End💻 - Thanks for exploring loops and numbers!\n");
    printf("Made with ❤️ using basic C programming concepts\n");
    
    return 0;
}