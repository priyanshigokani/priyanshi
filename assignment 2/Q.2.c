// Q.2 write a program to make a simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
void main()
{
int num1, num2;
float result;

printf("enter the first number:");
scanf("/n%d",&num1);

printf("enter the second number:");
scanf("/n%d",&num2);

result=num1+num2;
printf("/n%d= %d + %d",&num1,num2,(int)result);

result=num1-num2;
printf("/n%d= %d - %d",&num1,num2,(int)result);

result=num1*num2;
printf("/n%d= %d * %d",&num1,num2,(int)result);

result=num1/num2;
printf("/n%d= %d / %d",&num1,num2,(float)result);

result=num1%num2;
printf("/n%d=%d /% %d",&num1,num2,(int)result);



}
