#include <stdio.h>

int main() {
    int length, breadth;
    
    printf("╔════════════════════════════════════╗\n");
    printf("║     RECTANGLE AREA CALCULATOR     ║\n");
    printf("╚════════════════════════════════════╝\n\n");
    
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);
    
    printf("\n──────────────────────────────────────\n");
    printf("📐 RECTANGLE DETAILS:\n");
    printf("Length  : %d units\n", length);
    printf("Breadth : %d units\n", breadth);
    printf("Area    : %d sq. units\n", length * breadth);
    printf("──────────────────────────────────────\n");
    
    printf("\n✓ Area calculated successfully!\n");
    
    return 0;
}