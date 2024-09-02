// Q.14 Accept 5 numbers from user and find those numbers factorials 

#include<stdio.h>

void main()
{
    int number[5],factorial;

    printf("enter the 5 numbers: \n");

    for(int i=0; i<5; i++)
    {
        printf("enter the number %d: ",i+1);
        scanf("%d",&number[i]);
    }

    for(int i=0; i<5; i++)
     {
        factorial=1;
        int j=number[i];
        while(j > 0)
        {
            factorial *= j;
             j--;
        }

     printf("factorial %d=%d\n",number[i],factorial);
}
}