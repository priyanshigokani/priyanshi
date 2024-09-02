//Q.24.Accept 5 employees name and salary and count average and total salary


#include <stdio.h>

void main()
 {
    char names[5][50];   
    float salaries[5];  
    float totalSalary = 0, averageSalary;

   
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);  
        printf("Enter salary of %s: ", names[i]);
        scanf("%f", &salaries[i]);  
        totalSalary += salaries[i];  
    }

    
    averageSalary = totalSalary / 5;

    
    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Average Salary: %.2f\n", averageSalary);

    
}
