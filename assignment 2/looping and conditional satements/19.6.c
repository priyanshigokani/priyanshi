// A
// AB
// ABC
// ABCD
// ABCDE

#include <stdio.h>

void main() {
    int rows = 5;  

    for (int i = 1; i <= rows; i++)
    {
        char ch='A';
        for (int j = 1; j <= i; j++) 
        {
            printf("%c", ch);
            ch++; 
        }
        printf("\n"); 
    }
}
