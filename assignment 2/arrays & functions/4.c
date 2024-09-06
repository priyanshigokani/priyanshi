// Q 4  WAP to find factorial using recursion 


#include <stdio.h>

int factorial(int n)
{
    if (n < 1) 
    {
        return 1;  
    } 
    else 
    {
        return n * factorial(n - 1);  
    }
}

void main() 
{
    int number, result=0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
     result = factorial(number);
    
    printf("Factorial of %d is %d\n", number, result);
}

