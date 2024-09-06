// Q.3 WAP to find reverse of string using recursion  

#include<stdio.h>
#include<string.h>

void reverseString(char str[], int start,int end)
{
    if(start >= end)
    {
        return;
    }
    
    char temp= str[start];
    str[start] =str[end];
    str[end] = temp;

    reverseString(str,start+1, end -1);

}

void main()
{
   char str[100];

   printf("enter string: ");
   gets(str);

   int length= strlen(str);

   reverseString(str, 0, length -1);

   printf("reversed string is: %s",str);
}
