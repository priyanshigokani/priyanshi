//q.18 Write a C Program to Print the Multiplication Table of N

#include <stdio.h>

void main()
 {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\nMultiplication Table of %d:\n", i);

        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
}
