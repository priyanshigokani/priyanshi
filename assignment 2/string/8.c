//Q.8  Write a program in C to count the total number of vowels or consonants in a string.


#include <stdio.h>

void main() 
{
    char str[200]; 
    int vowels = 0, consonants = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
            vowels++;
        }

        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        {
            consonants++;
        }
    }

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
}
