#include <iostream>
#include "../include/inheritance/Mother.h"

using namespace std;

Mother::Mother()
{
    cout << "Constructor - Mother\n";
}

Mother::~Mother()
{
    cout << "Destructor - Mother\n";
}

void Mother::sayHi()
{
    cout << "Hi\n";
}