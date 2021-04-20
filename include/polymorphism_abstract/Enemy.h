#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
    public:
        Enemy();
        ~Enemy();
        void setAttackPower(int a);
        virtual void attack() = 0; // Abstract
    protected:
        int attackPower;
    private:
};

#endif