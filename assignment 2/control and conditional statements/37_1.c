// Q. 37(i) i. Monday to Sunday using switch case 

#include<stdio.h>

void main()
{
int DayNum;

printf("enter your day number: ");
scanf("%d",&DayNum);

switch (DayNum)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
     case 7:
        printf("Sunday");
        break;
    default:
        printf("Wrong Input");
        break;
    }
}