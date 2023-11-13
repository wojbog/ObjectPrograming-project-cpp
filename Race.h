#ifndef RACE_H
#define RACE_H
#include<iostream>
#include<vector>
#include <time.h>
#include <algorithm>

#include "./carriges/Basic.h"
#include "./carriges/Premium.h"
#include "./cars/Honda.h"
#include "./cars/Jaguar.h"
#include "./cars/Kia.h"

template <class T>
class Race {
    unsigned int NumberOfVehicles;
    std::vector<T*> CollectionOfVehicles;

    public:
        Race(unsigned int);
        ~Race();
        void operator+=(Vehicle *);
        void operator-=(Vehicle *);
        void printVehicles();
        void Run();

};

template <class T> Race<T>::Race(unsigned int NumberOfVehicles) {

  this->NumberOfVehicles = NumberOfVehicles;
  srand(time(NULL));

  for (int i = 0; i < NumberOfVehicles; ++i) {
    int number = rand() % 5;
    Vehicle *v;
    std::string name = "id_";
    std::string id = std::to_string(i);
    name+=id;
    switch (number) {
    case 0:
      v = new Basic(name, 0, 2);
      break;
    case 1:
      v = new Premium(name, 0, 6);
      break;
    case 2:
      v = new Honda(name, 0, "disel", false);
      break;
    case 3:
      v = new Jaguar(name, 0, "disel", false);
      break;
    case 4:
      v = new Kia(name, 0, "disel", false);
      break;
    default:
      v = nullptr;
    }

    if (v == nullptr) {
      i--;
      continue;
    }

    *this += v;
  }
}

template <class T> Race<T>::~Race()
{
  NumberOfVehicles = 0;
  CollectionOfVehicles.erase(CollectionOfVehicles.begin(),CollectionOfVehicles.end());
}

template <class T> void Race<T>::operator+=(Vehicle *vehicle) {
  CollectionOfVehicles.push_back(vehicle);
}

template <class T> void Race<T>::operator-=(Vehicle *veh) {

  typename std::vector<T *>::iterator it =
      std::find(CollectionOfVehicles.begin(), CollectionOfVehicles.end(), veh);
  if (it != CollectionOfVehicles.end())
    CollectionOfVehicles.erase(it);

  delete veh;
}


template <class T> void Race<T>::printVehicles() {
  for (typename std::vector<T *>::iterator it = CollectionOfVehicles.begin();
       it != CollectionOfVehicles.end(); ++it) {
        (*it)->toString();
  }
}

template <class T> void Race<T>::Run(){
  srand(time(NULL));
  int iteration = rand() % 100 + 1;

  int distance =0;

  for(int i=0;i<iteration;++i){
    for (typename std::vector<T *>::iterator it = CollectionOfVehicles.begin();
       it != CollectionOfVehicles.end(); ++it) {
          distance = rand() % 100 + 1;
        (*it)->addDistance(distance);
  }
  }

  auto compare=[](Vehicle* lhs,  Vehicle* rhs)->bool
  {
    return lhs->getDistance() > rhs->getDistance();
  };

  std::sort(CollectionOfVehicles.begin(),CollectionOfVehicles.end(),compare);


}



#endif