//Q.15  Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>

void main()
{
    char lineOfString[100], sna[10] [20];

    int i,j=0,k=0,m=0,n-0,max,min;

    printf("enter line of string: ");
    scanf("%s" lineOfString);

    for(i=0; lineOfString[i]!=NULL; i++)
    {
        if(lineOfString[i] ==' ')
        {
            sna[k][j]= '\0';
            k++;
            j=0;
        }
        else
        {
            sna[k][j]= lineOfString[i];
            j++;
        }
    }
    sna[k][j]='\0';

    max=strlen(sna[0]);
    min=strlen(sna[0]);

    for(i=0; i<=k; i++)
    {
        if(max<strlen(sna[i]))
        {
            m=i;
        }
        if(min>strlen(sna[i]))
        {
            n=i;
        }
    }
    printf("largest world = %s and smallest world = %s in a string",sna[m],sna[n]);

}
