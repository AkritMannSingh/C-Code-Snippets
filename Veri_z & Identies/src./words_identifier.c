#include <stdio.h>

int main() {
    int choice, exitChoice;
    char playAgain;

    do {
        printf("╔════════════════════════════════════════════╗\n");
        printf("║       VOCABULARY WORD EXPLORER            ║\n");
        printf("╠════════════════════════════════════════════╣\n");
        printf("║ Choose from these 5 fascinating words:    ║\n");
        printf("╠════════════════════════════════════════════╣\n");
        printf("║  1. Serendipity                           ║\n");
        printf("║  2. Quasar                                ║\n");
        printf("║  3. Labyrinth                             ║\n");
        printf("║  4. Ephemeral                             ║\n");
        printf("║  5. Zenith                                ║\n");
        printf("╚════════════════════════════════════════════╝\n\n");


        while (1) {
            printf("Enter your choice (1-5): ");
            if (scanf("%d", &choice) != 1) {
                printf("Invalid input! Please enter a number between 1 and 5.\n");
                while (getchar() != '\n'); 
                continue;
            }


            while (getchar() != '\n');

            if (choice < 1 || choice > 5) {
                printf("Please enter a number between 1 and 5 only!\n");
                continue;
            }

            break;
        }

        printf("\n══════════════════════════════════════════════\n");
        printf("SELECTION RESULT:\n");
        printf("══════════════════════════════════════════════\n");

        switch(choice) {
            case 1:
                printf("╔════════════════════════════════════════════╗\n");
                printf("║    WORD: Serendipity                       ║\n");
                printf("╠════════════════════════════════════════════╣\n");
                printf("║ Meaning: Finding something good by chance ║\n");
                printf("║ Pronunciation: /ˌserənˈdɪpəti/            ║\n");
                printf("║ Example: A serendipitous discovery        ║\n");
                printf("╚════════════════════════════════════════════╝\n");
                break;

            case 2:
                printf("╔════════════════════════════════════════════╗\n");
                printf("║    WORD: Quasar                            ║\n");
                printf("╠════════════════════════════════════════════╣\n");
                printf("║ Meaning: Bright celestial object          ║\n");
                printf("║ Pronunciation: /ˈkweɪzɑːr/                 ║\n");
                printf("║ Example: Quasars are powerful energy      ║\n");
                printf("║          sources in space                 ║\n");
                printf("╚════════════════════════════════════════════╝\n");
                break;

            case 3:
                printf("╔════════════════════════════════════════════╗\n");
                printf("║    WORD: Labyrinth                         ║\n");
                printf("╠════════════════════════════════════════════╣\n");
                printf("║ Meaning: Complex maze or intricate path   ║\n");
                printf("║ Pronunciation: /ˈlæbərɪnθ/                 ║\n");
                printf("║ Example: The ancient labyrinth was hard   ║\n");
                printf("║          to navigate                       ║\n");
                printf("╚════════════════════════════════════════════╝\n");
                break;

            case 4:
                printf("╔════════════════════════════════════════════╗\n");
                printf("║    WORD: Ephemeral                         ║\n");
                printf("╠════════════════════════════════════════════╣\n");
                printf("║ Meaning: Lasting for a very short time    ║\n");
                printf("║ Pronunciation: /ɪˈfɛmərəl/                 ║\n");
                printf("║ Example: The beauty of cherry blossoms    ║\n");
                printf("║          is ephemeral                      ║\n");
                printf("╚════════════════════════════════════════════╝\n");
                break;

            case 5:
                printf("╔════════════════════════════════════════════╗\n");
                printf("║    WORD: Zenith                            ║\n");
                printf("╠════════════════════════════════════════════╣\n");
                printf("║ Meaning: The highest point or peak        ║\n");
                printf("║ Pronunciation: /ˈzɛnɪθ/                    ║\n");
                printf("║ Example: She reached the zenith of her    ║\n");
                printf("║          career at age 35                  ║\n");
                printf("╚════════════════════════════════════════════╝\n");
                break;
        }

        printf("\n══════════════════════════════════════════════\n");
        printf("What would you like to do next?\n");
        printf("1. Learn about another word\n");
        printf("2. Exit the program\n");

        while (1) {
            printf("Enter choice (1 or 2): ");
            if (scanf("%d", &exitChoice) != 1) {
                printf("Invalid input! Please enter 1 or 2.\n");
                while (getchar() != '\n');
                continue;
            }


            while (getchar() != '\n');

            if (exitChoice == 1 || exitChoice == 2) {
                break;
            }
            printf("Please enter only 1 or 2!\n");
        }

        if (exitChoice == 2) {
            break;
        }

        printf("\n");
        printf("══════════════════════════════════════════════\n");
        printf("Returning to main menu...\n");
        printf("══════════════════════════════════════════════\n\n");

    } while (1);

    printf("\n╔════════════════════════════════════════════╗\n");
    printf("║         THANK YOU FOR LEARNING!           ║\n");
    printf("╠════════════════════════════════════════════╣\n");
    printf("║ Vocabulary is the key to better          ║\n");
    printf("║ communication and understandig!         ║\n");
    printf("╚════════════════════════════════════════════╝\n");

    return 0;
}