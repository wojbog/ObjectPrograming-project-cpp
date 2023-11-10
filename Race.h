#ifndef RACE_H
#define RACE_H
#include<iostream>
#include<vector>
#include "Vehicle.h"

template <class T>
class Race {
    unsigned int NumberOfVehicles;
    std::vector<T*> CollectionOfVehicles;

    public:
        Race(unsigned int);
        // ~Race();
        void operator+=(Vehicle *);
        void operator-=(Vehicle *);
        void printVehicles();
        void Run();

};


#endif