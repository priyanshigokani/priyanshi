// Q.11  Write a program to calculate the area of circle, rectangle and triangle using Function Overloading 
// Rectangle: Area * breadth 
// Triangle: ½ *Area* breadth 
// Circle: Pi * Area *Area

#include <iostream>
using namespace std;

class Rectangle
{
public:
    
    double area(double length, double breadth)
    {
        return length * breadth;
    }

    double area(double base, double height, int)
    {
        return 0.5 * base * height;
    }

    double area(double radius)
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Rectangle rectangle;
    double length, breadth, base, height, radius;

    cout << "Enter length of rectangle: ";
    cin >> length;
    
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    
    cout << "Area of Rectangle: " << rectangle.area(length, breadth) << endl;

    cout << "Enter base of triangle: ";
    cin >> base;
    
    cout << "Enter height of triangle: ";
    cin >> height;
    
    cout << "Area of Triangle: " << rectangle.area(base, height, 0) << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    
    
    cout << "Area of Circle: " << rectangle.area(radius) << endl;
}
