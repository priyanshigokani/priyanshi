//Q.12 WAP to accept 5 students name and store it in array 


#include<stdio.h>

void main()
{
    char name[5][100];

    for(int i=0; i<5; i++)
    {
        printf("the name of student %d: ",i+1);
        scanf("%s",name[i]);
    }

    printf("\nThe entered names are:\n");
    for(int i = 0; i < 5; i++) 
    {
        printf("%s\n", name[i]);
    }
}