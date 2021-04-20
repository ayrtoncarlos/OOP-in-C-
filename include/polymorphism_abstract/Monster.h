#ifndef MONSTER_H
#define MONSTER_H

#include "Enemy.h"

class Monster : public Enemy
{
    public:
        Monster();
        ~Monster();
        void attack();
    protected:
    private:
};

#endif