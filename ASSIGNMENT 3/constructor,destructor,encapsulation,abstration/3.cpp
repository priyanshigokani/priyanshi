// Q.3  Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member 
// functions to get and set these variables.

#include<iostream>

using namespace std;

class Car
{
    int model;
    string company;
    int year;

    public:

    string setCompany()
    {
        cout<<"Company name: ";
        cin >>company;
    }

    int setModel()
    {
        cout <<"Model: ";
        cin>>model;
    }

    int setYear()
    {
        cout<<"year: ";
        cin >>year;
    }

    string getCompany()
    {
        return company;
    }

    int getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }
};

int main()
{

    Car c;

    c.setCompany();
    c.setModel();
    c.setYear();

    cout<<"\nResult:"<<endl;
    cout<<"Company: "<<c.getCompany()<<endl;
    cout<<"Model: "<<c.getModel()<<endl;
    cout<<"Year: "<<c.getYear()<<endl;

}



