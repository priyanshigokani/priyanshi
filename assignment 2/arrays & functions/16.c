// Q 16 Accept 5 numbers from user and perform sum of array 

#include <stdio.h>

void main() 
{
    int numbers[5];  
    int sum = 0;     
    int i;

    for (i = 0; i < 5; i++) 
    {
        printf("Enter your number: ");
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        sum += numbers[i];
    }

    printf("The sum of the entered numbers is: %d\n", sum);
}
