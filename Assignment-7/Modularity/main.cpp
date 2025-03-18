#include "salesmanager.h"
#include "menu.h"
#include "display.h"

int main()
{
    Employee *emp[10];
    int choice;
    int index = 0;
    while((choice = menu()) != 0){
        switch(choice){
            case 1:
                {   
                    if(index < 10){
                        emp[index] = new Manager();
                        emp[index]->accept();
                        index++;
                    }else{
                        cout << "Database is full" << endl;
                    }
                }
                break;
            case 2:
                {
                    if(index < 10){
                        emp[index] = new Salesman();
                        emp[index]->accept();
                        index++;
                    }else{
                        cout << "Database is full" << endl;
                    }
                }
                break;
            case 3:
                {
                    if(index < 10){
                        emp[index] = new Salesmanager();
                        emp[index]->accept();
                        index++;
                    }else{
                        cout << "Database is full" << endl;
                    }
                }
                break;
            case 4:
                displayAllCount(emp, index);
                break;
            case 5:
                displayAllManager(emp, index);
                break;
            case 6:
                displayAllSalesman(emp, index);
                break;
            case 7:
                displayAllSalesManger(emp, index);
                break;
            default :
                cout << "Wrong choice. " << endl;
                break;
        }
    }
    cout << "Give us feedback:- " << endl;
    int rating = 0;
    cin >> rating;
    for(int i = 0; i < rating; i++){
        cout << "* ";
    }
    cout << " Rating" << endl;
    cout << "<Thank you.>" << endl;
    for(int i = 0; i < index; i++){
        delete emp[i];
        emp[i] = nullptr;
    };
    return 0;
}