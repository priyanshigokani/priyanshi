// Q.2 WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

void main() 
{
    int numbers[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("You entered numbers are:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d\n", numbers[i]);
    }
}
