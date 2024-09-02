//Q 21.  Accept 3 numbers from user using while loop and check each numbers palindrome 

#include <stdio.h>

void main()
 {
    int num, original_num, reversed_num, remainder;
    int count = 0;  

    while (count < 3) 
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        original_num = num;  
        reversed_num = 0;

        while (num != 0) 
        {
            remainder = num % 10;
            reversed_num = reversed_num * 10 + remainder;
            num /= 10;
        }

        if (original_num == reversed_num) 
        {
            printf("Number %d is a palindrome.\n", original_num);
        }
         
        else 
         {
            printf("Number %d is not a palindrome.\n", original_num);
        }

        count++;  
    }
}
