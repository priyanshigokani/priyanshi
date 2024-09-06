// Q.2   WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)   

#include<stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);
int mod(int, int);

void main()
{
    int num1,num2,choice,isRunning=1;

    printf("welcome");
    printf("\n1. addition");
    printf("\n2. subtraction"); 
    printf("\n3. multiplication");
    printf("\n4. division");
    printf("\n5. exit");

    printf("\nenter your choice: ");
    scanf("%d",&choice);

    if (!(choice >= 5 || choice <= 0))
        {
            printf("\nEnter first number: ");
            scanf("%d", &num1);
            printf("\nEnter second number: ");
            scanf("%d", &num2);
        }

    switch (choice)
        {
        case 1:
            printf("Summation of %d and %d is: %d", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("Subtraction of %d and %d is: %d", num1, num2, sub(num1, num2));
            break;
        case 3:
            printf("Multiplication of %d and %d is: %d", num1, num2, mul(num1, num2));
            break;
        case 4:
            printf("Division of %d and %d is: %.2f", num1, num2, div(num1, num2));
            break;
        case 5:
            printf("Modulo of %d and %d is: %d", num1, num2, mod(num1, num2));
            break;
        case 6:
            isRunning = 0;
            printf("Thank you.");
            break;
        default:
            printf("Oops. Wrong input.");
            break;
        }
}


int sum(int n1, int n2)
{
    return n1 + n2;
}
int sub(int n1, int n2)
{
    return n1 - n2;
}
int mul(int n1, int n2)
{
    return n1 * n2;
}
float div(int n1, int n2)
{
    return (float)n1 / n2;
}
int mod(int n1, int n2)
{
    return n1 % n2;
}




