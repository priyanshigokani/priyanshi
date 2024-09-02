//Q.10  Write a program in C to extract a substring from a given string 

#include <stdio.h>
#include <string.h>

void main() 
{
    char str[200]; 
    char substring[200]; 
    int start, length;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
    {
        str[len - 1] = 0;
    }

    printf("Enter the start index: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    if (start < 0 || start >= strlen(str) || length < 0) 
    {
        printf("Invalid\n");
    }

    strncpy(substring, str + start, length);

    substring[length] = 0;

    printf("The extracted substring is: %s\n", substring);

}
