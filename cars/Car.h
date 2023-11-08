#ifndef car_H
#define car_H
#include<iostream>
#include "./../Vehicle.h"

class Car: public Vehicle{
    protected:
        std::string engine;
        bool trunk;
    public:
        void openTrunk();
        void closeTrunk();
};

#endif
