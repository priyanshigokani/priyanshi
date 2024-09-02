// Q.6  Write a program in C to count the total number of alphabets, digits and special characters in a string. 

#include <stdio.h>

void main()
{
    char str[100]; 
    int alphabets = 0, digits = 0, specials = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
        {
            alphabets++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        } 
        else if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            specials++;
        }
    }

    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specials);
}
