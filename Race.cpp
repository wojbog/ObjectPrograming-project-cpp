#include "Race.h"
#include "./carriges/Basic.h"
#include "./carriges/Premium.h"
#include "./cars/Honda.h"
#include "./cars/Jaguar.h"
#include "./cars/Kia.h"
#include "Vehicle.h"
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <algorithm>

template <> void Race<Vehicle>::operator+=(Vehicle *vehicle) {
  CollectionOfVehicles.push_back(vehicle);
}
template <class T> Race<T>::Race(unsigned int NumberOfVehicles) {

  this->NumberOfVehicles = NumberOfVehicles;
  srand(time(NULL));

  for (int i = 0; i < NumberOfVehicles; ++i) {
    int number = rand() % 5;
    Vehicle *v;
    switch (number) {
    case 0:
      v = new Basic("Basic", 0, 2);
      break;
    case 1:
      v = new Premium("Premium", 0, 6);
      break;
    case 2:
      v = new Honda("Honda", 0, "disel", false);
      break;
    case 3:
      v = new Jaguar("Jaguar", 0, "disel", false);
      break;
    case 4:
      v = new Kia("Kia", 0, "disel", false);
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

template Race<Vehicle>::Race(unsigned int);
template void Race<Vehicle>::printVehicles();



template <> void Race<Vehicle>::operator-=(Vehicle *veh) {

  typename std::vector<Vehicle *>::iterator it =
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

template <> void Race<Vehicle>::Run(){
  srand(time(NULL));
  int iteration = rand() % 100 + 1;

  int distance =0;

  for(int i=0;i<iteration;++i){
    for (typename std::vector<Vehicle *>::iterator it = CollectionOfVehicles.begin();
       it != CollectionOfVehicles.end(); ++it) {
          distance = rand() % 100 + 1;
        (*it)->addDistance(distance);
  }
  }

  auto compare=[](Vehicle* lhs,  Vehicle* rhs)->bool
  {
    return lhs->getDistance() < rhs->getDistance();
  };

  std::sort(CollectionOfVehicles.begin(),CollectionOfVehicles.end(),compare);


}
