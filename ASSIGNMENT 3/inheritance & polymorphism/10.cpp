// Q.10 .Write a program to concatenate the two strings using Operator Overloading 

#include <iostream>
using namespace std;

class StringConcat
{
    string str;

public:
    StringConcat(string s = "")
    {
        str = s;
    }

    StringConcat operator+(StringConcat obj)
    {
        return StringConcat(str + obj.str);
    }

    void display()
    {
        cout << str << endl;
    }
};

int main()
{
    StringConcat str1("Hello ");
    StringConcat str2("World");
    StringConcat result;

    result = str1 + str2;
    result.display();
}
