#include "book.h"

        Book::Book(): Product(){
            this->author = "";
            this->price = 0;
        }
        void Book::accept(){
            Product::accept();
            cout << "Enter the author of Book: " << endl;
            cin >> this->author;
            cout << "Enter the price of Book: " << endl;
            cin >> this->price;
            return;
        }

        void Book::display(){
            cout << "The id of the book is: " << endl;
            cout << Product::getID();
            Product::display();
            cout << endl;
            cout << "The author of the book is: ";
            cout << this->author;
            cout << endl;
            cout << "The price of the book is: ";
            cout << this->price;
            cout << endl;
        }
        double Book::calcPrice(){
            return price*0.95;
        }