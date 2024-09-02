//Q.12 Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>

void main()
{
    int a,total;

    printf("enter the value of a: ");
    scanf("%d",&a);

    total=a*5;

    printf("the total apple are required is: %d\n",total);
}