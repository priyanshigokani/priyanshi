// write a program to find largest of three numbers

#include<stdio.h>
void main(){
    int a=100,b=60,c=70;

    if(a>b && a>c)
    {
        printf("a is largest number");
    }
    else if(b>a && b>c)
    {
        printf("b is largest number");
    }
    else{
        printf("c is largest number");
    }
}