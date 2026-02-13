#include <stdio.h>

int main() {
    float base, side, height;
    
    printf("╔══════════════════════════════════════════════════╗\n");
    printf("║     PARALLELOGRAM AREA & PERIMETER CALCULATOR   ║\n");
    printf("╚══════════════════════════════════════════════════╝\n\n");
    
    printf("Enter the base/length of Parallelogram: ");
    scanf("%f", &base);
    
    printf("Enter the side/width of Parallelogram: ");
    scanf("%f", &side);
    
    printf("Enter the height (perpendicular to base): ");
    scanf("%f", &height);
    
    printf("\n──────────────────────────────────────────────────\n");
    printf("📐 PARALLELOGRAM DETAILS:\n");
    printf("──────────────────────────────────────────────────\n");
    printf("Base   : %.2f units\n", base);
    printf("Side   : %.2f units\n", side);
    printf("Height : %.2f units\n", height);
    printf("──────────────────────────────────────────────────\n\n");
    
    printf("📊 CALCULATION RESULTS:\n");
    printf("──────────────────────────────────────────────────\n");
    printf("Area       = Base × Height\n");
    printf("           = %.2f × %.2f\n", base, height);
    printf("           = %.2f sq. units\n\n", base * height);
    
    printf("Perimeter  = 2 × (Base + Side)\n");
    printf("           = 2 × (%.2f + %.2f)\n", base, side);
    printf("           = 2 × %.2f\n", base + side);
    printf("           = %.2f units\n", 2 * (base + side));
    printf("──────────────────────────────────────────────────\n\n");
    
    printf("✓ Calculations complete! Thank you for using the calculator.\n");
    printf("📐 Keep exploring the world of Mathematics!\n");
    
    return 0;
}