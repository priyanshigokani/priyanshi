//Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
//  Unit                                 Charge/unit
//   upto 350                              @1.20
//   350 and above but less than 600       @1.50
//   600 and above but less than 800       @1.80
//   800 and above                         @2.00

#include<stdio.h>
void main()
{

    int customer_id;
    char name[20];
    float unit,amount;

    printf("enter your customer id: ");
    scanf("%d",&customer_id);

    printf("enter your name: ");
    scanf("%S",&name);

    printf("enter your used unit: ");
    scanf("%f",&unit);

    if(unit < 350)
    {
        amount=unit * 1.20;
    }

    else if(unit >= 350 && unit  < 600)
    {
        amount=unit * 1.50;
    }
    else if(unit >= 600 && unit < 800)
    {
        amount=unit * 1.80;
    }
    else if(unit >= 800)
    {
        amount=unit * 2.00;
    }

    printf("\nElectricity Bill:\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", unit);
    printf("Total Amount to be Paid: %.2f\n", amount);


}



 