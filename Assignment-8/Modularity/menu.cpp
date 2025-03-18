#include "menu.h"
int menu(){
    int choice;
    cout <<"************************************" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Manager" << endl; 
    cout << "2. Add Salesman" << endl; 
    cout << "3. Add Salesmanager" << endl; 
    cout << "4. Display the count of all employees with respect to designation"<< endl;  
    cout << "5. Display All Managers" << endl; 
    cout << "6. Display All Salesman" << endl; 
    cout << "7. Display All SalesManagers" << endl;
    cout << "***********************************" << endl;
    cout << "Enter the choice  ";
    cin >> choice;
    return choice;

}