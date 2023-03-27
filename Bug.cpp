//
// Created by wwwno on 27/03/2023.
//

#include "Bug.h"
#include <iostream>
#include <string>

using namespace std;

Bug::Bug(int id,std::pair<int, int> position,Direction direction,int size)
{
    this ->id=id;
    this ->position=position;
    this ->direction=direction;
    this ->size=size;
}

int Bug::getID() const {
    return id;
}

void Bug::setID(int id_bug){
     id=id_bug;
}


std::pair<int, int> Bug::getPosition() const {
    return position;
}

void Bug::setPosition(const std::pair<int, int> position_bug) {
    position=position_bug;
}



Direction Bug::getDirection() const {
    return direction;
}

void Bug::setDirection(Direction direction_bug) {
    direction=direction_bug;
}


int Bug::getSize() const {
    return size;
}
void Bug::setSize(int size_bug) {
    size=size_bug;
}


bool Bug::getAlive() const {
    return alive;
}

void Bug::setAlive(bool alive_bug) {
    alive=alive_bug;
}






