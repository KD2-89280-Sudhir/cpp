#include <iostream>
using namespace std;

class calc
{
    private: 
    int length;
    int breath;
    int height;

    public:
    calc() : calc(10,20,30) {};

    calc(int length) : calc(length, length, length) {}

    calc(int length, int breath, int height){
        this->length = length;
        this->breath = breath;
        this->height = height;
    }

    void acceptValues(){
        cout << "Enter the first value: " << endl;
        cin >> this->length;
        cout << "Enter the second value: " << endl;
        cin >> this->breath;
        cout << "Enter the third value : " << endl;
        cin >> this->height;
    }

    void acceptValues1(){
        cout << "Enter the value: " << endl;
        int value;
        cin >> value;
        this->length = value;
        this->breath = value;
        this->height = value;
    }

    void volume(){
        cout << "The volume is:" << endl;
        cout << this->length*this->breath*this->height << endl;
    }

    void displayValues(){
        cout << "the first value: " << this->length << endl;
        cout << "the second value: " << this->breath << endl;
        cout << "Enter the third value : " << this->height << endl;
    }
};

int menu(){
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Calculate Volume with default values:" << endl;
    cout << "2. Calculate volume with length, breath, height with single value:" << endl;
    cout << "3. Calculate Volume with different length, breath and height:" << endl;
    cout << "Enter the your choice: " << endl;
    cin >> choice;
    return choice;
}

int main(){
    calc v;
    int choice;
    while((choice = menu()) != 0){
        switch(choice){
            case 1:
                v.displayValues();
                v.volume();
                break;
            case 2:
                v.acceptValues1();
                v.displayValues();
                v.volume();
                break;
            case 3:
                v.acceptValues();
                v.displayValues();
                v.volume();
                break;
            default:
                cout << "You choice the wrong choice" << endl;
        }
        cout << endl;
    }

    cout << "Thank you for using this app." << endl;
    return 0;
}