#ifndef HONDA_H
#define HONDA_H
#include<iostream>
#include "Car.h"

class Honda : public Car{
    public:
        Honda(std::string,unsigned int, std::string, bool);
        void toString();
};

#endif