// Q.1  Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Before swap:"<<endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    swapValues(num1, num2);

    cout << "After swap:"<<endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    double double1, double2;
    cout << "Enter two doubles: ";
    cin >> double1 >> double2;

    cout << "Before swap:"<<endl;
    cout << "double1: " << double1 << endl;
    cout << "double2: " << double2 << endl;

    swapValues(double1, double2);

    cout << "After swap:"<<endl;
    cout << "double1: " << double1 << endl;
    cout << "double2: " << double2 << endl;

    return 0;
}
