//  Q.37(ii) . Vowel or Consonant using switch case

#include <stdio.h>

void main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) 
            {
                printf("%c is a consonant", ch);
            } 
            
            else 
            {
                printf("%c is not a letter", ch);
            }
            break;
    }
}
