// Q.6 Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class Base
{
public:
    int A;

protected:
    int B;

private:
    int C;
};

class Derived : public Base
{
public:
    void display()
    {
        A = 10;
        B = 20;
        cout << "Public: " << A << endl;
        cout << "Protected: " << B << endl;
    }
};

int main()
{
    Derived derived;
    derived.display();
}
