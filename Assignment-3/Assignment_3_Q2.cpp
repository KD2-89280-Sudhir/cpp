#include <iostream>
using namespace std;

class tollbooth{
    unsigned int payingCars;
    unsigned int nopayingCars;
    double Amount;
    
    public:
        tollbooth(){
            this->payingCars = 0;
            this->nopayingCars = 0;
            this->Amount = 0;
        }

        void payingCar(){
            cout << "Thank you for giving the toll charge." << endl;
            this->payingCars++;
            this->Amount += 0.50; 
        }

        void nopayCar(){
            cout << "Thank you for coming but give the toll charge next time." << endl;
            this->nopayingCars++;
        }

        void printOnConsole(){
            cout << "The total amount of the Day is: " << endl;
            cout << this->Amount << endl;
            cout << "The number of cars who pay the toll charge: " << endl;
            cout << this->payingCars << endl;
            cout << "The number of cars who do not pay the toll charge: " << endl;
            cout << this->nopayingCars << endl;

        }
};

int menu(){
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Pay the toll charge:" << endl;
    cout << "2. Do not pay the toll charge:" << endl;
    cout << "3. Show the day ki majduri:" << endl;
    cout << "Enter the your choice: " << endl;
    cin >> choice;
    return choice;
}

int main(){
    int choice;
    tollbooth t;
    while((choice=menu()) != 0){
        switch (choice)
        {
        case 1:
            t.payingCar();
            break;
        case 2:
            t.nopayCar();
            break;
        case 3:
            t.printOnConsole();
            break;
        default:
            cout << "You choose the wrong choice." << endl;
            break;
        }
        cout << endl;
    }

    cout << "Good Bye :)" << endl; 

}
