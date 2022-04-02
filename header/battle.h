#include "player.h"
#include "enemy.h"

#include <string>

using namespace std;

class battle{
    public:
        battle();

        void show_ui(int player_exp, int player_max_exp,
                     int player_hp,  int player_max_hp,
                     int enemy_hp,   int enemy_max_hp,
                     string player_name, string enemy_name);

        void do_damage(player &p1, enemy &e1);

    protected:
};