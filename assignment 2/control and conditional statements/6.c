// Q.6 Find the Character Is Vowel or Not 

#include <stdio.h>

void main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
    {
        printf("%c is a vowel", ch);
    } 
    
    else 
    {
        printf("%c is not a vowel", ch);
    }
}
