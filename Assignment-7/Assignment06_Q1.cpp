#include <iostream>
using namespace std;

class Product{
    private:
        const int id;
        string title;
        static int generate;

    public:
        Product():id(++generate) {
            this->title = "";
        }
        virtual void accept(){ 
            cout << "Enter the title: " << endl;
            cin >> this->title;
        }
        virtual void display(){
            cout << "The title of the book is: ";
            cout << this->title;
        }
        virtual double calcPrice(){ return 0;}

        int getID(){
            return this->id;
        }

};

int Product::generate = 0;

class Book : public Product{
    private: 
        string author;
        double price;
    public:
        Book(): Product(){
            this->author = "";
            this->price = 0;
        }
        void accept(){
            Product::accept();
            cout << "Enter the author of Book: " << endl;
            cin >> this->author;
            cout << "Enter the price of Book: " << endl;
            cin >> this->price;
            return;
        }

        void display(){
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
        double calcPrice(){
            return price*0.95;
        }
};

class Tape : public Product{
    string artist;
    double price;
    public:
        Tape(): Product(){
            this->artist = "";
            this->price = 0;
        }

        void accept(){
            Product::accept();
            cout << "Enter the artist of Book: " << endl;
            cin >> this->artist;
            cout << "Enter the price of Book: " << endl;
            cin >> this->price;
            return;
        }

        void display(){
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
        double calcPrice(){
            return price*0.90;
        }

};

int menu(){
    int choice;
    cout << "*********************************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add book to cart" << endl;
    cout << "2. Add tape to cart" << endl;
    cout << "3. Display all the product in cart." << endl;
    cout << "4. Final bill." << endl;
    cout << "*********************************" << endl;
    cout << "Enter the chocie -  ";
    cin >> choice;
    return choice;
}

void finalBill(Product **ptr, int &index){
    double sum = 0;
    for(int i = 0; i < index; i++){
        sum = sum + ptr[i]->calcPrice();
    }

    cout << "Final BIll is: " << sum << endl;
}

void allProduct(Product **arr, int &index){
    if(index == 0){
        cout << "no products" << endl;
    }
    for(int i = 0; i < index; i++){
        cout << i << " "<< "Product is: " << endl;
        arr[i]->display();
    }    
}

int main(){
    Product *arr[3];
    int index = 0;
    int choice;

    while((choice = menu()) != 0){
        switch(choice){
            case 1:{
                if(index < 3){
                    arr[index] = new Book();
                    arr[index]->accept();
                    index++;
                }else{
                    cout << "Your cart is full" << endl;
                }}
                break;
            case 2: {
                if(index < 3){
                    arr[index] = new Tape();
                    arr[index]->accept();
                    index++;
                }else{
                    cout << "Your cart is full" << endl;
                }}
                break;
            case 3: 
                allProduct(arr, index);
                break;
            case 4:
                finalBill(arr, index);
                break;
            default:
                cout << "wrong choice ): "<< endl;
                break;
        }
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < index; i++) {
        delete arr[i];
        arr[i] = nullptr;
    }

    return 0;
}