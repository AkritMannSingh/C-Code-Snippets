#include <stdio.h>

int main() {
    int choice;
    float temp_input, temp_output, third_scale;

    printf("========================================\n");
    printf("                   TEMPERATURE CONVERTER\n");
    printf("========================================\n\n");

    do {
        printf("CONVERSION MENU:\n");
        printf("1. Celsius → Fahrenheit\n");
        printf("2. Celsius → Kelvin\n");
        printf("3. Fahrenheit → Celsius\n");
        printf("4. Fahrenheit → Kelvin\n");
        printf("5. Kelvin → Celsius\n");
        printf("6. Kelvin → Fahrenheit\n");
        printf("7. Exit\n\n");

        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        while(getchar() != '\n');

        printf("\n");

        switch(choice) {
            case 1: 
                printf("CELSIUS TO FAHRENHEIT\n");
                printf("Enter Celsius: ");
                scanf("%f", &temp_input);
                temp_output = (temp_input * 9.0/5.0) + 32;
                third_scale = temp_input + 273.15;
                printf("Result: %.2f°C = %.2f°F\n", temp_input, temp_output);
                printf("Also:   %.2f°C = %.2fK\n", temp_input, third_scale);
                break;

            case 2: 
                printf("CELSIUS TO KELVIN\n");
                printf("Enter Celsius: ");
                scanf("%f", &temp_input);
                temp_output = temp_input + 273.15;
                third_scale = (temp_input * 9.0/5.0) + 32;
                printf("Result: %.2f°C = %.2fK\n", temp_input, temp_output);
                printf("Also:   %.2f°C = %.2f°F\n", temp_input, third_scale);
                break;

            case 3: 
                printf("FAHRENHEIT TO CELSIUS\n");
                printf("Enter Fahrenheit: ");
                scanf("%f", &temp_input);
                temp_output = (temp_input - 32) * 5.0/9.0;
                third_scale = temp_output + 273.15;
                printf("Result: %.2f°F = %.2f°C\n", temp_input, temp_output);
                printf("Also:   %.2f°F = %.2fK\n", temp_input, third_scale);
                break;

            case 4:
                printf("FAHRENHEIT TO KELVIN\n");
                printf("Enter Fahrenheit: ");
                scanf("%f", &temp_input);
                temp_output = (temp_input - 32) * 5.0/9.0 + 273.15;
                third_scale = (temp_input - 32) * 5.0/9.0;
                printf("Result: %.2f°F = %.2fK\n", temp_input, temp_output);
                printf("Also:   %.2f°F = %.2f°C\n", temp_input, third_scale);
                break;

            case 5: 
                printf("KELVIN TO CELSIUS\n");
                printf("Enter Kelvin: ");
                scanf("%f", &temp_input);
                temp_output = temp_input - 273.15;
                third_scale = (temp_output * 9.0/5.0) + 32;
                printf("Result: %.2fK = %.2f°C\n", temp_input, temp_output);
                printf("Also:   %.2fK = %.2f°F\n", temp_input, third_scale);
                break;

            case 6: 
                printf("KELVIN TO FAHRENHEIT\n");
                printf("Enter Kelvin: ");
                scanf("%f", &temp_input);
                temp_output = (temp_input - 273.15) * 9.0/5.0 + 32;
                third_scale = temp_input - 273.15;
                printf("Result: %.2fK = %.2f°F\n", temp_input, temp_output);
                printf("Also:   %.2fK = %.2f°C\n", temp_input, third_scale);
                break;

            case 7:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please enter 1-7.\n");
        }

        if(choice != 7) {
            printf("\n------------------------\n");
            printf("Press Enter to continue...");
            getchar(); 
        }

    } while(choice != 7);

    return 0;
}