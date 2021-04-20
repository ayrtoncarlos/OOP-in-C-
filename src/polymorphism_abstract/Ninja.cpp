#include <iostream>
#include "../include/polymorphism_abstract/Ninja.h"

using namespace std;

Ninja::Ninja()
{
    cout << "Constructor - Ninja\n";
}

Ninja::~Ninja()
{
    cout << "Destructor - Ninja\n";
}

void Ninja::attack()
{
    cout << "Ninja! - " << attackPower << '\n';
}