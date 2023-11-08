#ifndef KIA_H
#define KIA_H
#include<iostream>
#include "Car.h"

class Kia : public Car{
    public:
        Kia(std::string,unsigned int, std::string, bool);
        void toString();
};

#endif