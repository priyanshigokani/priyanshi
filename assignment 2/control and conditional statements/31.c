// Q. 31 Write a program in C to read any Month Number in integer and display the number of days for this month. 


#include <stdio.h>

void main()
{

    int MonthDay;

    printf("enter your month number: ");
    scanf("%d",&MonthDay);

    

    switch (MonthDay)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
     case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;
    default:
        printf("Wrong Input");
        break;
    }
}