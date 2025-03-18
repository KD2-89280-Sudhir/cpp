#ifndef salesmanager_h
#define salesmanager_h
#include "manager.h"
#include "salesman.h"
class Salesmanager : public Manager, public Salesman
{
public:
    Salesmanager();
    Salesmanager(int id, double salary, double bonus, double commission);
    void accept();
    void display();
};
#endif