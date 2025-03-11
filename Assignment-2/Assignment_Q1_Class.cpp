#include <iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate()
    {
        day = 01;
        month = 01;
        year = 0001;
    }

    void printDateOnConsole()
    {
        cout << "The Date is: " << day <<"-" << month << "-" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter the day: " << endl;
        cin >> day;
        cout << "Enter the month: " << endl;
        cin >> month;
        cout << "Enter the year: " << endl;
        cin >> year;

    }

    bool isLeapYear()
    {
        cout << "I am working on this" << endl;
        if(year%4 == 0 && year%100 != 0 || year%4 == 0 && year%400 == 0){
            cout << "This year is Leap year" << endl;
        }else{
            cout << "This is not a leap year" << endl;
        }

    }
};

int menu(){
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Print the Date on console" << endl;
    cout << "2. Accept the Date from console" << endl;
    cout << "3. Check the leap year" << endl;
    cout << "Enter the choice" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    Date d1;
    int choice;
    d1.initDate();
    while((choice = menu()) != 0)
    {
        switch(choice){
            case 1:
                d1.printDateOnConsole();
                break;
            case 2:
                d1.acceptDateFromConsole();
                break;
            case 3:
                d1.isLeapYear();
                break;
            default:
                cout << "You entring the wrong choice:(" << endl;
                break;
        }
        cout << endl;
        
    }
    cout << "Thank you for using the function :)" << endl;
    return 0;

}