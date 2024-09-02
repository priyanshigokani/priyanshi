
#include<stdio.h>
void main()
{
int num1, num2, result;
printf("enter the first number:");
scanf("%d",&num1);

printf("enter the second number:");
scanf("%d",&num2);

result=num1+num2;
printf("%d= %d + %d",&num1,num2,result);

result=num1-num2;
printf("%d= %d - %d",&num1,num2,result);

result=num1*num2;
printf("%d= %d * %d",&num1,num2,result);

result=num1/num2;
printf("%d= %d / %d",&num1,num2,(float)result);

result=num1%num2;
printf("%d=%d /% %d",&num1,num2,result);



}

