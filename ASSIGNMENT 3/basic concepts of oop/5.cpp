// Q.5 Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member
// functions to calculate the rectangle's area and perimeter. 

#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length ;
    int width ;

    public:
    
    void setDimensions(int l,int w)
    {
        length = l;
        width = w;
    }

    int getArea()
    {
        return length * width;
    }

    int getPerimeter()
    {
        return 2 * (length * width);
    }

};

int main()
{
    int length;
    int width;

    cout<<"Enter the  length: ";
    cin>>length;

    cout<<"Enter the width: ";
    cin>>width;

    Rectangle rectangle;
    rectangle.setDimensions(length , width);

    cout<< rectangle.getArea()<<endl;
    cout<< rectangle.getPerimeter()<<endl;
    
    return 0;
}