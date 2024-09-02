//Q.9 Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

void main()

{
    int a,b,c,area;

    printf("enter the value of a: ");
    scanf("%d",&a);

    printf("enter the value of b: ");
    scanf("%d",&b);

    printf("enter the value of c: ");
    scanf("%d",&c);

    area=a+b+c;

    printf("the circumference of Triangle is: %d\n",area);
}