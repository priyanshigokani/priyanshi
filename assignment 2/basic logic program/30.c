//Q.30 WAP to convert years into days and days into years

#include<stdio.h>

void main()
{
    int years,days;

     printf("enter the years: ");
     scanf("%d",&years);

     days=years*365;
     printf("the total days are: %d",days);

     years=days/365;
    printf("the total years are: %d",years);
    
}