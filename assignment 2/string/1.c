// Q.1  Write a program in C to find the length of a string without using library functions. 

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
