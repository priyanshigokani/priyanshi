// Q.8 Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
//  Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each
//  student implement using of aggregation 

#include <iostream>
#include <string>
using namespace std;

class Address 
{
    string address;

public:

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
    void setName(string n) 
    {
        name = n;
    }

    void setStudentClass(string c) 
    {
        studentClass = c;
    }

    void setRollNumber(int rNo)
    {
        rollNumber = rNo;
    }

    void setMarks(int m) 
    {
        marks = m;
    }

    void setAddress(Address addr) 
    {
        address = addr;
    }

    void getName()
    {
        return name;
    }

    void getStudentClass()
    {
        return StudentClass;
    }

    void getRollNumber()
    {
        return rollNumber;
    }

    void getMarks()
    {
        return marks;
    }

    void getAddress()
    {
        return address;
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

    Student displayStudentInfo() 
    {
        string name;
        int studentClass;
        int rollNumber;
        int marks;
        char grade;
        string address;

        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: " << address<< endl;

        Student student(name,studentClass,rollNumber,marks,grade,address);
    }
};

// int main()
// {
//     Address studentAddress;
//     studentAddress.setHouseNo("13");
//     studentAddress.setStreet("Indira circle");
//     studentAddress.setCity("rajkot");

//     Student student;
//     student.setName("ava");
//     student.setStudentClass("12th");
//     student.setRollNumber(7);
//     student.setMarks(77.3);
//     student.setAddress(studentAddress);

//     student.displayStudentInfo();

//     return 0;
// }

int main()
{
    student.displayStudentInfo();
}