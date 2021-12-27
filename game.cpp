#include "game.h"
#include "player.h"
#include "enemy.h"

#include <stdlib.h>

game::game(){
    init_game();
    game_intro();
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

            string input;
            cout << "Load file (y/n)?" << "\n";
            cin >> input;

            while(input != "y" && input != "n"){
                cout << "Load file (y/n)?" << "\n";
                cin >> input;
            }

            if(input == "y"){
                p1.load_file();
                p1.show_stats();
            }else{
                system("clear");
                init_game();
            }
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

void game::game_intro(){
    cout << "Once again, welcome to Dungeon Game."  << "\n";
    cout << "Here you will be able to move around"  << "\n";
    cout << "a map using WASD. You are represented" << "\n";
    cout << "as a 'T' while enemies are 'O'. Run"   << "\n";
    cout << "into one and a battle will commence."  << "\n";
    cout << "That is all for now, good luck!"       << "\n";
}

void game::draw_map(){
    
}