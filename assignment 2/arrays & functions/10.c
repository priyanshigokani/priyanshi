// Q 10  WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int isPalindrome(int number) 
{
    int originalNum = number;  
    int reversedNum = 0;
    int digit;

    while (number > 0) 
    {
        digit = number % 10;
        reversedNum = reversedNum * 10 + digit; 
        number = number / 10;            
    }

    return (reversedNum == originalNum);
}

void main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) 
    {
        printf("%d is a palindrome.\n", num);
    } 
    else 
    {
        printf("%d is not a palindrome.\n", num);
    }
}


