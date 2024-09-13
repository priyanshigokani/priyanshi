// Q. 4  Write a program in C to count the total number of words in a string. 

#include <stdio.h>

void main() 
{
    char str[200];
    int count = 0, i = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    while (str[i] != 0) 
    {
       if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') &&
            (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == '\0')) {
            count++;
        }
        i++;
    }

    // if (i > 1) 
    // {
    //     count++;
    // }

    printf("Total number of words in the string: %d\n", count);

}
