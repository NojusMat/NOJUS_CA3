//
// Created by wwwno on 27/03/2023.
//

#include "Hopper.h"
#include <iostream>

Hopper::Hopper(int id,std::pair<int, int> position,Direction direction,int size,int hopLength): Bug(id,position,direction,size)
{
    this->hopLength=hopLength;
}

int Hopper::getHopLength() const {
    return hopLength;
}

void Hopper::setHopLength(int hopLength_bug) {
    hopLength=hopLength_bug;
}


void Hopper::move() // overriding bug move to crawlers move
{

}
Hopper::~Hopper()   // destructor
{
}