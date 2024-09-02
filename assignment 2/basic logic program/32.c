// Q.32  Accept 2 numbers and find out its sum check it size 

#include <stdio.h>

void main() 
{
    int num1, num2, sum;
    int digitCount = 0;
    int tempSum;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    tempSum = sum;
    do {
        digitCount++;
        tempSum /= 10;
    } while (tempSum != 0);

    printf("The sum is: %d\n", sum);
    printf("The sum has %d digits.\n", digitCount);

}
