#include "player.h"

#include <fstream>

player::player(){
    cout << "Created player" << endl;
    this->health = 10;
    this->attack = 1;       
}

void player::show_stats(){
    cout << this->name << "'s Stats: " << '\n';
    cout << "health: " << this->health << '\n';
    cout << "attack: " << this->attack << '\n';
}

void player::new_file(){
    cout << "Enter player name" << '\n';
    cin >> this->name;
}

void player::save_file(){
    //ofstream save_file()
}