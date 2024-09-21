// q.4  Write a C++ Program display Student Mark sheet using Multiple inheritance


#include <iostream>
using namespace std;

class Student 
{
protected:
    int rollNumber;
    string name;
public:
    void getStudentDetails() 
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter name: ";
        cin >> name;
    }
    
    void displayStudentDetails() 
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks 
{
protected:
    int maths, science, english;
public:
    void getMarks() 
    {
        cout << "Enter marks for Maths: ";
        cin >> maths;
        cout << "Enter marks for Science: ";
        cin >> science;
        cout << "Enter marks for English: ";
        cin >> english;
    }
    
    void displayMarks() 
    {
        cout << "Maths: " << maths << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
    }
};

class Result : public Student, public Marks 
{
public:
    void displayResult() 
    {
        displayStudentDetails();
        displayMarks();
        int total = maths + science + english;
        float percentage = total / 3.0;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() 
{
    Result result;
    result.getStudentDetails();
    result.getMarks();
    result.displayResult();
    return 0;
}
