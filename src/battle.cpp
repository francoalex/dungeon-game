#include "../header/battle.h"

#include <iostream>
#include <iomanip>

battle::battle(){
    
}

void battle::show_ui(int player_exp, int player_max_exp,
                      int player_hp,  int player_max_hp,
                      int enemy_hp,   int enemy_max_hp,
                      string player_name, string enemy_name){

    int player_name_padding = 38 - player_name.length(); 
    int enemy_name_padding = 10 - enemy_name.length();
                    
    cout << "+--------------------------------------+" << "\n";
    cout << "|                             " << enemy_name << setw(enemy_name_padding) << " |" << "\n";
    cout << "|                               ___    |" << "\n";
    cout << "|                              (^_^)   |" << "\n";
    cout << "|                                      |" << "\n";
    cout << "|                            HP: " << enemy_hp <<  "/" << enemy_max_hp << " |" << "\n";
    cout << "| " << player_name << setw(player_name_padding) << "|" << "\n";
    cout << "|  ___                                 |" << "\n";
    cout << "| (0-0)                                |" << "\n";
    cout << "|                                      |" << "\n";
    cout << "| HP: " << player_hp << "/" << player_max_hp << "                            |" << "\n";
    cout << "|--------------------------------------|" << "\n";
    cout << "| 1. Attack 2. Bag                     |" << "\n";
    cout << "| 3. Run                               |" << "\n";
    cout << "| EXP:[----------] " << player_exp << "/" << player_max_exp << "               |" << "\n";
    cout << "+--------------------------------------+" << "\n";
}

void battle::do_damage(player &p1, enemy &e1){
    e1.take_damage(p1.get_attack());

    if(e1.get_health() <= 0){
        cout << "enemy dead" << "\n";
    }else{
        p1.take_damage(e1.get_attack());

        if(p1.get_health() <= 0){
            cout << "player dead" << "\n";
        }
    }

}