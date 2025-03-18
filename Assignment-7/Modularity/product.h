#ifndef product_h
#define product_h
#include <iostream>
using namespace std;

class Product{
    private:
        const int id;
        string title;
        static int generate;

    public:
        Product();
        virtual void accept();
        virtual void display();
        virtual double calcPrice();
        int getID();

};
#endif 