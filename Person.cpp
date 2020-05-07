#include <iostream>
#include <sstream>

#include "Person.h"

Person::Person()
{
    std::cout << "Person created..." << std::endl;
    name = "George";
    age  = 0;
}

Person::Person(std::string newName)
{
    name = newName;
    age  = 0;
}

Person::Person(std::string newName, int newAge)
{
    name = newName;
    age  = newAge;
}

Person::~Person()
{
    std::cout << "Person destroyed..." << std::endl;
}

std::string Person::toString()
{
    std::stringstream temp;
    temp << "My name is " << name << ". Age: " << age;

    return temp.str();
}

void Person::setName(std::string newName)
{
    name = newName;
}

std::string Person::getName()
{
    return name;
}