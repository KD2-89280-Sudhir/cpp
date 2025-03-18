#ifndef time_h
#define time_h
#include<iostream>
using namespace std;
class Time
{
private:
    /* data */
    int h;
    int m;
    int s;
public:
    Time():Time(12,12,12){};
    Time(int h, int m, int s);
    void getHour();
    void getMinutes();
    void getSecond();
    void accept();
    void printTime();
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
};
#endif