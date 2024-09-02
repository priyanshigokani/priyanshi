// Q.20  Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary. 

#include <stdio.h>

void main() 
{
    float salary, insurance, loan, remainingSalary;

    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    insurance = salary * 0.10;

    loan = salary * 0.10;

    remainingSalary = salary - (insurance + loan);

    printf("Insurance premium: %.2f\n", insurance);
    printf("Loan installment: %.2f\n", loan);
    printf("Remaining salary: %.2f\n", remainingSalary);
}
