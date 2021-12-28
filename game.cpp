#include "game.h"
#include "player.h"
#include "enemy.h"
#include "battle.h"

#include <stdlib.h>

game::game(){
    player p1;

    init_game(p1);
    game_intro();

    while(p1.is_alive()){
        enemy e1;
        battle b1;

        while(e1.is_alive()){
            b1.show_ui(p1.get_exp(), p1.get_max_exp(), 
                            p1.get_health(), p1.get_max_health(),
                            e1.get_health(), e1.get_max_health(),
                            p1.get_name(), e1.get_name());

            int battle_input;
            cin >> battle_input;

            switch(battle_input){
                case 1:
                {
                    b1.do_damage(p1, e1);
                    break;
                }
                case 2:
                {
                    cout << "Working on it" << "\n";
                    break;
                }
                case 3:
                {
                    break;
                }
                default:
                {
                    cout << "Enter 1-3" << "\n";
                    break;
                }
            }
                
            //b1.do_damage(p1, e1);

            if(!p1.is_alive()){
                p1.death();
                break;
            }

            system("clear");
        }

        p1.save_file();
        p1.gain_exp();
    }
}

void game::init_game(player& p1){
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
                init_game(p1);
            }
            break;
        }
        case 3:
        {
            cout << "Game made by me." << "\n";
            init_game(p1);
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
            init_game(p1);
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