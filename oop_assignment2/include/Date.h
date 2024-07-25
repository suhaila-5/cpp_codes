#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;

class Date
{
    public:
    Date()
    {
        dday =0 ;
        dMonth=0;
        dYear=0;
    }
    Date(int d,int m,int y)
    {
        this->dMonth = m;
        this->dday = d;
        this->dYear = y;
    }
    void setDate(int month, int day, int year)
    {
        this->dMonth = month;
        this->dday = day;
        this->dYear = year;
    }
    int getMonth()
    {
        return dMonth;
    }

    int getDay()
    {
        return dday;
    }

    int getYear()
    {
        return dYear;
    }
    string toString()
    {
        return to_string(dMonth) + "/" + to_string(dday) + "/" + to_string(dYear);
    }

    protected:
        int dMonth ;
        int dday;
        int dYear ;


};

#endif // DATE_H
