// Q.5  Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll 
// number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class
//  result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>

using namespace std;

class Students

{

    public:
    int RollNo;

    Students(int RollNo_)
    {
        RollNo = RollNo_;
    }

    int getRollNo()
    {
        return RollNo;
    }

};

class Test : public Students
{
    public:
    int maths;
    int english;

    Test(int RollNo_,int maths_, int english_) : Students(RollNo_)
    {
        maths =maths_;
        english = english_;
    }

    int getMaths()
    {
        return maths;
    }

    int getEnglish()
    {
        return english;
    }
};

class Result : public Test
{
    public:
    int totalMarks;

    
     Result (int RollNo_,int maths_, int english_) : Test(RollNo_, maths_, english_)
     {
         totalMarks = maths + english;
         
     }

    void totalMark()
    {
        totalMarks = getMaths() + getEnglish();
    }
};

    Result displayStudentMarks()
    {
        
        int RollNo;
        int maths;
        int english;
        
        cout<<"Enter student rollNo: ";
        cin>>RollNo;
        cout<<"Enter your maths marks: ";
        cin>>maths;
        cout<<"Enter your english marks: ";
        cin>>english;

        Result result(RollNo,maths,english);

        return result;
    }



int main()
{
    Result student = displayStudentMarks();
    cout << "Roll no: "<<student.RollNo<<endl;
    cout <<"Maths marks: "<< student.maths<<endl;
    cout << "English marks: "<<student.english<<endl;
    cout << "Total marks are: "<<student.totalMarks;
}