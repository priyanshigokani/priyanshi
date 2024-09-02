//Q.13 . Write a program in C to remove characters from a string except alphabets. 

#include <stdio.h>

void removeNonAlphabets(char* str) 
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
        {
            str[j++] = str[i];
        }
    }
    str[j] = 0; 
}

void main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeNonAlphabets(str);

    printf("Output String: %s", str);
}
