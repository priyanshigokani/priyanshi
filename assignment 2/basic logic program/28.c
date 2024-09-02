//Q.28 Convert years into days and months

#include<stdio.h>

void main()
{
    int days,months,year;

    printf("enter the numbers of year: ");
    scanf("%d",&year);

    days=year*365;
    printf("the total days are: %d",days);

    months=year*12;
    printf("\nthe total months are: %d",months);

    
}