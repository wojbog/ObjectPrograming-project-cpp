#include "Race.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

int32_t main() {
  unsigned int NumberOfVehicles;
  std::cout << "Give number of vehicles: ";
  std::cin >> NumberOfVehicles;

  std::cout << "\n";

  Race<Vehicle> race(NumberOfVehicles);
  race.Run();
  race.printVehicles();
}