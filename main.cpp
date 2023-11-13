#include<iostream>
#include "./cars/Jaguar.h"
// #include "./carriges/Premium.h"
#include "Race.h"
#include "Vehicle.h"




using namespace std;

int32_t main()
{
    Vehicle * veh = new Jaguar("stefan",0,"elektryk",false);
    // veh->toString();
    // veh->addDistance(5);
    // veh->toString();

    // Vehicle * car = new Premium("premium andrzej", 0, 5);

    // car->toString();


    Race<Vehicle> race(10);
    race.printVehicles();
    race+=veh;
    race.Run();
    std::cout<<"------------------\n";
    race.printVehicles();
    race-=veh;
    std::cout<<"------------------\n";
    race.printVehicles();


    
}