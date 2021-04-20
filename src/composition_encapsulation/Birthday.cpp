#include <iostream>
#include "../include/composition_encapsulation/Birthday.h"

using namespace std;

Birthday::Birthday(int m, int d, int y) : month(m), day(d), year(y) 
{
    cout << "Constructor - Birthday\n";
}

Birthday::~Birthday()
{
    cout << "Destructor - Birthday\n";
}

void Birthday::printDate()
{
    cout << "Birthday: " << month << " / " << day << " / " << year << '\n';
}

void Birthday::setMonth(int m)
{
    month = m;
}

int Birthday::getMonth()
{
    return month;
}

void Birthday::setDay(int d)
{
    day = d;
}

int Birthday::getDay()
{
    return day;
}

void Birthday::setYear(int y)
{
    year = y;
}

int Birthday::getYear()
{
    return year;
}