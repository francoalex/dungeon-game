#include "entity.h"

//#include 

class player : public entity{
    public:
        player();

        void show_stats();

        void new_file();

        void save_file();

    protected:
        string name;
};