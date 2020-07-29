#include <iostream>
#include "Machine.h"

Machine::Machine(): id(0)
{
    std::cout << "Machine created" << std::endl;
}

Machine::Machine(int id): id(id)
{
    std::cout << "Machine created with ID" << std::endl;
}

Machine::~Machine()
{
    
}

void Machine::info() 
{
    std::cout << "Machine ID: " << this->id << std::endl;
}
