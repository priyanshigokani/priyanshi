// If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-


#include<stdio.h>

void main()
{
    float bill,finalbill;
    printf("Enter the bill amount: ");
    scanf("%f", &bill);
    
    if (bill > 800)
     {
        finalbill = bill + (bill * 0.18);
    } 
    else
    {
        finalbill = bill;
    }
    
    if (finalbill < 256)
    {
        finalbill = 256;
    }
    
    printf("The final bill amount is: Rs. %.2f\n", finalbill);
    
}

