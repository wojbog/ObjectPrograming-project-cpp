#ifndef CARRIGE_H
#define CARRIGE_H
#include "./../Vehicle.h"


class Carrige:public Vehicle {

    protected:
        unsigned int numberOfPeople;
    
    public:
        void addPeople(unsigned int);
        void removePeople(unsigned int);
        int getNumberOfPeople();
};

#endif