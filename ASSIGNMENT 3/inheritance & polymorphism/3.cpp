// Q.3 Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher
//  having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance) 


#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    void getPersonDetails()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
protected:
    float percentage;
public:
    void getStudentDetails()
    {
        getPersonDetails();
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void displayStudentDetails()
    {
        displayPersonDetails();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person
{
protected:
    float salary;
public:
    void getTeacherDetails()
    {
        getPersonDetails();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayTeacherDetails()
    {
        displayPersonDetails();
        cout << "Salary: " << salary << endl;
    }
};

class Assistant : public Student, public Teacher
{
public:
    void getAssistantDetails()
    {
        cout << "Enter student Details:"<<endl;
        Student::getStudentDetails();
        cout << "Enter teacher details:"<<endl;
        Teacher::getTeacherDetails();
    }
    void displayAssistantDetails()
    {
        cout << "Student Details:"<<endl;
        Student::displayStudentDetails();
        cout << "Teacher Details:"<<endl;
        Teacher::displayTeacherDetails();
    }
};

int main()
{
    Assistant assistant;
    assistant.getAssistantDetails();
    assistant.displayAssistantDetails();
    return 0;
}
