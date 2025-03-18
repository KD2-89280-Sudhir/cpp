#include "Student.h"
int Student::generate = 0;

Student::Student() : rollNumber(++generate) {
    name = "";
    gender = "";
    marks[3] = {0};
}

Student::Student(string name, string gender) : rollNumber(++generate)
{
    this->name = name;
    this->gender = gender;
    marks[3] = {0};
}
void Student::acceptDetail()
{
    cout << "Enter the name: " << endl;
    cin >> this->name;
    cout << "Enter the Gender: " << endl;
    cin >> this->gender;
    setMarks();
}
void Student::displayDetails()
{
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Roll Number: " << rollNumber << endl;
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += marks[i];
    }
    cout << "Percentage Marks: " << sum / 3 << "%" << endl;
}
void Student::setMarks()
{
    for (int i = 0; i < 3; i++)
    {
        int marks;
        cout << "Enter the marks of subject " << i + 1 << ": ";
        cin >> marks;
        this->marks[i] = marks;
    }
}
int Student::getRollNUmber()
{
    return this->rollNumber;
}
