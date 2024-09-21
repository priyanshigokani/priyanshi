// Q,6 Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
// Include member functions to calculate and set salary based on employee performance. Using of constructor 


#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    int EmployeeId;
    int Salary;

    Employee(string name_, int EmployeeId_,int Salary_=0)
    {
        name = name_;
        EmployeeId = EmployeeId_;
         Salary = Salary_;
    }

    void setSalary()
    {
        int EmployeePerformance;

        cout<<"Enter employee performance: ";
        cin >> EmployeePerformance;

        if(EmployeePerformance > 3)
        {
            Salary = 25000;
            cout<< "Your salary is: "<<Salary<<endl;
        }

        else if(EmployeePerformance = 3)
        {
            Salary = 35000;
            cout<< "Your salary is: "<<Salary<<endl;
        }

        else if(EmployeePerformance > 3 && EmployeePerformance <= 5)
        {
            Salary = 45000;
            cout<< "Your salary is: "<<Salary<<endl;
        }

        else
        {
            cout << "Invalid input";
        } 
    }

         void displayDetails()
        {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << EmployeeId << endl;
        cout << "Employee Salary: " << Salary << endl;
        }
    
};

Employee getDetail()
{
    string name;
    int EmployeeId;

    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your employee id: ";
    cin >> EmployeeId;

    Employee employee(name,EmployeeId);

    return employee;
};


int main()
{
    Employee user = getDetail();

     user.setSalary();
     user.displayDetails();

    return 0;
}