//Q.3 Write a program in C to print individual characters of a string in reverse order  

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

    printf("The individual characters of the string in reverse order are:\n");

    for(int i = length - 1; i>=0; i--) 
    {
         printf("%c\n", str[i]);
    }
}