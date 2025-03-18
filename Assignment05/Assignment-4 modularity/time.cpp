#include "time.h"

Time::Time(){}

Time::Time(int h, int m, int s)
{
    this->h = h;
    this->m = m;
    this->s = s;
}
void Time::getHour()
{
    cout << "Value of Hour: " << this->h << endl;
}
void Time::getMinutes()
{
    cout << "Value of minute: " << this->m << endl;
}
void Time::getSecond()
{
    cout << "Value of second: " << this->s << endl;
}
void Time::accept()
{
    cout << "Enter the Hour - ";
    cin >> h;
    cout << "Enter the minute - ";
    cin >> m;
    cout << "Enter the second - ";
    cin >> s;
}
void Time::printTime()
{
    cout << "TIme is: " << this->h << ":" << this->m << ":" << this->s << endl;
}
void Time::setHour(int h)
{
    this->h = h;
}
void Time::setMinute(int m)
{
    this->m = m;
}
void Time::setSecond(int s)
{
    this->s = s;
}