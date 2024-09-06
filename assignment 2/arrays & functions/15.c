// Q 15 . Store 5 numbers in array and sort it in ascending order 

#include <stdio.h>

void main() 
{
    int numbers[5];
    int temp;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4 - i; j++) 
        {
            if (numbers[j] > numbers[j + 1]) 
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\nNumbers in ascending order:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
