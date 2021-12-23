#include "entity.h"

#include <iostream>

using namespace std;

void entity::show_stats(){
    cout << "health: " << this->health << '\n';
    cout << "attack: " << this->attack << '\n';

}