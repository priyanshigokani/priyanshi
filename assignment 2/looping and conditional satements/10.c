// Q.10 Write a program you have to make a summation of first and last Digit. (

#include<stdio.h>

void main()
{
    int FirstDigit,LastDigit,number,sum;

    printf("enter the number: ");
    scanf("%d",&number);

    LastDigit = number % 10;
    FirstDigit=number;

    while(number >= 10)
    {
        number = number / 10;
    }

    FirstDigit= number;

    sum=FirstDigit + LastDigit;

    printf("the sum of firstDigit and lastDigit is : %d\n",sum);
}