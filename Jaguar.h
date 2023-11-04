#include<iostream>
#include "Car.h"

class Jaguar : public Car{
    public:
        Jaguar(std::string name, int distance, std::string engine, bool trunk);
        void toString();
};