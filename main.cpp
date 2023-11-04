#include<iostream>
#include "Jaguar.h"


using namespace std;

int32_t main()
{
    Vehicle * veh = new Jaguar("stefan",0,"elektryk",false);
    veh->toString();
    veh->addDistance(5);
    veh->toString();

}