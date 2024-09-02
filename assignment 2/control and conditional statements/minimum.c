//Q.13 WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>

void main()
{
    int num1,num2,num3,min;

    printf("enter the value of num1: ");
    scanf("%d",&num1);

    printf("enter the value of num2: ");
    scanf("%d",&num2);

    printf("enter the value of num3: ");
    scanf("%d",&num3);

   min= (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
   printf("The minimum number is: %d\n", min);
    

}