#include "Basic.h"

Basic::Basic(std::string name,unsigned int distance,unsigned int numberOfPeople)
{
    this->name = name;
    this->distance = distance;
    if (numberOfPeople<=4)
    {
    this->numberOfPeople = numberOfPeople;

    }else {
        throw std::string(
            "Basic carrige must have max 4 people"
        );
    }
}

void Basic::addPeople(unsigned int people){
    if (this->numberOfPeople + people <= 4)
    {
        this->numberOfPeople+=people;
    }else {
        throw std::string(
            "too many people in basic carrige"
        );
    }
}

void Basic::toString(){
    std::cout<<"Basic carrige with name: "<<name<<" and distance: "<<distance<<"\n";
}