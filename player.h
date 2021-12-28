#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class player : public entity{
    public:
        player();

        void new_file();

        void save_file();

        void show_file();

        void load_file();

        int get_exp();

        int get_max_exp();

        void gain_exp();

        void death();

    protected:
        int exp, max_exp;
};

#endif