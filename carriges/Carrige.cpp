#include "Carrige.h"

void Carrige::addPeople(unsigned int number){
    this->numberOfPeople+=number;
}

void Carrige::removePeople(unsigned int number){
    if (number <= this->numberOfPeople){
        this->numberOfPeople-=number;
    }
    else{
        throw std::string(
            "NumberOfPeople must be positive"
        );
    }
}

int Carrige::getNumberOfPeople(){
    return this->numberOfPeople;
}