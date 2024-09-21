// Q 7 Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member 
// functions to set and get these variables, as well as to validate if the date is valid. 

#include<iostream>

using namespace std;

class Date 
{
    int day;
    int month;
    int year;

public:
    void setDate(int d, int m, int y)
    {
        if(isValidDate(d, m, y))
        {
            day = d;
            month = m;
            year = y;
        }
        else 
        {
            cout << "Invalid date!" << endl;
        }
    }

    int getDay() 
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year; 
    }

    bool isValidDate(int d, int m, int y)
    {
        if (m < 1 || m > 12) 
        {
            return false;
        }

        if (d < 1 || d > 31)
        {
            return false;
        }

        if (m == 2) 
        {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
            {
                return d <= 29;
            }
            else 
            {
                return d <= 28;
            }
        }

        if (m == 4 || m == 6 || m == 9 || m == 11) 
        {
            return d <= 30;
        }

        return true;
    }

    void displayDate() 
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date date;
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (date.isValidDate(day, month, year)) 
    {
        date.setDate(day, month, year);
        cout << "The entered date is: ";
        date.displayDate();
    }
    else
    {
        cout << "The date is invalid." << endl;
    }

    return 0;
}
