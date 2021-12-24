#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

using namespace std;

class entity {
    public:
        virtual void show_stats();

    protected:
       int health;
       int attack;
};

#endif