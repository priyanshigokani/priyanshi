// Q.14 Write a program in C to combine two strings manually

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50],str2[50],i,j;

    printf("enter your first string: ");
    scanf("%s",str1);

    printf("enter your second string: ");
    scanf("%s"str2);

    for(i=0; str[i]!='\0'; ++i);
    for(j=0; str[j]!='\0'; ++j,++i)
    {
        str1[i]=str2[j];
    }

        str1[i] ='\0';
        printf("\n output: %s", str1);
}
