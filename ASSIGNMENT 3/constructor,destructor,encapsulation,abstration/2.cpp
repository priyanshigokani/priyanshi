// Q.2  Write a program of Addition, Subtraction, Division, Multiplication using constructor. 

#include<iostream>
using namespace std;


class calculate
{

     float num1, num2;


     public:

     calculate(float a,float b)
     {
        num1 = a;
        num2 = b;
     }

     float add()
     {
        return num1 + num2;
     }

     float sub()
     {
        return num1 - num2;
     }

     float mul()
     {
        return num1 * num2;
     }

     float div()
     {
        return num1 / num2;
     }
};


int main()
{
    int a, b;

    cout <<"Enter the first number: ";
    cin >>a;

    cout <<"Enter your second number: ";
    cin >>b;

    calculate calc(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout <<"Subtraction: "<<calc.sub() <<endl;
    cout <<"Multiplication: "<<calc.mul() <<endl;
    cout <<"Division: "<<calc.div() <<endl;

    return 0;

}