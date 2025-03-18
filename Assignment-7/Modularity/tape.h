#ifndef tape_h
#define tape_h
#include "product.h"

class Tape : public Product{
    string artist;
    double price;
    public:
        Tape();
        void accept();
        void display();
        double calcPrice();

};
#endif