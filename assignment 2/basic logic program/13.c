//Q.13 Find character value from ascii

#include <stdio.h>

    void main() 
    {
    int asciiValue;
    char character;

    
    printf("Enter the ASCII value: ");
    scanf("%d", &asciiValue);

    
    character = (char)asciiValue;

    
    printf("The character corresponding to ASCII value %d is: %c\n", asciiValue, character);

    
}
