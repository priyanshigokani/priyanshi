//Q.18 Write a C program to calculate profit and loss on a transaction

#include <stdio.h>

void main() 
{
    float costPrice, sellingPrice, profit, loss;

    
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) 
    {
        profit = sellingPrice - costPrice;
        printf("Profit = %.2f\n", profit);
    } 
    else if (costPrice > sellingPrice) 
    {
        loss = costPrice - sellingPrice;
        printf("Loss = %.2f\n", loss);
    } 
    else
     {
        printf("No Profit No Loss\n");
    }


}
