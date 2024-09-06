// Q 13   WAP to accept 5 numbers from user and check entered number is even or odd using of array 

#include <stdio.h>

void main() 
{
    int numbers[5];  
    int i;
    
    for (i = 0; i < 5; i++) 
    {
        printf("Enter your number: ");
        scanf("%d", &numbers[i]);
    }

    printf("\nChecking if each number is even or odd:\n");
    for (i = 0; i < 5; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            printf("%d is even\n", numbers[i]);
        } 
        
        else 
        {
            printf("%d is odd\n", numbers[i]);
        }
    }
}
