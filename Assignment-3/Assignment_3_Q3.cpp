#include <iostream>
using namespace std;

namespace NStudent{
    class student
{
    private:
    int rollno;
    string name;
    float marks;

    public:
    student()
    {
        rollno = 00;
        name = "null";
        marks = 00;
    }

    void printStudentOnConsole()
    {
        cout << "The Roll no of the Student is: " << rollno << endl;
        cout <<"The name of the Student is: " << name << endl;
        cout << "The Marks of the Student is: " << marks << endl;
    }

    void acceptStudentFromConsole()
    {
        cout << "Enter the rollno: " << endl;
        cin >> rollno;
        cout << "Enter the name: " << endl;
        cin >> name;
        cout << "Enter the marks: " << endl;
        cin >> marks;

    }
};
    
}

int menu(){
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Print the Student Details on console" << endl;
    cout << "2. Accept the Student Details from console" << endl;
    cout << "Enter the choice" << endl;
    cin >> choice;
    return choice;
}

int main(){
    NStudent:: student s1;
    int choice;
    while((choice = menu()) != 0)
    {
        switch(choice){
            case 1:
                s1.printStudentOnConsole();
                break;
            case 2:
                s1.acceptStudentFromConsole();
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