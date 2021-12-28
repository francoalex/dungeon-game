#ifndef ENEMY_H
#define ENEMY_H

#include "entity.h"

class enemy : public entity{
    public:
        enemy();

    protected:
        int enemy_damage;
};

#endif