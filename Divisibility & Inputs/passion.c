#include <stdio.h>

int main() {
    int marks;
    char name[30];
    char passion[50];
    
    printf("══════════════════════════════════════════════\n");
    printf("           STUDENT RECORD SYSTEM            \n");
    printf("══════════════════════════════════════════════\n\n");
    
    printf("Enter student's name: ");
    scanf("%s", name);
    
    printf("Enter marks in Computer Science (0-100): ");
    scanf("%d", &marks);
    
    
    while(getchar() != '\n');
    
    printf("\n══════════════════════════════════════════════\n");
    printf("Hello %s!\n", name);
    printf("══════════════════════════════════════════════\n");
    printf("CS Score: %d/100\n\n", marks);
    
  
    if(marks >= 80) {
        printf("Excellent performance! 🎉\n");
    } else if(marks >= 60) {
        printf("Good work! 👍\n");
    } else if(marks >= 40) {
        printf("Passed. Keep improving! 📚\n");
    } else {
        printf("Need more practice! 💪\n");
    }
    
    printf("\nWhat is your passion? ");
    fgets(passion, sizeof(passion), stdin);
    
    
    int i = 0;
    while(passion[i] != '\0') {
        if(passion[i] == '\n') {
            passion[i] = '\0';
            break;
        }
        i++;
    }
    
    printf("\n══════════════════════════════════════════════\n");
    printf("STUDENT PROFILE SUMMARY\n");
    printf("══════════════════════════════════════════════\n");
    printf("Name:    %s\n", name);
    printf("Marks:   %d/100\n", marks);
    printf("Passion: %s\n", passion);
    printf("\nBest wishes for your future! 🌟\n");
    
    return 0;
