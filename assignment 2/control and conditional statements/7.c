// Q 7 Accept marks from user and check pass or fail 


#include<stdio.h>

void main()
{
int marks;
printf("enter the marks of students");
scanf("%d",&marks);

if(marks>=35)
{
    printf("student is pass");
}
else{
    printf("student is fail");
}
}