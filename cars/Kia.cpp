#include "Kia.h"

Kia::Kia(std::string name,unsigned int distance, std::string engine, bool trunk)
{
    this->name = name;
    this->distance = distance;
    this->engine = engine;
    this->trunk = trunk;
}

void Kia::toString(){
    std::cout<<"Kia with name: "<<name<<"and distance: "<<distance<<"\n";
}