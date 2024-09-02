//Q.12 Program of Armstrong Number in C Using For Loop & While Loop 
#include <stdio.h>

int main() 
{
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    for (int i = 0; i < n; i++)
     {
        remainder = originalNumber % 10;
        int power = 1;
        for (int j = 0; j < n; j++) 
        {  
            power *= remainder;
        }
        result += power;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);


}
