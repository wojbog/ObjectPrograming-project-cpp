#include<iostream>
#include "./cars/Jaguar.h"
#include "./carriges/Premium.h"



using namespace std;

int32_t main()
{
    Vehicle * veh = new Jaguar("stefan",0,"elektryk",false);
    veh->toString();
    veh->addDistance(5);
    veh->toString();

    Vehicle * car = new Premium("premium andrzej", 0, 5);

    car->toString();
}