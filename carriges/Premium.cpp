#include "Premium.h"

Premium::Premium(std::string name, unsigned int distance, unsigned int numberOfPeople)
{
    this->name = name;
    this->distance = distance;
    if (numberOfPeople>4)
    {
    this->numberOfPeople = numberOfPeople;

    }else {
        throw std::string(
            "Premium carrige must have min 4 people"
        );
    }
}

void Premium::removePeople(unsigned int numberOfPeople)
{
    if(this->numberOfPeople-numberOfPeople >4)
    {
        this->numberOfPeople-=numberOfPeople;
    }
    else{
        throw std::string(
            "In Premium carrige can not be less than 4 people"
        );
    }
}

void Premium::toString(){
    std::cout<<"Premium carrige with name: "<<name<<"and distance: "<<distance<<"\n";
}