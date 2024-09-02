//Q.2  Write a program in C to separate individual characters from a string. 

#include<stdio.h>

void main()
{
    char str[100];

    printf("enter your string: ");
    scanf("%s",str);

    printf("The individual characters of the string are:\n");

    for(int i = 0; str[i] != 0; i++) 
    {
         printf("%c\n", str[i]);
    }
}