#include <stdio.h>

int main()
{
    printf("Welcome! In the section of Number Finder specially greatest.\n");
    printf("============================================================\n");

    char f;
    int a, b, c, d;
    
    
    printf("Enter the First Number: ");
    scanf("%d", &a);
    
    printf("Enter the Second Number: ");
    scanf("%d", &b);
    
    printf("Enter the Third Number: ");
    scanf("%d", &c);
    
    printf("Enter the Fourth Number: ");
    scanf("%d", &d);
    
    printf("\nYou entered: %d, %d, %d, %d\n\n", a, b, c, d);
    
    
    int greatest;
    
    if (a >= b && a >= c && a >= d)
    {
        greatest = a;
        printf("The Greatest Number from above list is %d", a);
        
      
        if ((a == b && a != c && a != d) || 
            (a == c && a != b && a != d) || 
            (a == d && a != b && a != c))
        {
            printf(" (tied with another number)");
        }
        else if ((a == b && a == c && a != d) || 
                 (a == b && a == d && a != c) || 
                 (a == c && a == d && a != b))
        {
            printf(" (tied with two other numbers)");
        }
        printf("\n");
    }
    else if (b >= a && b >= c && b >= d)
    {
        greatest = b;
        printf("The Greatest Number from above list is %d", b);
        
       
        if ((b == a && b != c && b != d) || 
            (b == c && b != a && b != d) || 
            (b == d && b != a && b != c))
        {
            printf(" (tied with another number)");
        }
        else if ((b == a && b == c && b != d) || 
                 (b == a && b == d && b != c) || 
                 (b == c && b == d && b != a))
        {
            printf(" (tied with two other numbers)");
        }
        printf("\n");
    }
    else if (c >= a && c >= b && c >= d)
    {
        greatest = c;
        printf("The Greatest Number from above list is %d", c);
        
       
        if ((c == a && c != b && c != d) || 
            (c == b && c != a && c != d) || 
            (c == d && c != a && c != b))
        {
            printf(" (tied with another number)");
        }
        else if ((c == a && c == b && c != d) || 
                 (c == a && c == d && c != b) || 
                 (c == b && c == d && c != a))
        {
            printf(" (tied with two other numbers)");
        }
        printf("\n");
    }
    else if (d >= a && d >= b && d >= c)
    {
        greatest = d;
        printf("The Greatest Number from above list is %d", d);
        
        
        if ((d == a && d != b && d != c) || 
            (d == b && d != a && d != c) || 
            (d == c && d != a && d != b))
        {
            printf(" (tied with another number)");
        }
        else if ((d == a && d == b && d != c) || 
                 (d == a && d == c && d != b) || 
                 (d == b && d == c && d != a))
        {
            printf(" (tied with two other numbers)");
        }
        printf("\n");
    }
    
  
    if (a == b && b == c && c == d)
    {
        printf("All four numbers are equal! (%d = %d = %d = %d)\n", a, b, c, d);
    }
    
    printf("•••••••••••••••••••••••••••••••••••••••••••••••••••\n");
    
 
    while (getchar() != '\n');
    
   
    printf("Did I help you? Please give feedback (Y/N): ");
    scanf("%c", &f);  
    
    printf("\nThank You!");
    
    
    if (f == 'Y' || f == 'y') {
        printf(" Glad to help! 😊\n");
    } else if (f == 'N' || f == 'n') {
        printf(" Sorry about that. We'll improve! 👍\n");
    } else {
        printf(" Thanks for your input! ✨\n");
    }
    
    return 0;
}