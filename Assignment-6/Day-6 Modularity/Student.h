#ifndef Student_h
#define Student_h
#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        string gender;
        const int rollNumber;
        static int generate;
        double marks[3];
    public:
        Student();
        Student(string name, string gender);
        void acceptDetail();
        void displayDetails();
        void setMarks();
        int getRollNUmber();
};
#endif

