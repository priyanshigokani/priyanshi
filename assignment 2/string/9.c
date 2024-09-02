// q,9 Write a program in C to find the maximum number of characters in a string. 

#include <stdio.h>

void main() 
{
    char str[200]; 
    int count[200] = {0}; 
    int maxCount = 0; 
    char maxChar = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        unsigned char ch = str[i];
        count[ch]++;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (count[i] > maxCount) 
        {
            maxCount = count[i];
            maxChar = (char)i;
        }
    }

    if (maxCount > 0)
    {
        printf("The character with the maximum value is '%c' with %d\n", maxChar, maxCount);
    } 
    
    else
    {
        printf("The string is empty\n");
    }
}
