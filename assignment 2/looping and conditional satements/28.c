//Q.28 1 2 3 6 9 18 27 54... 

#include <stdio.h>

void main() 
{
    int n;
    
    printf("Enter the number of terms to display: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("The number of terms should be greater than 0.\n");
    }

    printf("The series is: ");

    if (n >= 1) 
    {
        printf("1 ");
    }
    if (n >= 2) 
    {
        printf("2 ");
    }
    if (n >= 3) 
    {
    printf("3 ");
    }

    int term1 = 1, term2 = 2, term3 = 3;
    
    for (int i = 4; i <= n; ++i) {
        int nextTerm = 1.5 * term3;
        printf("%d ", nextTerm);
        term1 = term2;
        term2 = term3;
        term3 = nextTerm;
    }

    printf("\n");

}

