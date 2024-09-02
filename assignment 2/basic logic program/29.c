//Q.29 Convert minutes into seconds and hours

#include<stdio.h>

void main()
{
    int minutes,seconds,hours;
    printf("enter the minutes: ");
    scanf("%d",&minutes);

    seconds=minutes*60;
    printf("the total seconds are: %d",seconds);

    hours=minutes/60;
     printf("\nthe total hours are: %d",hours);

}