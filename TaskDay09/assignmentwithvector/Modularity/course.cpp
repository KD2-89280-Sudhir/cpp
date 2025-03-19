#include "course.h"

Course::Course(){
    this->cid = 0;
    this->courseName = "";
    this->fees = 0;
}
Course::Course(int cid, string courseName, int fees){
    this->cid = cid;
    this->courseName = courseName;
    this->fees = fees;
}
void Course::acceptCourse()
{
    cout << "Enter the cid - ";
    cin >> cid;
    cout << "Enter the course name - ";
    cin >> courseName;
    cout << "Enter the fees - ";
    cin >> fees;
}

void Course::displayCourse()
{
    cout << "Cid - " << cid << endl;
    cout << "Course Name - " << courseName << endl;
    cout << "Fees - " << fees << endl;
    cout << "---------------------------------" << endl;
}
int Course::getCid()
{
    return cid;
}