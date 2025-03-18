#include "display.h"

void displayAllCount(Employee **emp, int &index){
    int ManagerCount = 0;
    int salesCount = 0;
    int salesManagerCount = 0;
    for(int i = 0; i < index; i++){
        if(typeid(*emp[i]) == typeid(Manager)){
            ManagerCount++;
        }
        if(typeid(*emp[i]) == typeid(Salesman)){
            salesCount++;
        }
        if(typeid(*emp[i]) == typeid(Salesmanager)){
            salesManagerCount++;
        }
    }
    cout << "Manager Count is: " << ManagerCount << endl;
    cout << "Salesman Count is: " << salesCount << endl;
    cout << "SalesManager Count is: " << salesManagerCount << endl;
}

void displayAllManager(Employee **emp, int &index){
    bool check = 0;
    for(int i = 0; i < index; i++){
        if(typeid(*emp[i]) == typeid(Manager)){
            check = 1;
            emp[i]->display();
        }
    }
    if(!check){
        cout << "Their is no manager in database. " << endl;
    }
}

void displayAllSalesman(Employee **emp, int &index){
    bool check = 0;
    for(int i = 0; i < index; i++){
        if(typeid(*emp[i]) == typeid(Salesman)){
            check = 1;
            emp[i]->display();
        }
    }
    if(!check){
        cout << "Their is no salesman in database. " << endl;
    }
}

void displayAllSalesManger(Employee **emp, int &index){
    bool check = 0;
    for(int i = 0; i < index; i++){
        if(typeid(*emp[i]) == typeid(Salesmanager)){
            check = 1;
            emp[i]->display();
        }
    }
    if(!check){
        cout << "Their is no salesmanager in database. " << endl;
    }
}