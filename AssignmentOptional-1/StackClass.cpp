#include<iostream>
using namespace std;

class Stack{
int top;
int *arr;
int size;
public:
    Stack(int size = 5){
        this->size = size;
        arr = new int[size];
        top = -1;
    };
    void push(int x){
        if(isFull()){
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;

    }

    void pop(){
        if(isEmpty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    int peek(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        cout << arr[top] << endl;
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == size-1;
    }

    void print(){
        for(int i = 0; i <= top; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int menu(){
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Add element to stack" << endl;
    cout << "2. remove element from stack" << endl;
    cout << "3. Top element" << endl;
    cout << "4. Status of stack" << endl;
    cout << "Enter the choice" << endl;
    cin >> choice;
    return choice;
}

int main(){
    Stack *ptr = new Stack();
    int choice;
    while((choice = menu()) != 0)
    {
        switch(choice){
            case 1:
                int x;
                cout << "Enter the element to add in the stack" << endl;
                cin >> x;
                ptr->push(x);
                break;
            case 2:
                ptr->pop();
                break;
            case 3:
                ptr->peek();
                break;
            case 4:
                ptr->print();
                break;
            default:
                cout << "You entring the wrong choice:(" << endl;
                break;
        }
        cout << endl;
        
    }
    cout << "Thank you for using the function :)" << endl;
    return 0;
}