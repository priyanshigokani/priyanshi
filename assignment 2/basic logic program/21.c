// Q.21 Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable 


// with using third variable


#include <stdio.h>

void main() 
{
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping (with third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
}


// without using 3rd variable

#include <stdio.h>

void main()
 {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    num1 = num1 + num2; 
    num2 = num1 - num2;
    num1 = num1 - num2; 

    printf("After swapping (without third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

}
