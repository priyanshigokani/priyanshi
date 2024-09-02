//Q.7 WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 

#include<stdio.h>

void main()
{
    int number,reverse=0;

    printf("enter the value of number: ");
    scanf("%d",&number);

    while(number !=0)
    {
        int digit = number % 10;
        reverse=reverse * 10 + digit;
        number /=10;
    }
    printf("reversed number is: %d\n",reverse);
}
