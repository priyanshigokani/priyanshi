//Q.17 Write a C program to check whether a triangle can be formed with the given values for the angles.


#include<stdio.h>

void main()
{
    int angA,angB,angC,sum;

    printf("enter the value of angA: ");
    scanf("%d",&angA);

    printf("enter the value of angB: ");
    scanf("%d",&angB);

    printf("enter the value of angC: ");
    scanf("%d",&angC);

    sum=angA+angB+angC;

    printf("total is: %d",sum);

    if(sum==180)
    {
        printf("\nit can be formed into triangle");
    }
    else
    {
        printf("\nit cannot be formed into triangle");
    }
}