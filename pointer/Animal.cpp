#include <iostream>
#include "Animal.h"

Animal::Animal()
{
    std::cout << "Animal created" << std::endl;
}

// even if private, because of same class we can access
Animal::Animal(const Animal& other): name(other.name)
{
    std::cout << "Animal copied" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

void Animal::speak() const
{
    std::cout << "My name is " << this->name << std::endl;
}