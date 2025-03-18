#include "tape.h"

        Tape::Tape(): Product(){
            this->artist = "";
            this->price = 0;
        }

        void Tape::accept(){
            Product::accept();
            cout << "Enter the artist of Book: " << endl;
            cin >> this->artist;
            cout << "Enter the price of Book: " << endl;
            cin >> this->price;
            return;
        }

        void Tape::display(){
            cout << "The id of the tape is: " << endl;
            cout << Product::getID();
            Product::display();
            cout << endl;
            cout << "The artist of the tape is: ";
            cout << this->artist;
            cout << endl;
            cout << "The price of the tape is: ";
            cout << this->price;
            cout << endl;
            return;
        }
        double Tape::calcPrice(){
            return price*0.90;
        }
