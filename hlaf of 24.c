#include<stdio.h>


    struct employee
{
    char name[20];
    int salary[10];
    int total_salary;
    int average_salary;


};

void main()
{
    struct employee e[NUM_EMPLOYEES][5];

    for(int i=0;i<=5;i++)
    {
        printf(" --- Person %d --- ", i + 1);
        printf("\nEnter your name: ");
        scanf("%s", &e[i].name);
        printf("Enter your salary: ");
        scanf("%d", &e[i].salary);
        total_salary += employees[i].salary;

    }

    average_salary = total_salary / NUM_EMPLOYEES;
    for (int i = 0; i < 5; i++)
    {
        printf(" --- Person %d --- ", i + 1);
        printf("\nName: %s", e[i].name);
        printf("\nAge: %d", e[i].salary);
    }
    

}