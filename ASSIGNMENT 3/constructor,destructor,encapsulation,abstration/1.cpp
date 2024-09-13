// Q.1 Write a program to find the multiplication values and the cubic values using inline function 


#include<iostream>

using namespace std;

inline int multiply(int a, int b)
{
    return a * b;
}

inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    int num1, num2;

    std::cout <<"Enter your first number: ";
    std::cin >>num1;

    std::cout <<"Enter your second number: ";
    std::cin >>num2;

    std::cout <<"Multiplication of numbers are: "<<multiply(num1,num2) <<std::endl;

    std::cout <<"Enter your number to find a cube: ";
    std::cin >>num1;

    std::cout <<"cubic value of given number is:"<<cube(num1)<<endl;

    return 0;
}
