#include "entity.h"

void entity::show_stats(){
    cout << "Name: " << this->name << "\n";
    cout << "health: " << this->health << "\n";
    cout << "attack: " << this->attack << "\n";
}

string entity::get_name(){
    return this->name;
}

int entity::get_health(){
    return this->health;
}

 int entity::get_max_health(){
     return this->max_health;
 }

int entity::get_attack(){
    return this->attack;
}

void entity::take_damage(int damage){
    this->health -= damage;
}

bool entity::is_alive(){
    if(this->health > 0){
        return true;
    }
    return false;
}