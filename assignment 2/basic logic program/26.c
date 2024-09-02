//Q.26 Convert temperature Fahrenheit to Celsius

#include<stdio.h>

void main()
{
    int c,f;
    
    printf("enter the value of f: ");
    scanf("%d",&f);

    c=(f-32)*5/9;
    printf("fahrenheit to celsius: %d\n",c);
}