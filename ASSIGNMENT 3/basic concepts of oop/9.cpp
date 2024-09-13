// Q.9 Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member 
// functions to set and get the values of these variables. 

#include<iostream>

using namespace std;

class person
{

string name;
int age;
string country;

public:

string setName()
{
    cout <<"Enter your name: ";
    cin >> name;
}

int setAge()
{
    cout <<"Enter your age: ";
    cin >>age;
}

string setCountry()
{
    cout <<"Enter your country name: ";
    cin >>country;
}

string getName()
{
    return name;
}

int getAge()
{
    return age;
}

string getCountry()
{
    return country;
}
};

int main()
{
    person p;

    p.setName();
    p.setAge();
    p.setCountry();

    cout <<"Name: "<<p.getName()<<endl;
    cout <<"Age: "<<p.getAge()<<endl;
    cout <<"Country: "<<p.getCountry()<<endl;

return 0;
}