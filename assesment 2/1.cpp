// Q.1 ● Create a lecture management System  
// Make sure each business logic is denoted with appropriate comments and 
// make your code interactive and represent clean and clear output on your 
// console screen. 
// Adhere to the coding principles  
// Define a class to represent lecture details. Include the following members and the 
// program should handle at least details of 5 lecturers.  
// Data members: 
// a) Name of the lecturer 
// b) Name of the subject 
// c) Name of course 
// d) Number of lecturers 
// Data functions:  
// a) To assign initial values  
// b) To add a lecture details  
// c) To display name and lecture details  
// Make sure you have to use constructor concept in it  
// Make sure all naming conversion properly mention in this project work  
// Make sure all method name  
// Use class and object concepts  
// Upload all features in develop branch after completion all features 
// merge it with the main branch.



#include <iostream>
#include <string>
using namespace std;

class LectureDetails
{
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLecturers;

public:
    LectureDetails()
    {
        // constructor to initialize lecture details
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numberOfLecturers = 0;
    }
    // function for assign values
    void assignValues(string name, string subject, string course, int numLecturers)
    {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numberOfLecturers = numLecturers;
    }

    // function to show lecture details
    void showDetails()
    {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Number of Lecturers: " << numberOfLecturers << endl;
    }
};

int main()
{
    LectureDetails lecturers[5];
    string name, subject, course;
    int numLecturers;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for lecturer " << (i + 1) << endl;
        cout << "Name: ";
        cin >> name;
        
        cout << "Subject: ";
        cin >> subject;
       
        cout << "Course: ";
        cin >> course;
        
        cout << "Number of Lecturers: ";
        cin >> numLecturers;

        lecturers[i].assignValues(name, subject, course, numLecturers);
    }

    // display lecture details
    cout << "\nLecture Details:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        lecturers[i].showDetails();
        cout << "                    " << endl;
    }

    return 0;
}
