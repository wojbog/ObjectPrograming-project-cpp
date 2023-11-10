#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>


class Vehicle {
    protected:
        std::string name;
        unsigned int distance = 0;
    public:
        virtual ~Vehicle()=default;
        virtual void toString() = 0;
        void addDistance(unsigned int distance);
        int getDistance();
};

#endif