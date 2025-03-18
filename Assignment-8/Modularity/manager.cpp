#include "manager.h"
    void Manager::acceptManager()
    {
        cout << "Enter bonus - ";
        cin >> bonus;
    }

    void Manager::displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

    Manager::Manager()
    {
    }
    Manager::Manager(int id, double salary, double bonus) : Employee(id, salary)
    {
        this->bonus = bonus;
    }
    void Manager::accept()
    {
        Employee::accept();
        acceptManager();
    }

    void Manager::display()
    {
        Employee::display();
        displayManager();
    }
    void Manager::setBonus(double bonus)
    {
        this->bonus = bonus;
    }