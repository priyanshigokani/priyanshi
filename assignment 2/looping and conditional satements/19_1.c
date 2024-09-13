//1
//10
//101
//1010
//10101

#include<stdio.h>

void main()
{
int n;

    printf("enter the value of n: ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
}
