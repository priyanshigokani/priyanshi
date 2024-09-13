// Q.5  Write a program in C to compare two strings without using string library functions.


#include <stdio.h>

void main()
{
    char str1[50],str2[50];
    int i,f=0;

    printf("enter first string: ");
    gets(str1);

    printf("enter second string: ");
    gets(str2);


    
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) 
    {
        if (str1[i] != str2[i])
         {
            f = 1;  
            break;
        }
    }

    if(str1[i] != '\0' && str2[i] != '\0')
    {
        f=1;
    }

    if(f == 1)
    {
        printf("strings are not same");
    }
    else
    {
        printf("strings are same");
    }

}

   
     
 
