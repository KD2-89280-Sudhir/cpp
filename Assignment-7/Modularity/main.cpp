#include "book.h"
#include "tape.h"

int Product::generate = 0;
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