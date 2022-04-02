#include "player.h"

const int ROWS = 20;
const int COLS = 20;

class game {
    public:
        game();

        void init_game(player &p1);

        void game_intro();

        void init_map();

        void draw_map();

    private:
        char map[ROWS][COLS];
};