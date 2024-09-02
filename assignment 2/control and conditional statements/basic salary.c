//Write a C program to input basic salary of an employee and calculate its
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%\


#include <stdio.h>

void main() 
{
    float basic_salary, HRA, DA, gross_salary;
   
    printf("Enter the basic salary: Rs. ");
    scanf("%f", &basic_Salary);

    
    if (basic_salary <= 10000)
     {
        HRA = basic_salary * 0.20;  
        DA = basic_salary * 0.80;   
    } 
    else if (basicSalary <= 20000)
     {
        HRA = basic_salary * 0.25;   
        DA = basic_salary * 0.90;    
    }
     else 
     {
        HRA = basic_salary * 0.30;  
        DA = basic_salary * 0.95;     
     }

     Calculate Gross Salary
    gross_salary = basicSalary + HRA + DA;

    
    printf("The Gross Salary is: Rs. %.2f\n", grossSalary);

    
}
