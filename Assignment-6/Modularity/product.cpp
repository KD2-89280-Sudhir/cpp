#include "product.h"

        Product::Product():id(++generate) {
            this->title = "";
        }
        void Product::accept(){ 
            cout << "Enter the title: " << endl;
            cin >> this->title;
        }
        void Product::display(){
            cout << "The title of the book is: ";
            cout << this->title;
        }
        double Product::calcPrice(){ return 0;}

        int Product::getID(){
            return this->id;
        }
