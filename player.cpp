#include "player.h"

#include <iostream>
using namespace std;

player::player(){
    cout << "Created player" << endl;
    this->health = 10;
    this->attack = 1;       
}