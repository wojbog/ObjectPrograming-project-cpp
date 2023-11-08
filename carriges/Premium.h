#ifndef PREMIUM_H
#define PREMIUM_H
#include "Carrige.h"

class Premium : public Carrige {
    public:
        Premium(std::string,unsigned int,unsigned int);
        void removePeople(unsigned int);
        void toString();
};

#endif