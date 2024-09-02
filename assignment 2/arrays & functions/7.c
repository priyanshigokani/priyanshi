// Q.7  WAP Find out length of string without using inbuilt function 


#include<stdio.h>

void main()
{
    char str[100];
    int length=0;

    printf("enter your string: ");
    scanf("%s",str);

    while(str[length] != 0)
    {
        length++;
    }

    printf("length of string is: %d\n",length);
}
