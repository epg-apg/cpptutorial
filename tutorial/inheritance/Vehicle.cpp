#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle()
{
    std::cout << "Vehicle created" << std::endl;
}

Vehicle::Vehicle(int id): Machine(id)
{
    std::cout << "Vehicle created with ID" << std::endl;
}

Vehicle::~Vehicle()
{
    
}
