#include "Vehicle.h"

void Vehicle::addDistance(unsigned int distance)
{
    this->distance+=distance;
}

int Vehicle::getDistance()
{
    return this->distance;
}