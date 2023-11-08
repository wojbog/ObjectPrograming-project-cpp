#ifndef JAGUAR_H
#define JAGUAR_H
#include<iostream>
#include "Car.h"

class Jaguar : public Car{
    public:
        Jaguar(std::string,unsigned int, std::string, bool);
        void toString();
};

#endif