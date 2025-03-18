#include <iostream>
using namespace std;

class Date
{

private:
    int day;
    int month;
    int year;

public:
    Date() {};
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "Enter the day - " << endl;
        cin >> this->day;
        cout << "Enter the month - " << endl;
        cin >> this->month;
        cout << "Enter the year - " << endl;
        cin >> this->year;
    }
    void printDate()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

class Person
{

private:
    string name;
    string address;
    Date *dob;

public:
    Person() {
        this->dob = nullptr;
    };
    Person(string name, string address)
    {
        this->name = name;
        this->address = address;
    }
    void acceptDOB(){
        dob = new Date();
        dob->acceptDate();
    }
    void acceptPerson()
    {
        cout << "Enter the name - " << endl;
        cin >> this->name;
        cout << "Enter the address - " << endl;
        cin >> this->address;
    }
    void printPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        dob->printDate();
    }
    ~Person(){
        if(dob != nullptr){
            delete dob;
            dob = nullptr;
        }
    }
};

class Student
{

private:
    const int id;
    int marks;
    string course;
    Date doj;
    Date *dor;
    static int generate;

public:
    Student() : id(++generate) {
        this->dor = nullptr;
    };
    Student(int marks, string course, int day, int month, int year) : id(++generate), doj(day, month, year)
    {
        this->marks = marks;
        this->course = course;
        this->dor = nullptr;
    };
    void acceptDOR(){
        dor = new Date();
        dor->acceptDate();
    }
    void acceptStudent()
    {
        cout << "Enter the marks - ";
        cin >> this->marks;
        cout << "Enter the course - ";
        cin >> this->course;
        doj.acceptDate();
    }
    void printStudent()
    {
        cout << "ID: " << id << endl;
        cout << "Marks: " << marks << endl;
        cout << "Course: " << course << endl;
        doj.printDate();
        dor->printDate();
    }
    ~Student(){
        if(dor != nullptr){
            delete dor;
            dor = nullptr;
        }
        
    }
};

int Student::generate = 0;

int main()
{

    // Create the person with parameterless ctor
    Person p1;
    // // accept the Person details including Name, Address, Date of Birth(Optional);
    p1.acceptPerson();
    // // accept the Person date of birth 
    p1.acceptDOB();
    // // Again print with date
    p1.printPerson();

    // Create the person with parameterized ctor
    Person p2("Rahul","Shani var peth");
    // // accept the Person details including Name, Address, Date of Birth(Optional);
    p2.acceptPerson();
    // // accept the Person date of birth 
    p2.acceptDOB();
    // // print the Person details with the present state;
    p2.printPerson();

    // // Create the student with parameterless ctor
    Student s1;
    // // accept the student details including Marks, Course, Date Joining, and id is auto-generated, and date of end is optional;
    s1.acceptStudent();
    // // accept the student end date
    s1.acceptDOR();
    // // print the student details with the present state
    s1.printStudent();
    
    // Create the Student with parameterized ctor
    Student s2(98, "CDAC", 25, 03, 2025);
    // accept the student details including Marks, Course, Date Joining, and id is auto-generated, and date of end is optional;
    s2.acceptDOR();
    // accept the student end date
    s2.printStudent();

    return 0;
}