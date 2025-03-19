#ifndef student_h
#define student_h
#include "course.h"
#include "teacher.h"
class Student{
    private:
    int rollno;
    string studentName;
    vector<Teacher *> mentors;
    vector<Course *> courseEnrolled;
    public:
    Student();
    Student(int rollno, string studentName);
    void acceptStudent();
    void displayStudent();
    vector<Teacher *> &giveMentors();
    vector<Course *> &giveCourse();
    int getRollNo();
};
#endif