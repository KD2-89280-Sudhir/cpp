// to run: g++ .*cpp 
#include "time.h"
int menu()
{
    int choice;
    cout << "*************************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Accept Complete Time" << endl;
    cout << "2. Accept Only Hour" << endl;
    cout << "3. Accept Only minute" << endl;
    cout << "4. Accept only second" << endl;
    cout << "5. Print Only Hour" << endl;
    cout << "6. Print Only minute" << endl;
    cout << "7. Print Only second" << endl;
    cout << "8. Print Time" << endl;
    cout << "Enter the choice - ";
    cin >> choice;
    cout << "*************************" << endl;
    return choice;
}

int getValue(int &index){
    cout << "Enter the value for which you want. " << endl;
    cout << "Enter the value between 0 to " << index-1 << endl;
    int i;
    cin >> i;
    if(i>index-1){
        cout << "Enter the wrong index." << endl;
        return -1;
    }
    return i;
}

int main(){
    Time **ptr = new Time*[3];
    int index = 0;
    int choice;
    while((choice=menu()) != 0){
        switch (choice)
        {
        case 1:
            /* code */
            if(index < 5){
                ptr[index] = new Time();
                ptr[index]->accept();
                index++;
            }else{
                cout << "No Space" << endl;
            }
            break;
        case 2:
            /* code */{
            int val1 = getValue(index);
            if (val1 != -1){
                cout << "Enter the value of Hour" << endl;
                int h;
                cin >> h;
                ptr[val1]->setHour(h);
            }
            else{
                cout << "Time object not found..." << endl;
            }
            }
            break;
        case 3:
            /* code */{
            int val2 = getValue(index);
            if (val2 != -1){
                cout << "Enter the value of Minute" << endl;
                int m;
                cin >> m;
                ptr[val2]->setMinute(m);
            }
            else{
                cout << "Time object not found..." << endl;
            }
            }
            break;
        case 4:
            /* code */{
            int val3 = getValue(index);
            if (val3 != -1){
                cout << "Enter the value of Second" << endl;
                int s;
                cin >> s;
                ptr[val3]->setSecond(s);
            }
            else{
                cout << "Time object not found..." << endl;
            }
            }
            break;
        case 5:
            /* code */{
            int val4 = getValue(index);
            ptr[val4]->getHour();}
            break;
        case 6:
            /* code */{
            int val5 = getValue(index);
            ptr[val5]->getMinutes();
            }
            break;
        case 7:
            /* code */{
            int val6 = getValue(index);
            ptr[val6]->getSecond();}
            break;
        case 8:
            /* code */
            for(int i = 0; i < index; i++){
                ptr[i]->printTime();
            }
            break;
        default:
            cout << "Enter the wrong choice:(";
            break;
        }
    }
    cout << "Thank you :)" << endl;
    for(int i = 0; i < 5; i++){
        delete ptr[i];
        ptr[i] = nullptr;
    }
    delete ptr;
    ptr = nullptr;
    return 0;
}