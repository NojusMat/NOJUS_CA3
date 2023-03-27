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
    Bug(int id,std::pair<int, int> position,Direction direction,int size); //Constructor

    virtual void move()=0;
    virtual ~Bug() =default;       // DESTRUCTOR


    int getid()const;                            // getting info for bug
    std::pair<int, int> getPosition()const;
    Direction getDirection()const;
    int getSize()const;
    bool getAlive()const;
    bool isWayBlocked()const;

    void setPosition(const std::pair<int, int> getposition);   //setting info for bug
    void setDirection(Direction direction);
    void setSize(int size);
    void setAlive(bool alive);
    void setPath( const std::list<std::pair<int,int>> pathconst);


    private:
    int id;
    std::pair<int, int> position;
    Direction direction;
    int size;
    bool alive;
    std::list<std::pair<int,int>> path;

};



#endif //NOJUS_CA3_BUG_H
