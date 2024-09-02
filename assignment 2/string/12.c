// Q.12 Write a program in C to find the number of times a given word 'is' appears in the given string.

#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, const char *word) 
{
    int count = 0;
    const char *temp = str;
    size_t wordLen = strlen(word);

    while ((temp = strstr(temp, word)) != NULL) 
    {
        count++;
        temp += wordLen; 
    }

     return count;
}

void main() 
{
    char str[200]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    const char *word = "is";

    int count = countOccurrences(str, word);

    printf("The word '%s' appears %d times in the given string.\n", word, count);
}
