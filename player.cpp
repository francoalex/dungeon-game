#include "player.h"

#include <fstream>
#include <iomanip>

player::player(){
    //cout << "Created player" << "\n";
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
    ifstream file_content("save_file.txt");

    string name, health, attack;
    while(!file_content.fail() && !file_content.eof()){
        file_content >> name;
        file_content >> health;
        file_content >> attack;
    }

    int name_padding = 20 - name.length();
    int health_padding = 18 - health.length();
    int attack_padding = 18 - attack.length();

    cout << "+--------------------------+" << "\n";
    cout << "|        Save File         |" << "\n";
    cout << "| Name: "   << name   << setw(name_padding)   << "|" << "\n";
    cout << "| Health: " << health << setw(health_padding) << "|" << "\n";
    cout << "| Attack: " << attack << setw(attack_padding) << "|" << "\n";
    cout << "+--------------------------+" << "\n";
}

void player::load_file(){
    string input;
    cout << "Load file (y/n)?" << "\n";
    cin >> input;

    //TODO: add check to see if user wants to load file.

    string info;
    ifstream file_info("save_file.txt");
    while(!file_info.fail() && !file_info.eof()){
        file_info >> this->name;
        file_info >> this->health;
        file_info >> this->attack;
    }
}