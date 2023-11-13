#include "Jaguar.h"

Jaguar::Jaguar(std::string name,unsigned int distance, std::string engine, bool trunk)
{
    this->name = name;
    this->distance = distance;
    this->engine = engine;
    this->trunk = trunk;
}

void Jaguar::toString(){
    std::cout<<"Jaguar car with name: "<<name<<" and distance: "<<distance<<"\n";
}