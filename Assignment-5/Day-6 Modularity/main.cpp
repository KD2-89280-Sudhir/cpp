#include "Student.h"
int menu()
{
    int choice;
    cout << "*************************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display the details" << endl;
    cout << "3. Search Student" << endl;
    cout << "4. Sort the result and Print results" << endl;
    cout << "Enter the choice - ";
    cin >> choice;
    cout << "*************************" << endl;
    return choice;
}

int SearchStudent(Student **ptr, int &index){
    int roll;
    cout << "Enter the rollnumber" << endl;
    cin >> roll;
    for(int i = 0; i < index; i++){
        if(ptr[i]->getRollNUmber() == roll){
            return i;
        }
    }
    return -1;
}

void sortRecords(Student **ptr, int &index){
    Student * arr[index];
    for(int i = 0; i < index; i++){
        arr[i] = ptr[i];
    }
    for (int i = 0; i < index - 1; i++) {
        for (int j = 0; j < index - i - 1; j++) {
            if (arr[j]->getRollNUmber() < arr[j + 1]->getRollNUmber()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < index; i++) {
        arr[i]->displayDetails();
    }
    
    cout << "Records sorted in descending order based on marks." << endl;
}

void addDummyRecored(Student **arr, int &index)
{
    // dummy records for testing...
    arr[index] = new Student("Anil", "M");
    arr[index]->setMarks();
    index++;
    arr[index] = new Student("Mukesh", "F");
    arr[index]->setMarks();
    index++;
    arr[index] = new Student("Ramesh", "M");
    arr[index]->setMarks();
    index++;
    arr[index] = new Student("Suresh", "M");
    arr[index]->setMarks();
    index++;
    return;
}

int main()
{
    Student *arr[5];
    int choice;
    int index = 0;
    addDummyRecored(arr, index);
    while((choice = menu()) != 0){
        switch(choice){
            case 1:
            {
                if(index < 5){
                    arr[index] = new Student();
                    arr[index]->acceptDetail();
                    index++;
                }else{
                    cout << "Record is full" << endl;
                }
            }
            break;
            case 2:
            {
                for(int i = 0; i < index; i++){
                    arr[i]->displayDetails();
                }
            }
            break;
            case 3:
            {
                int i = SearchStudent(arr, index);
                if(i != -1){
                    arr[i]->displayDetails();
                }else{
                    cout << "Student not found." << endl;
                }
            }
            break;
            case 4:
            {
                sortRecords(arr, index);
            }
            break;
            default:
                cout << "Enter the wrong choice. :(" << endl;
                break;
        }
    }
    cout << "Thank you" << endl;
    return 0;
}