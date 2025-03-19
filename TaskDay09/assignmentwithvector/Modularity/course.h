#ifndef course_h
#define course_h
#include<iostream>
#include<vector>
using namespace std;
class Course{
    private:
    int cid;
    string courseName;
    int fees;

    public:
    Course();
    Course(int cid, string courseName, int fees);
    void acceptCourse();
    void displayCourse();
    int getCid();
};
#endif