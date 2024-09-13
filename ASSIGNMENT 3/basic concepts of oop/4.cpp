// Q.4 WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator 
{
public:

    double add(double a, double b) 
    {
        return a + b;
    }

    double subtract(double a, double b) 
    {
        return a - b;
    }

    double multiply(double a, double b) 
    {
        return a * b;
    }

    double divide(double a, double b) 
    {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    double modulo(int a, int b)
     {
        if (b != 0)
            return a % b;
        else 
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
     }
};

int main() 
{
    Calculator calc;
    double num1, num2;
    int choice;

    cout <<"welcome";
    cout<< "\n operation menu ";
    cout <<"\n 1.addition";
    cout <<"\n 2.subtraction ";
    cout <<"\n 3.multiplication";
    cout <<"\n 4.division";
    cout <<"\n 5.modulo";
    cout<< "\nEnter your choice: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        
        case 2:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        
        case 3:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        
        case 4:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        
        case 5: 
           cout << "Enter first number: ";
           cin >> num1;
           cout << "Enter second number: ";
           cin >> num2;
           cout << "Result: " << calc.modulo(static_cast<int>(num1), static_cast<int>(num2)) << endl;
           break;

        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
