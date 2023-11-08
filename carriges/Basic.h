#ifndef BASIC_H
#define BASIC_H
#include "Carrige.h"

class Basic : public Carrige {
    public:
        Basic(std::string,unsigned int,unsigned int);
        void addPeople(unsigned int);
        void toString();
};

#endif