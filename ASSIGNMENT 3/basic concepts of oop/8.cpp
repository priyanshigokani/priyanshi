// Q.8 Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member 
// functions to calculate the rectangle's area and perimeter. 

#include<iostream>

using namespace std;

class Rectangle
{
    private:

    int length,width;

    public:
    Rectangle()
    {

    cout <<"Enter the length of rectangle: ";
    cin >> length;

    cout <<"Enter the width of rectangle: ";
    cin >> width;
    }

    void area()
    {
        cout <<"Area of rectangle: "<<length * width<<endl;
    }

    void perimeter()
    {
        cout <<"Perimeter of rectangle: "<<2 *(length + width)<<endl;
    }

};

int main()
{
    Rectangle r;
    r.area();
    r.perimeter();

    return 0;
}
   
