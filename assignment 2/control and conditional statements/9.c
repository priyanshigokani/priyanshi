//Q.9 C Program to Check Uppercase or Lowercase or Digit or Special Character


#include<stdio.h>

void main()
{
    char ch ;

    printf("enter the value of ch: ");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
    {
        printf("the character %c is uppercase letter.\n",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("the character %c is lowercase letter.\n",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("the character %c is digit letter.\n",ch);
    }
     else 
     {
         printf("this is special charater");
     }
}