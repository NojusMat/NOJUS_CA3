//
// Created by wwwno on 27/03/2023.
//

#ifndef NOJUS_CA3_BUG_H
#define NOJUS_CA3_BUG_H
#include <string>
#include <iostream>


class Bug
        {
        private:

    int id;
    std::pair<int, int> position;
    int direction;
    int size;
    bool alive;
//    list<pair<int,int>> path;
//    virtual move() {}
    bool isWayBlocked() {}

public:
    Bug(int id, int direction, int size,bool alive,bool isWayBlocked);
    Bug();	// default, no-argument constructor


    Bug(const Bug& source);// COPY CONSTRUCTOR

    ~Bug() ;        // DESTRUCTOR

};



#endif //NOJUS_CA3_BUG_H
