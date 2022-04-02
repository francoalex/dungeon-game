#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

using namespace std;

class entity {
    public:
        virtual void show_stats();

        virtual string get_name();

        virtual int get_health();

        virtual int get_max_health();

        virtual int get_attack();

        virtual void take_damage(int damage);

        virtual bool is_alive();

    protected:
       string name;
       int health, max_health;
       int attack;
};

#endif