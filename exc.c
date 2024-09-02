#include<stdio.h>

void main()
{
    int ch ;

    printf("enter the value of ch: ");
    scanf("%d",&ch);

    if(ch>='A'&&ch<='Z')
    {
        printf("this is uppercase letter");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("this is lowercase letter");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("this is digit");
    }
    // else
    // {
    //     printf("this is special charater");
    // }
}
