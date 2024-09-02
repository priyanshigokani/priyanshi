// A
// BC
// DEF
// GHIJ
// KLMNO





#include <stdio.h>

void main() {
    char ch = 'A'; 
    int rows = 5;  

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%c", ch);
            ch++; 
        }
        printf("\n"); 
    }
}
