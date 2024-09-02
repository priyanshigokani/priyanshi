//Q.6 WAP to print Fibonacci series up to given number

#include<stdio.h>

void main()
{
    int i,n;
    int n1=0,n2=1,term;

    printf("enter the value of n: ");
    scanf("%d",&n);

    // for(int i =0; i<=n; ++i)
    // {
    //     printf("%d",n);

    //     term=n1 + n2;
    //     n2=term;
        for (i = 1; i <= n; ++i) {
        printf("%d ", n1);
        term = n1 + n2;
        n1 = n2;
        n2 = term;
    }

    
    printf("\n");
}