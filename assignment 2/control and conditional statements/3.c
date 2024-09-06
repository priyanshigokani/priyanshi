//Q.3 WAP to check if the given year is a leap year or not.



#include<stdio.h>


void main()
{
 int year;

 printf("enter the year: ");
 scanf("%d",&year);

 if(year%4==0 && year%100!=0)
 {
    printf("%d is leap year" ,year);
 }
else if(year%100==0)
{
    printf("%d is not leap year", year);
}
else if(year%400==0)
{
printf("%d is leap year" ,year);
}
else

{
    printf("%d is not leap year",year);
}



}
