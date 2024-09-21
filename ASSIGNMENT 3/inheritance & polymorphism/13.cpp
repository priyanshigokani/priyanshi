// Q. 13  Write a program to find the max number from given two numbers using friend function

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

    friend int Max(Operation op);
};

int Max(Operation op)
{
    return (op.num1 > op.num2) ? op.num1 : op.num2;
}

int main()
{
    int num1, num2;
    cout << "Enter first numbers: ";
    cin >> num1;
    
    cout << "Enter second numbers: ";
    cin >> num2;

    Operation operation(num1, num2);
    int maxNum = Max(operation);
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}
