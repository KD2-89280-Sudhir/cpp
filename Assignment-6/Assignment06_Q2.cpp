#include<iostream>
using namespace std;

class employee {
private:
    int id;
    double salary;
public:
    employee() {
        cout << "Parameterless ctor in employee. " << endl;
    }
    employee(int id, double salary) {
        cout << "Parameterized ctor in employee. " << endl;
        this->id = id;
        this->salary = salary;
    }
    void setId(int id) {
        cout << "setID ctor in employee. " << endl;
        this->id = id;
    }
    int getId() {
        cout << "getID ctor in employee. " << endl;
        return this->id;
    }
    void setSalary(double salary) {
        cout << "setSalary ctor in employee. " << endl;
        this->salary = salary;
    }
    double getSalary() {
        cout << "getsalary ctor in employee. " << endl;
        return this->salary;
    }
    void accept() {
        cout << "Enter the value of id: ";
        cin >> this->id;
        cout << "Enter the salary: ";
        cin >> this->salary;
    }
    void display() {
        cout << "Value of the id is: " << this->id << endl;
        cout << "Value of the salary is: " << this->salary << endl;
    }
};

class Manager : virtual public employee {
private:
    double bonus;
public:
    Manager() {
        cout << "Parameterless ctor in Manager. " << endl;
    }
    Manager(int id, double salary, double bonus) : employee(id, salary) {
        cout << "Parameterized ctor in Manager. " << endl;
        this->bonus = bonus;
    }
    void setBonus(double bonus) {
        cout << "setBonus ctor in Manager. " << endl;
        this->bonus = bonus;
    }
    double getBonus() {
        cout << "getBonus ctor in Manager. " << endl;
        return this->bonus;
    }
    void accept() {
        employee::accept();
        cout << "Enter the bonus: ";
        cin >> this->bonus;
    }
    void display() {
        employee::display();
        cout << "Value of the bonus: " << this->bonus << endl;
    }
protected:
    void acceptManager() {
        cout << "Accept manager::manager" << endl;
    }
    void displayManager() {
        cout << "Display manager::manager" << endl;
    }
};

class Salesman : virtual public employee {
private:
    double commission;
public:
    Salesman() {
        cout << "Parameterless ctor in Salesman. " << endl;
    }
    Salesman(int id, double salary, double commission) : employee(id, salary) {
        cout << "Parameterized ctor in Salesman. " << endl;
        this->commission = commission;
    }
    void setCommission(double commission) {
        cout << "In Salesman set commission" << endl;
        this->commission = commission;
    }
    double getCommission() {
        cout << "In Salesman get commission" << endl;
        return this->commission;
    }
    void accept() {
        employee::accept();
        cout << "Enter the commission: ";
        cin >> this->commission;
    }
    void display() {
        employee::display();
        cout << "Value of the commission: " << this->commission << endl;
    }
protected:
    void acceptSalesman() {
        cout << "Accept Salesman::employee" << endl;
    }
    void displaySalesman() {
        cout << "Display Salesman::employee" << endl;
    }
};

class SalesManager : public Manager, public Salesman {
public:
    SalesManager() {
        cout << "Parameterless ctor in SalesManager. " << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
        : employee(id, salary), Manager(id, salary, bonus), Salesman(id, salary, commission) {
        cout << "Parameterized ctor in SalesManager. " << endl;
    }
    void accept() {
        Manager::accept();
        Salesman::accept();
    }
    void display() {
        Manager::display();
        Salesman::display();
    }
};

int main() {
    // Test employee class
    cout << "Testing Employee class:" << endl;
    employee emp;
    emp.accept();
    emp.display();
    emp.setId(101);
    emp.setSalary(50000);
    cout << "Employee ID: " << emp.getId() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;
    cout << endl;

    // Test Manager class
    cout << "Testing Manager class:" << endl;
    Manager mgr;
    mgr.accept();
    mgr.display();
    mgr.setBonus(10000);
    cout << "Manager Bonus: " << mgr.getBonus() << endl;
    cout << endl;

    // Test Salesman class
    cout << "Testing Salesman class:" << endl;
    Salesman sm;
    sm.accept();
    sm.display();
    sm.setCommission(5000);
    cout << "Salesman Commission: " << sm.getCommission() << endl;
    cout << endl;

    // Test SalesManager class
    cout << "Testing SalesManager class:" << endl;
    SalesManager smgr;
    smgr.accept();
    smgr.display();
    cout << endl;

    return 0;
}