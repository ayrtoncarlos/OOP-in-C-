#include <iostream>
#include "../include/polymorphism_abstract/Enemy.h"

using namespace std;

Enemy::Enemy()
{
    cout << "Constructor - Enemy\n";
}

Enemy::~Enemy()
{
    cout << "Destructor - Enemy\n";
}

void Enemy::setAttackPower(int a)
{
    attackPower = a;
}