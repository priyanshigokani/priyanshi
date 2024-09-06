//Q.36 write a c program to input electricity bill unt charges and calculate total electricity bill according to given condition    
// for first 50 units rs 0.50/unit
// for next 100 units rs 0.75/unit
// for next 100 units rs 1.20/unit
// for above 250 units rs 1.50/unit
// an additional surcharge of 20% is added to the fill

#include<stdio.h>

void main()
{
    int electricity_charges;
    float total_bill,surcharge_bill;
    
    printf("enter your used units: ");
    scanf("%d",&electricity_charges);

    if(electricity_charges <= 50)
    {
        electricity_charges = electricity_charges * 0.50;
    }
    else if(electricity_charges <=100 )
    {
        electricity_charges = electricity_charges* 0.75; 
    }
    else if(electricity_charges <= 200)
    {
        electricity_charges = electricity_charges * 1.20;
    }
    else if(electricity_charges < 250)
    {
        electricity_charges = electricity_charges * 1.50;
    }

    total_bill=electricity_charges;
    surcharge_bill=electricity_charges *2.0;

    printf("the total bill is : %.2f\n",total_bill);
}