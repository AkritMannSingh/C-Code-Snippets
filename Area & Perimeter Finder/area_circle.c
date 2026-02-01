#include <stdio.h>

int main() {
    int radius, height;
    
    printf("╔══════════════════════════════════════╗\n");
    printf("║      CIRCLE & CYLINDER CALCULATOR   ║\n");
    printf("╚══════════════════════════════════════╝\n\n");
    
    printf("Enter the radius: ");
    scanf("%d", &radius);
    
    printf("────────────────────────────────────────\n");
    printf("CIRCLE CALCULATIONS:\n");
    printf("Radius: %d units\n", radius);
    printf("Area: %.2f square units\n", 3.14 * radius * radius);
    printf("Circumference: %.2f units\n", 2 * 3.14 * radius);
    printf("────────────────────────────────────────\n\n");
    
    printf("Enter the height of cylinder (in units): ");
    scanf("%d", &height);
    
    printf("────────────────────────────────────────\n");
    printf("CYLINDER CALCULATIONS:\n");
    printf("Radius: %d units\n", radius);
    printf("Height: %d units\n", height);
    printf("Volume: %.2f cubic units\n", 3.14 * radius * radius * height);
    printf("Surface Area: %.2f square units\n", 
           (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius));
    printf("────────────────────────────────────────\n\n");
    
    printf("FORMULAS USED:\n");
    printf("• Circle Area = π × r²\n");
    printf("• Circle Circumference = 2 × π × r\n");
    printf("• Cylinder Volume = π × r² × h\n");
    printf("• Cylinder Surface Area = (2 × π × r × h) + (2 × π × r²)\n\n");
    
    printf("Thank you for using the calculator! 📐\n");
    
    return 0;
}
