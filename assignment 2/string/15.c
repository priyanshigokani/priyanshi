//Q.15  Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() 
{
    char str[100], word[20], largest[20], smallest[20];
    int i = 0, j = 0, firstWord = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    for (int i = 0; i <= strlen(str); i++) 
    {
        if (isalnum(str[i])) 
        {
            word[j++] = str[i];
        } 
        else 
        {
            if (j != 0) 
            {
                word[j] = 0;
                if (firstWord) 
                {
                    strcpy(largest, word);
                    strcpy(smallest, word);
                    firstWord = 0;
                }
                else 
                {
                    if (strlen(word) > strlen(largest)) 
                    {
                        strcpy(largest, word);
                    }
                    if (strlen(word) < strlen(smallest)) 
                    {
                        strcpy(smallest, word);
                    }
                }
                j = 0;
            }
        }
    }

    printf("The largest word is '%s'\n", largest);
    printf("The smallest word is '%s'\n", smallest);
}
