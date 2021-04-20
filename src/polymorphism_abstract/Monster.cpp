#include <iostream>
#include "../include/polymorphism_abstract/Monster.h"

using namespace std;

Monster::Monster()
{
    cout << "Constructor - Monster\n";
}

Monster::~Monster()
{
    cout << "Destructor - Monster\n";
}

void Monster::attack()
{
    cout << "Monster! - " << attackPower << '\n';
}