// Q.27 1/2-2/3-3/4-4/5-5/6.......n

#include <stdio.h>

void main() 
{
    int n;
    double result = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1) 
        {
            result += (double)i / (i + 1);
        } 
        
        else 
        {
            result -= (double)i / (i + 1);
        }
    }

    printf("The result of the series is: %.3f\n", result);

}
