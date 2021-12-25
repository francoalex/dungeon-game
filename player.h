#include "entity.h"

#include <vector>

class player : public entity{
    public:
        player();

        void show_stats();

        void new_file();

        void save_file();

        void show_file();

        void load_file();

    protected:
        string name;
};