//
// Created by wwwno on 27/03/2023.
//

#ifndef NOJUS_CA3_CRAWLER_H
#define NOJUS_CA3_CRAWLER_H

#include "Bug.h"

class Crawler: public Bug{// public inheritance
public:
    Crawler(int id,std::pair<int, int> position,Direction direction,int size);

    void move()override;



    ~Crawler();
};


#endif //NOJUS_CA3_CRAWLER_H
