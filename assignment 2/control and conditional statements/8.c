//Q.8 WAP to accept the height of a person in centimeters and categorize the
person according to their height.

#include<stdio.h>

void main()
{
    float h;

    printf("enter the value of h: ");
    scanf("%f",&h);

    if(h<=150)
    {
        printf("the person is short");

    }
    else if(h<=170)
    {
        printf("the person is average");
    }

    else if(h>170)
    {
        printf("the person is taller ");
    }
}