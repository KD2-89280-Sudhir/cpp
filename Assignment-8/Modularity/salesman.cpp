#include "salesman.h"
    void Salesman::acceptSalesman()
    {
        cout << "Enter commission - ";
        cin >> commission;
    }

    void Salesman::displaySalesman()
    {
        cout << "commission - " << commission << endl;
    }

    Salesman::Salesman()
    {
    }
    Salesman::Salesman(int id, double salary, double commission) : Employee(id, salary)
    {
        this->commission = commission;
    }
    void Salesman::accept()
    {
        Employee::accept();
        acceptSalesman();
    }

    void Salesman::display()
    {
        Employee::display();
        displaySalesman();
    }

    void Salesman::setCommission(double commission)
    {
        this->commission = commission;
    }