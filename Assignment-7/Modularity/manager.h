#ifndef manager_h
#define manager_h
#include "employee.h"
class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager();
    void displayManager();
public:
    Manager();
    Manager(int id, double salary, double bonus);
    void accept();
    void display();
    void setBonus(double bonus);
};
#endif