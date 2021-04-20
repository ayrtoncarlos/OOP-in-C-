#include <iostream>
#include "include/composition_encapsulation/Birthday.h"
#include "include/composition_encapsulation/Person.h"
#include "include/inheritance/Daughter.h"
#include "include/polymorphism_abstract/Ninja.h"
#include "include/polymorphism_abstract/Monster.h"

using namespace std;

int main()
{
    // Composition and Encapsulation example
    Birthday bd(10, 02, 1994);
    Person p("Ayrton", bd);
    p.printInfor();

    bd.setMonth(11);
    p.setBirthday(bd);
    p.setName("Ayrton Andrade");
    p.printInfor();

    // Inheritance example
    Daughter d;
    d.sayHi();

    // Polymorphism and Abstract example
    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    e1->attack();
    e2->attack();

    return 0;
}