#include "Honda.h"

Honda::Honda(std::string name,unsigned int distance, std::string engine, bool trunk)
{
    this->name = name;
    this->distance = distance;
    this->engine = engine;
    this->trunk = trunk;
}

void Honda::toString(){
    std::cout<<"Honda with name: "<<name<<"and distance: "<<distance<<"\n";
}