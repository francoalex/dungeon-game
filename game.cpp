#include "game.h"
#include "player.h"
#include "enemy.h"

game::game(){
    init_game();
}

void game::init_game(){
    cout << "+--------------------------+" << '\n';
    cout << "| Welcome to Dungeon Game  |" << '\n';
    cout << "| 1. New Game 2. Load File |" << '\n';
    cout << "| 3. Credits  4. Quit      |" << '\n';
    cout << "+--------------------------+" << '\n';

    int input;
    cin >> input;

    switch(input){
        case 1:
        {
            player p1;
            p1.new_file();
            p1.show_stats();
            break;
        }
        case 2:
        {
            cout << "Working on it" << '\n';
            break;
        }
        case 3:
        {
            cout << "Game made by me." << '\n';
            init_game();
            break;
        }
        case 4:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Enter input 1-4." << '\n';
            init_game();
            break;
        }
    }   
}          