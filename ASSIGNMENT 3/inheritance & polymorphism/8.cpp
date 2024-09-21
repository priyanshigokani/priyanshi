// Q,8 Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different 
// parameters and Function Overloading 

#include <iostream>
using namespace std;

class Operation
{
public:
    double add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(int a, int b)
    {
        return a - b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(int a, int b)
    {
        return a * b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(int a, int b)
    {
        if (b == 0)
            return 0;
        return static_cast<double>(a) / b;
    }

    double divide(double a, double b)
    {
        if (b == 0.0)
            return 0;
        return a / b;
    }
};

int main()
{
    Operation operation;
    int choice;
    double num1, num2;

    cout << "Choose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (choice)
    {
    case 1:
        cout << "Result: " << operation.add(num1, num2) << endl;
        break;
    case 2:
        cout << "Result: " << operation.subtract(num1, num2) << endl;
        break;
    case 3:
        cout << "Result: " << operation.multiply(num1, num2) << endl;
        break;
    case 4:
        if (num2 == 0.0)
        {
            cout << "Division by zero is not allowed. Result is set to 0." << endl;
        }
        else
        {
            cout << "Result: " << operation.divide(num1, num2) << endl;
        }
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
