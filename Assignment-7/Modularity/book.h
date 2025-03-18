#ifndef book_h
#define book_h
#include "product.h"
class Book : public Product{
    private: 
        string author;
        double price;
    public:
        Book();
        void accept();

        void display();
        double calcPrice();
};
#endif