//Q.13 . Write a program in C to remove characters from a string except alphabets. 

#include <stdio.h>

void main()
{
    char line[100];

    printf("enter a string: ");
    fgets(line, sizeof(line),stdin);

    int i,j;
    for(i=0,j; line[i]!='\0'; ++i)
    {
        while(!(line[i]>='a' && line[i]<='z') &&! (line[i]>='A'&& line[i]<='z')&&!(line[i]=='\0'))
        {
            for(j=i; line[j]!='\0'; ++j)
            {
                line[j]=line[j+1];
            }
            line[j]='\0';
        }
    }
    
    printf("output string: ");
    puts(line);
}