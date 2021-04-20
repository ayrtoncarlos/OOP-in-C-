#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "Birthday.h"

using namespace std;

class Person
{
    public:
        Person(string n, Birthday b);
        ~Person();
        void printInfor();
        // Encapsulation
        void setName(string n);
        string getName();
        void setBirthday(Birthday b);
        Birthday getBirthday();
    protected:
    private:
        string name;
        Birthday bd;
};

#endif