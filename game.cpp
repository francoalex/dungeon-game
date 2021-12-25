#include "game.h"
#include "player.h"
#include "enemy.h"

#include <stdlib.h>

game::game(){
    init_game();
}

void game::init_game(){
    cout << "+--------------------------+" << "\n";
    cout << "| Welcome to Dungeon Game  |" << "\n";
    cout << "| 1. New Game 2. Load File |" << "\n";
    cout << "| 3. Credits  4. Quit      |" << "\n";
    cout << "+--------------------------+" << "\n";

    int input;
    cin >> input;

    //Clears console
    system("clear");
    //For windows
    //system("cls");

    player p1;
    switch(input){
        case 1:
        {
            p1.new_file();
            p1.save_file();
            break;
        }
        case 2:
        {
            p1.show_file();
            p1.load_file();
            //p1.show_stats();
            break;
        }
        case 3:
        {
            cout << "Game made by me." << "\n";
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
            cout << "Enter input 1-4." << "\n";
            init_game();
            break;
        }
    }   
}          