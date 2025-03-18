#include "employee.h"

Employee::Employee(){}
Employee::Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }
void Employee::accept()
    {
        cout << "Enter id - ";
        cin >> id;
        cout << "Enter salary - ";
        cin >> salary;
    }

void Employee::display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }