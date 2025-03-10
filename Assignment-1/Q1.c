#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void printDateOnConsole(struct Date *temp){
    printf("This is the day: %d\n", temp->day);
    printf("This is the month: %d\n", temp->month);
    printf("This is the year: %d\n", temp->year);
    printf("The date i: %d-%d-%d", temp->day, temp->month, temp->year);
};

void acceptDateFromConsole(struct Date *temp){
    printf("Enter the day: ");
    scanf("%d", &temp->day);
    printf("Enter the month: ");
    scanf("%d", &temp->month);
    printf("Enter the year: ");
    scanf("%d", &temp->year);
}
int main(){
    struct Date d1;
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);
    return 0;
}