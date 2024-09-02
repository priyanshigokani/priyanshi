// Q.25  .Accept 5 expense from user and find average of expense 

#include <stdio.h>

void main() 
{
    float expenses[5];
    float sum = 0.0, average;

    for(int i = 0; i < 5; i++) 
    {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        sum += expenses[i];  
    }

    average = sum / 5;

    printf("The average expense is: %.2f\n", average);
}
