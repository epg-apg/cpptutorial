#include <iostream>

#include "Person.h"

Person::Person()
{
    std::cout << "Person created..." << std::endl;
    name = "George";
}

Person::~Person()
{
    std::cout << "Person destroyed..." << std::endl;
}

std::string Person::toString()
{
    return "My name is " + name;
}

void Person::setName(std::string newName) 
{
    name = newName;
}

std::string Person::getName()
{
    return name;
}