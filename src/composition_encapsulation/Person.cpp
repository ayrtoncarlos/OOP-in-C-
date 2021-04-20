#include <iostream>
#include <string>
#include "../include/composition_encapsulation/Person.h"
#include "../include/composition_encapsulation/Birthday.h"

using namespace std;

Person::Person(string n, Birthday b) : name(n), bd(b) 
{
    cout << "Constructor - Person\n";
}

Person::~Person()
{
    cout << "Destructor - Person\n";
}

void Person::printInfor()
{
    cout << "Name: " << name << '\n';
    bd.printDate();
}

void Person::setName(string n)
{
    name  = n;
}

string Person::getName()
{
    return name;
}

void Person::setBirthday(Birthday b)
{
    bd = b;
}

Birthday Person::getBirthday()
{
    return bd;
}