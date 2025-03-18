#ifndef employee_h
#define employee_h
#include <iostream>
#include <typeinfo>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee();
    Employee(int id, double salary);
    virtual void accept();
    virtual void display();
};
#endif