#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
#include "Machine.h"

class Vehicle: public Machine
{
public:
    Vehicle();
    Vehicle(int id);
    ~Vehicle();

private:
    std::string name;
    
};

#endif