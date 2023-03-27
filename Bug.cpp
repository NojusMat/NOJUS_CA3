//
// Created by wwwno on 27/03/2023.
//

#include "Bug.h"
#include <iostream>
#include <string>

using namespace std;

Bug::Bug(int id,int direction,int size,bool alive) {
    this->id = id;
    this->direction = direction;
    this->size = size;
    this->alive = alive;

}