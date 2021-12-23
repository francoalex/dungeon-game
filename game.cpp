#include "game.h"
#include "player.h"
#include "enemy.h"

game::game(){
    player p1;
    p1.show_stats();

    enemy e1;
    e1.show_stats();
}