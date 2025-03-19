#include "teacher.h"

Teacher::Teacher(){
    this->id = 0;
    this->teacherName = "";
}
Teacher::Teacher(int id, string teacherName){
    this->id = id;
    this->teacherName = teacherName;
}
void Teacher::acceptTeacher()
{
    cout << "Enter the id - ";
    cin >> id;
    cout << "Enter the teacherName - ";
    cin >> teacherName;
}
void Teacher::displayTeacher()
{
    cout << "id - " << id << endl;
    cout << "Teacher Name - " << teacherName << endl;
    cout << "---------------------------------" << endl;
}
vector<Course *> &Teacher::giveCourse()
{
    return courseTech;
}
int Teacher::getid()
{
    return id;
}