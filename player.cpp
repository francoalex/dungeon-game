#include "player.h"

#include <fstream>

player::player(){
    cout << "Created player" << "\n";
    this->health = 10;
    this->attack = 1;       
}

void player::show_stats(){
    cout << this->name << "'s Stats: " << "\n";
    cout << "health: " << this->health << "\n";
    cout << "attack: " << this->attack << "\n";
}

void player::new_file(){
    cout << "Enter player name" << "\n";
    cin >> this->name;
}

void player::save_file(){
    ofstream file("save_file.txt");
    if(file.is_open()){
        file << this->name << "\n";
        file << this->health << "\n";
        file << this->attack << "\n";
    } else {
        cout << "File open error" << "\n";
    }
}

void player::show_file(){
    cout << "Saved file:" << "\n";
    string content;
    ifstream file_content("save_file.txt");
    while(!file_content.fail() && !file_content.eof()){
        file_content >> content;
        cout << content << "\n";
    }
}

void player::load_file(){
    string info;
    ifstream file_info("save_file.txt");
    while(!file_info.fail() && !file_info.eof()){
        file_info >> this->name;
        file_info >> this->health;
        file_info >> this->attack;
        //cout << content << "\n";
    }
}