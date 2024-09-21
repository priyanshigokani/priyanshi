// Q.2 Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class AreaOfRectangle
{
protected:
    float length;
    float width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
};

class Rectangle : public AreaOfRectangle
{
public:
    float calculateArea() 
    {
        return length * width;
    }

    void displayArea() 
    {
        cout << "Area of the rectangle: " << calculateArea() << endl;
    }
};

int main() 
{
    Rectangle rect;
    float length, width;

    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);
    rect.displayArea();

    return 0;
}
