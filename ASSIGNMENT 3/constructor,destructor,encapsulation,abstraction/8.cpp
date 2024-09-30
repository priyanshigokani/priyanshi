#include <iostream>
#include <string>
using namespace std;

class Address 
{
    string address;

public:
    void setAddress(string addr)
    {
        address = addr;
    }

    string getAddress() 
    {
        return address;
    }
};

class Student 
{
    string name;
    string studentClass;
    int rollNumber;
    int marks;
    Address address;

public:
    void inputDetails()
    {
        cout << "Enter Name: ";
        cin >> name;
        
        cout << "Enter Class: ";
        cin >> studentClass;
        
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        
        cout << "Enter Marks: ";
        cin >> marks;

        string addr;
        cout << "Enter Address: ";
        cin >> addr;
        address.setAddress(addr);
    }

    char calculateGrade() 
    {
        if (marks >= 90) 
        {
            return 'A';
        }

        else if (marks >= 80) 
        {
            return 'B';
        }
        else if (marks >= 70) 
        {
            return 'C';
        }
        
        else if (marks >= 60) 
        {
            return 'D';
        }
        else
        {
            return 'F';
        }
    }

    void displayStudentInfo() 
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: " << address.getAddress() << endl;
    }
};

int main()
{
    Student student;
    student.inputDetails();
    student.displayStudentInfo();

    return 0;
}
