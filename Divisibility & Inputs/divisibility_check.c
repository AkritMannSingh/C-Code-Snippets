#include <stdio.h>

int main() {
    int num1, num2, remainder, quotient;
    
    printf("╔════════════════════════════════════════════════╗\n");
    printf("║         DIVISIBILITY CHECK PROGRAM            ║\n");
    printf("║         Enhanced with IF-ELSE Ladder          ║\n");
    printf("╚════════════════════════════════════════════════╝\n\n");
    
   
    printf("══════════════════════════════════════════════════\n");
    printf("Enter the dividend: ");
    scanf("%d", &num1);
    
 
    printf("Enter the divisor: ");
    scanf("%d", &num2);
    
 
    if (num2 == 0) {
        printf("\n══════════════════════════════════════════════════\n");
        printf("ERROR: Division by zero is not allowed!\n");
        printf("══════════════════════════════════════════════════\n");
    } 
    else {
    
        remainder = num1 % num2;
        quotient = num1 / num2;
        
        printf("\n══════════════════════════════════════════════════\n");
        printf("DIVISIBILITY ANALYSIS:\n");
        printf("══════════════════════════════════════════════════\n");
        printf("Dividend: %d\n", num1);
        printf("Divisor:  %d\n", num2);
        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);
        printf("══════════════════════════════════════════════════\n\n");
        
      
        if (remainder == 0) {
            printf("✅ RESULT: %d IS COMPLETELY DIVISIBLE by %d\n\n", num1, num2);
            printf("Mathematical Proof:\n");
            printf("%d ÷ %d = %d (exact division)\n", num1, num2, quotient);
            
           
            if (num1 == 0) {
                printf("• Zero is divisible by any non-zero number\n");
            }
            else if (num1 == num2) {
                printf("• Any number is always divisible by itself\n");
                printf("• The quotient is 1\n");
            }
            else if (num1 == (num2 * 2)) {
                printf("• The dividend is exactly twice the divisor\n");
                printf("• The quotient is 2\n");
            }
            else if (num1 == (num2 * num2)) {
                printf("• The dividend is square of the divisor\n");
                printf("• Perfect square relationship\n");
            }
            else if (quotient == 1) {
                printf("• The numbers are nearly equal\n");
                printf("• Dividend is slightly larger than divisor\n");
            }
            else {
                printf("• %d is a multiple of %d\n", num1, num2);
                printf("• %d is a factor of %d\n", num2, num1);
            }
        }
        else if (remainder == 1) {
            printf("⚠️  RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• Remainder is 1 (minimum possible remainder)\n");
            printf("• Very close to being divisible\n");
            printf("• Add %d to %d to make it divisible\n", num2 - 1, num1);
            printf("• Subtract 1 from %d to make it divisible\n", num1);
        }
        else if (remainder == (num2 - 1)) {
            printf("⚠️  RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• Remainder is %d (one less than divisor)\n", remainder);
            printf("• Extremely close to being divisible\n");
            printf("• Add 1 to %d to make it divisible\n", num1);
            printf("• Subtract %d from %d to make it divisible\n", remainder, num1);
        }
        else if (remainder == (num2 / 2)) {
            printf("❌ RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• Remainder is exactly half of divisor (%d)\n", remainder);
            printf("• Halfway between two multiples\n");
            printf("• Add %d to reach next multiple\n", remainder);
            printf("• Subtract %d to reach previous multiple\n", remainder);
        }
        else if (remainder < 0) {
            printf("🔹 RESULT: Working with negative numbers\n\n");
            printf("• Negative remainder: %d\n", remainder);
            printf("• In mathematics, remainder is always non-negative\n");
            printf("• Adjusted remainder: %d\n", remainder + num2);
            printf("• Adjusted quotient: %d\n", quotient - 1);
        }
        else if (num1 < num2) {
            printf("🔸 RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• Dividend is smaller than divisor\n");
            printf("• Quotient is 0\n");
            printf("• Remainder equals the dividend (%d)\n", num1);
            printf("• This is proper fraction: %d/%d\n", num1, num2);
        }
        else if (remainder % 2 == 0) {
            printf("❌ RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• Even remainder: %d\n", remainder);
            printf("• Remainder itself is divisible by 2\n");
            
            if (remainder % 4 == 0) {
                printf("• Remainder is also divisible by 4\n");
            }
            else if (remainder % 5 == 0) {
                printf("• Remainder is also divisible by 5\n");
            }
        }
        else if (remainder % 3 == 0) {
            printf("❌ RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• Remainder divisible by 3: %d\n", remainder);
            printf("• Sum of digits of remainder: ");
            
            int temp = remainder, sum = 0;
            if (remainder < 0) temp = -remainder;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            printf("%d (divisible by 3)\n", sum);
        }
        else if (num1 % 10 == 0 && num2 % 10 == 0) {
            printf("❌ RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• Both numbers end with 0\n");
            printf("• They are multiples of 10\n");
            printf("• After removing trailing zeros: %d ÷ %d\n", 
                   num1/10, num2/10);
        }
        else {
            printf("❌ RESULT: %d is NOT divisible by %d\n\n", num1, num2);
            printf("• General case of non-divisibility\n");
            printf("• Remainder: %d\n", remainder);
            printf("• To make divisible, ");
            
            if (remainder < num2 - remainder) {
                printf("subtract %d from %d\n", remainder, num1);
                printf("• Result would be: %d\n", num1 - remainder);
            }
            else {
                printf("add %d to %d\n", num2 - remainder, num1);
                printf("• Result would be: %d\n", num1 + (num2 - remainder));
            }
        }
       
        
        printf("\n══════════════════════════════════════════════════\n");
        printf("NUMBER TYPE ANALYSIS:\n");
        printf("══════════════════════════════════════════════════\n");
        
       
        if (num1 % 2 == 0 && num2 % 2 == 0) {
            printf("• Both numbers are EVEN\n");
            if (remainder == 0) {
                printf("• Even division of even numbers\n");
            }
        }
        else if (num1 % 2 != 0 && num2 % 2 != 0) {
            printf("• Both numbers are ODD\n");
            if (remainder == 0) {
                printf("• Odd number divisible by odd number\n");
            }
        }
        else if (num1 % 2 == 0 && num2 % 2 != 0) {
            printf("• Dividend is EVEN, Divisor is ODD\n");
        }
        else if (num1 % 2 != 0 && num2 % 2 == 0) {
            printf("• Dividend is ODD, Divisor is EVEN\n");
            printf("• Odd number divided by even number\n");
        }
        
      
        if (num2 == 2) {
            printf("• Divisor is 2 (smallest prime)\n");
            printf("• Divisibility by 2: check last digit\n");
        }
        else if (num2 == 3) {
            printf("• Divisor is 3\n");
            printf("• Divisibility rule: sum of digits\n");
        }
        else if (num2 == 5) {
            printf("• Divisor is 5\n");
            printf("• Divisibility rule: last digit 0 or 5\n");
        }
        else if (num2 == 10) {
            printf("• Divisor is 10\n");
            printf("• Divisibility rule: last digit 0\n");
        }
    }
    
    printf("\n══════════════════════════════════════════════════\n");
    printf("FINAL MATHEMATICAL RELATIONSHIP:\n");
    printf("══════════════════════════════════════════════════\n");
    
    if (num2 != 0) {
        if (remainder == 0) {
            printf("%d = %d × %d\n", num1, quotient, num2);
        } 
        else if (remainder > 0) {
            printf("%d = (%d × %d) + %d\n", num1, quotient, num2, remainder);
        }
        else {
            printf("%d = (%d × %d) %d\n", num1, quotient, num2, remainder);
        }
        
        printf("\n╔════════════════════════════════════════════════╗\n");
        printf("║           PROGRAM COMPLETED                   ║\n");

    }
    
    return 0;
}
