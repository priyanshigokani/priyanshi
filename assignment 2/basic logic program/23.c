// Q 23 . WAP to calculate swap 2 numbers with using of multiplication and division. 

#include <stdio.h>

void main() 
{
    int a, b;

    printf("Enter the first number a: ");
    scanf("%d", &a);
    printf("Enter the second number b: ");
    scanf("%d", &b);

    if (a != 0 && b != 0) 
    {
        a = a * b; 
        b = a / b; 
        a = a / b; 

        printf("After swapping:\n");
        printf("First number a: %d\n", a);
        printf("Second number b: %d\n", b);
    } 
    
    else
    {
        printf("Error: Division by zero is not allowed.\n");
    }

}
