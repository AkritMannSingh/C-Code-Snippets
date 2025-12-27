#include <stdio.h>

int main()
{
    printf("You have 5 words!\n");
    printf("1. Serendipity\n");
    printf("2. Quasar\n");
    printf("3. Labyrinth\n");
    printf("4. Ephemeral\n");
    printf("5. Zenith\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

    int choice;
    printf("Enter the number (1-5) of the word: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("You selected: Serendipity\n");
            break;
        case 2:
            printf("You selected: Quasar\n");
            break;
        case 3:
            printf("You selected: Labyrinth\n");
            break;
        case 4:
            printf("You selected: Ephemeral\n");
            break;
        case 5:
            printf("You selected: Zenith\n");
            break;
        default:
            printf("Out of Domain.\n");
    }
    
    return 0;
}