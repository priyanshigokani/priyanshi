// Q.5  Write a program in C to compare two strings without using string library functions.


#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Compare characters of both strings one by one
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Return the difference if characters don't match
        }
        i++;
    }

    // If both strings ended together, they are equal
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    }

    // If one string is longer than the other
    return (str1[i] != '\0') ? 1 : -1;
}

void  main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare the strings
    int result = compareStrings(str1, str2);

    // Output the result
    if (result == 0) {
        printf("The strings are same.\n");
     } else if (result < 0) {
         printf("strings are different.\n");
    } else {
        printf("strings are different.\n");
    }

}

   
     
 
