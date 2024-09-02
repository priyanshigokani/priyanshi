//Q.8 Write a program to find out the max from given number

#include<stdio.h>

void main()
{
    int num1,num2,num3;

    printf("enter the value of num1: ");
    scanf("%d",&num1);

    printf("enter the value of num: ");
    scanf("%d",&num2);

    printf("enter the value of num3: ");
    scanf("%d",&num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("num1%d is bigger",num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("num2%d is bigger",num2);
    }
    else
    {
        printf("num3 %d is bigger",num3);
    }
}