// Q.33  C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) 

#include <stdio.h>

void main() 
{
    int N;

    printf("Enter an integer: ");
    scanf("%d", &N);

    printf("N^1 = %d\n", N);
    printf("N^2 = %d\n", N * N);
    printf("N^3 = %d\n", N * N * N);

}
