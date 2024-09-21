//Q.5 Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>

using namespace std;

class Triangle
{
    int side1,side2,side3;
    
    public:
    Triangle(int a, int b, int c) 
    {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    bool isEquilateral()
    {
        return (side1 == side2 == side3);
    }

    bool isIsosceles()
    {
        return (side1 == side2 || side2 == side3 || side1  ==side3);
    }

    bool isScalene()
    {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }

    void displayType()
    {
        if(isEquilateral())
        {
            cout << "Triangle is Equilateral";
        }

        else if(isIsosceles())
        {
            cout<<"Triangle is isosceles";
        }

        else if(isScalene())
        {
            cout <<"Triangle is scalene";
        }
    }
};

int main()
{
    int a,b,c;

    cout <<"Enter a length of triangle: ";
    cin >>a>>b>>c;

    // Triangle triangle(a,b,c);
     Triangle triangle(a, b, c);

    triangle.displayType();

    return 0;
}


