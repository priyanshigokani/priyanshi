//Q 9 Write a program make a summation of given number
#include<stdio.h>

void main()
{
    int number,sum=0;

    printf("enter the value of number: ");
    scanf("%d",&number);

    while(number !=0)
    {
        int digit = number % 10;
        sum += digit;
        number /=10;
    }
    printf("reversed number is: %d\n",sum);
}