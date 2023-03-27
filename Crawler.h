//
// Created by wwwno on 27/03/2023.
//

#ifndef NOJUS_CA3_CRAWLER_H
#define NOJUS_CA3_CRAWLER_H

#include "Bug.h"

class Crawler: public Bug{
private:


    int id;
    int x, y;
//    pair<int, int> position;
    int direction;
    int size;
    bool alive;
//    list<pair<int,int>> path;
//    virtual move() {}
    bool isWayBlocked() {}
    void move(){}
};


#endif //NOJUS_CA3_CRAWLER_H
