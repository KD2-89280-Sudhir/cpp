#ifndef salesman_h
#define salesman_h
#include "employee.h"
class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman();
    void displaySalesman();

public:
    Salesman();
    Salesman(int id, double salary, double commission);
    void accept();
    void display();
    void setCommission(double commission);
};

#endif