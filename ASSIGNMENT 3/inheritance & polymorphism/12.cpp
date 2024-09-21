// Q.12  Write a program to swap the two numbers using friend function without using third variable 

#include <iostream>
using namespace std;

class Operation
{
public:
    int num1;
    int num2;

    Operation(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    friend void swap(Operation &op);
};

void swap(Operation &op)
{
    op.num1 = op.num1 + op.num2;
    op.num2 = op.num1 - op.num2;
    op.num1 = op.num1 - op.num2;
}

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    Operation operation(num1, num2);
    cout << "Before "<<endl;
    cout<<"num1 = " << operation.num1<<endl  ;
    cout<<"num2 = " << operation.num2 << endl;

    swap(operation);
    cout << "After "<<endl;
    cout << "num1 = " << operation.num1 <<endl ;
    cout<<"num2 = " << operation.num2 << endl;

    return 0;
}
