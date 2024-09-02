#include<stdio.h>

void main()
{
    float priceC,priceS,profit,loss;

    printf("enter the amount of priceC: ");
    scanf("%f",&priceC);

    printf("enter the amount priceS: ");
    scanf("%f",&priceC);


    // if(priceS > priceC)
    // {
    //     profit = priceS - priceC;
    //     printf("your profit amount is: %.2f\n",profit);
    // }
    // else if(priceC > priceS )
    // {
    //     loss=priceC - priceS;
    //     printf("your loss amount is: %.2f",loss);
    // }
    // else 
    // {
    //     printf("no profit no loss");
    // }
    if (priceS > priceC) 
    {
        profit = PriceS - PriceC;
        printf("Profit is: %.2f\n", profit);
    } 
    else if (PriceC > PriceS) 
    {
        loss = PriceC - PriceS;
        printf("Loss is: %.2f\n", loss);
    } 
    else
     {
        printf("No Profit No Loss\n");
    }



}