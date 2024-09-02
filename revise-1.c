#include<stdio.h>
int your_func (int,char);
int ticket;
void main()
{





int age;
char M,F,D;
char status;


printf("enter the value of age: ");
scanf("%d",&age);

printf("enter the value of status");
scanf(" %c",&status);

your_func(age,status);

}

int your_func(int age,char status)

{
    if(age<=3)
    {
        printf("ticket is 0");
    }

else if(age<8)
{
    printf("ticket is %d/2",ticket);
}
 else if(age>8 && status=='D')
{

    printf("ticket is %d-25",ticket);
}
else if(age>=8 && status=='F')
{
    printf("ticket is %d -10",ticket);
}
else if(age>=8 && status=='M')
{
    printf("ticket is %d+100",ticket);
}
}

