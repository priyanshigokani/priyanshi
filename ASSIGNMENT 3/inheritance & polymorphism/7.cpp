// Q .7  Write a C++ Program to illustrates the use of Constructors in multilevel inheritance 

#include <iostream>
using namespace std;

class Company
{
protected:
    string companyName;

public:
    Company(string name)
    {
        companyName = name;
    }
    
    void displayCompanyInfo()
    {
        cout << "Company Name: " << companyName << endl;
    }
};

class Department : public Company
{
protected:
    string departmentName;

public:
    Department(string compName, string deptName) : Company(compName)
    {
        departmentName = deptName;
    }

    void displayDepartmentInfo()
    {
        cout << "Department Name: " << departmentName << endl;
    }
};

class Employee : public Department
{
private:
    string employeeName;
    int id;

public:
    Employee(string compName, string deptName, string empName, int empId) 
        : Department(compName, deptName)
    {
        employeeName = empName;
        id = empId;
    }

    void displayEmployeeInfo()
    {
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << id << endl;
    }
};

int main()
{
    Employee emp("Top tech", "Development", "ava", 7); 
    emp.displayCompanyInfo();
    emp.displayDepartmentInfo();
    emp.displayEmployeeInfo();
    return 0;
}
