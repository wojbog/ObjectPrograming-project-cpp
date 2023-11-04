#include<iostream>
#include "Car.h"

class Honda : public Car{
    public:
        Honda(std::string name, int distance, std::string engine, bool trunk);
        void toString();
};