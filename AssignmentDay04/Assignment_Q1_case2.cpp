#include<iostream>
using namespace std;
class employee{
    private:
        int id;
        string name;
        double salary;
        static int generate;
    public:
        employee():id(++generate){
            this->name = "";
            this->salary = 0;
        }

        void acceptValue(){
            cout << "Enter the Name: ";
            cin >> this->name;
            cout << "Enter the Salary: ";
            cin >> this->salary;
        }

        void display(){
            cout << "ID: " << this->id << endl;
            cout << "Name: " << this->name << endl;
            cout << "Salary: " << this->salary << endl;
        }
};

int employee::generate = 1000;

int main(){
    employee* ptr = new employee [3];
    for(int i = 0; i < 3; i++){
        ptr[i].acceptValue();
    }
    for(int i = 0; i < 3; i++){
        ptr[i].display();
    }
    delete []ptr;
    ptr = nullptr;
    return 0;
}