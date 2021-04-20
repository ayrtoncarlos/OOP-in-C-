#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
    public:
        Birthday(int m, int d, int y);
        ~Birthday();
        void printDate();
        // Encapsulation
        void setMonth(int m);
        int getMonth();
        void setDay(int d);
        int getDay();
        void setYear(int y);
        int getYear();
    protected:
    private:
        int month;
        int day;
        int year;
};

#endif