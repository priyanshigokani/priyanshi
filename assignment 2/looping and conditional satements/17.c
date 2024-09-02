//Q.17  Calculate 5 numbers from user and calculate number of even and odd using 
of while loop 

#include <stdio.h>

void main() 
{
    int count = 0;
    int number;
    int even_count = 0;
    int odd_count = 0;

    while (count < 5)
     {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            even_count++;
        } 

        else
        {
            odd_count++;
        }
        count++;
    }

    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);
}
