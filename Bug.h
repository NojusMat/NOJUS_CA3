//
// Created by wwwno on 27/03/2023.
//

#ifndef NOJUS_CA3_BUG_H
#define NOJUS_CA3_BUG_H
#include <utility>
#include <list>

enum class Direction{North,East,South,West};

class Bug{
    public:
    Bug(int id,std::pair<int, int> position,Direction direction,int size);

    virtual ~Bug() =default;       // DESTRUCTOR
    virtual void move()=0;

    int getid();
    std::pair<int, int> getposition();
    Direction getdirection();
    int getsize();
    bool getalive();
};



#endif //NOJUS_CA3_BUG_H
