// Q.22 Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P


#include<stdio.h>

void main()
{
    float P,R,t,amount,CI;

    printf("enter the value of P: ");
    scanf("%f",&P);

    printf("enter the value of R: ");
    scanf("%f",&R);

    printf("enter the value of t: ");
    scanf("%f",&t);

    amount= P*(1 + R/100)*t;

    printf("calculate compound interest annually is: %.2f\n",amount);

    CI=amount-P;
    printf("the compound interest is: %.2f\n",CI);

    
    }