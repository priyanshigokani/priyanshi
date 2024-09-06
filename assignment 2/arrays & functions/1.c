//Q 1 Write a program to find out the max number from given array using function

#include <stdio.h>

void main()
{
    int a[100],i,size,max;

    printf("enter the size of array: ");
    scanf("%d",&size);

    for(i=0; i<size; i++)
    {
        printf("enter your number: ");
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=0; i<size; i++)
    {
        if(a[i] > max)
        {
            max=a[i];
        }
    }

    printf("maximum value of array: %d",max);
}





