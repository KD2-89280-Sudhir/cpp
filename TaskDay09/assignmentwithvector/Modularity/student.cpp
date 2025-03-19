#include "student.h"
Student::Student(){
    this->rollno = 0;
    this->studentName = "";
}
Student::Student(int rollno, string studentName){
    this->rollno = rollno;
    this->studentName = studentName;
}
void Student::acceptStudent()
{
    cout << "Enter the rollno - ";
    cin >> rollno;
    cout << "Enter the studentName - ";
    cin >> studentName;
}
void Student::displayStudent()
{
    cout << "rollno - " << rollno << endl;
    cout << "Student Name - " << studentName << endl;
    cout << "---------------------------------" << endl;
}
vector<Teacher *> &Student::giveMentors()
{
    return mentors;
}
vector<Course *> &Student::giveCourse()
{
    return courseEnrolled;
}
int Student::getRollNo()
{
    return rollno;
}