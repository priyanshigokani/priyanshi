// Q.22 C Program to Reverse a Number Using FOR Loop 

#include <stdio.h>

void main()
{
    int num, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (num; num != 0; num /= 10) 
    {
        remainder = num % 10;            
        reversed_num = reversed_num * 10 + remainder;
    }
    printf("Reversed number: %d\n", reversed_num);
}
