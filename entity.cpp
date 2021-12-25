#include "entity.h"

void entity::show_stats(){
    cout << "health: " << this->health << "\n";
    cout << "attack: " << this->attack << "\n";
}