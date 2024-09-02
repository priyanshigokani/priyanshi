// Q.14 Write a program in C to combine two strings manually

#include <stdio.h>
#include <string.h>

void stringConcat(char *destination, const char *source) 
{
 while (*destination) 
    {
        destination++;
    }

    while (*source) 
    {
        *destination++ = *source++;
    }

    *destination = 0;
}

int main() {
    char str1[200]; 
    char str2[200]; 

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    size_t length1 = strlen(str1);
    if (length1 > 0 && str1[length1 - 1] == '\n') {
        str1[length1 - 1] = '\0';
    }

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    size_t length2 = strlen(str2);
    if (length2 > 0 && str2[length2 - 1] == '\n') {
        str2[length2 - 1] = '\0';
    }

    stringConcat(str1, str2);

    printf("The combined string is: %s\n", str1);

}
