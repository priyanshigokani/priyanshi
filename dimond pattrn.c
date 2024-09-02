#include <stdio.h>

void main() {
    
    // Print the top half of the pattern
    for (int i = 1; i <= 5; i++)
     {
        for (int j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the pattern
    for (int i = 5; i >= 1; i--) 
    {
        for (int j = 5; j > i; j--) 
        {
            printf(" ");
        }
              for (int k = 1; k <= (2 * i - 1); k++)
         
            {
                printf("*");
            }
                printf("\n");
    }
}