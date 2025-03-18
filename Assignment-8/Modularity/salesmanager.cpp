#include "salesmanager.h"

    Salesmanager::Salesmanager()
    {
    }
    Salesmanager::Salesmanager(int id, double salary, double bonus, double commission) : Employee(id, salary)
    {
        setCommission(commission);
        setBonus(bonus);
    }
    void Salesmanager::accept()
    {
        Employee::accept();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }
    void Salesmanager::display()
    {
        Employee::display();
        Manager::displayManager();
        Salesman::displaySalesman();
    }
