// Q 8 WAP to reverse a string and check that the string is palindrome or not 
// Write a program of structure employee that provides the following 
// a. information -print and display emp no, emp name, address 
// and age 
// b. Write a program of structure for five employee that 
// provides the following information -print and display 
// emp no, emp name, address and age  

#include <stdio.h>
#include <string.h>

struct Employee 
{
    int EmpNo;
    char EmpName[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) 
{
    printf("\nEmployee No: %d", emp.EmpNo);
    printf("\nEmployee Name: %s", emp.EmpName);
    printf("\nAddress: %s", emp.address);
    printf("\nAge: %d\n", emp.age);
}

void inputEmployee(struct Employee* emp) 
{
    printf("Enter Employee Number: ");
    scanf("%d", &emp->EmpNo);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", emp->EmpName);

    printf("Enter Address: ");
    scanf(" %[^\n]s", emp->address);

    printf("Enter Age: ");
    scanf("%d", &emp->age);
}

void reverseString(char str[], char reversed[]) 
{
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
    {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = 0; 
}

int isPalindrome(char str[]) 
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            return 0;
        }
    } 
}

void main() 
{

    char str[100], reversed[100];

    printf("Enter a string: ");
    gets(str);  

    reverseString(str, reversed);
    printf("Reversed string: %s\n", reversed);

    if (isPalindrome(str)) 
    {
        printf("The string is a palindrome.\n");
    } 
    
    else 
    {
        printf("The string is not a palindrome.\n");
    }

    struct Employee emp[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        inputEmployee(&emp[i]);
    }


    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("\nEmployee %d Information:", i + 1);
        displayEmployee(emp[i]);
    }
}
