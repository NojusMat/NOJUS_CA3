//
// Created by wwwno on 27/03/2023.
//

#ifndef NOJUS_CA3_HOPPER_H
#define NOJUS_CA3_HOPPER_H
#include "Bug.h"

class Hopper:public Bug {

private:
    int hopLength;
public:

    Hopper(int id,std::pair<int, int> position,Direction direction,int size,int hopLength);

    int getHopLength()const;
    void setHopLength(int hopLength_bug);

    void move()override;


    ~Hopper();

};


#endif //NOJUS_CA3_HOPPER_H
