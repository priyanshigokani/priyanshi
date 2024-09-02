//Q.19 Calculate compound interest

#include<stdio.h>

void main()
{
    float p,r,n,t,amount,CI;

    printf("enter the value of p: ");
    scanf("%f",&p);

    printf("enter the value of r: ");
    scanf("%f",&r);
    
    printf("enter the value of n: ");
    scanf("%f",&n);

    printf("enter the value of t: ");
    scanf("%f",&t);

    amount=p*(1+r/n)*t;
    printf("the compound interest is: %.2f\n",amount);
    //printf("calculate compound interest annually is: %.2f\n",amount);

    CI=amount-p;
    printf("the compound interest is: %.2f\n",CI);
}