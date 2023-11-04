#include<iostream>
#include "Car.h"

class Kia : public Car{
    public:
        Kia(std::string name, int distance, std::string engine, bool trunk);
        void toString();
};