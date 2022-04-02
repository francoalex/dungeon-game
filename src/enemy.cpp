#include "../header/enemy.h"

enemy::enemy(){
    cout << "Created enemy" << "\n";
    this->name = "Skeleton";
    this->health = 5;
    this->max_health = 10;
    this->attack = 1;      
}