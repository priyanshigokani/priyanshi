//Q.35 Accept the input month number and print number of days in that month.

#include<stdio.h>

void main()
{
    int month;

    printf("enter the month number: ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("january");
        printf("\ntotal days are: 31");
        break;
    case 2:
        printf("february");
        printf("\ntotal days are: 28");
        break;
    case 3:
        printf("march");
        printf("\ntotal days are: 31");
        break;
    case 4:
        printf("april");
        printf("\ntotal days are: 30");
        break;
    case 5:
        printf("may");
        printf("\ntotal days are: 31");
        break;
    case 6:
        printf("june");
        printf("\ntotal days are: 30");
        break;
    case 7:
        printf("july");
        printf("\ntotal days are: 31");
        break;
    case 8:
        printf("august");
        printf("\ntotal days are: 31");
        break;
     case 9:
        printf("september");
        printf("\ntotal days are: 30");
        break;
    case 10:
        printf("october");
        printf("\ntotal days are: 31");
        break;
    case 11:
        printf("november");
        printf("\ntotal days are: 30");
        break;
    case 12:
        printf("december");
        printf("\ntotal days are: 31");
        break;
    default:
        printf("Wrong Input");
        break;
    }
}

