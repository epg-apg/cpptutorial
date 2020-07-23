
#include "Animal.h"

Animal::Animal()
{
}

Animal::~Animal()
{
}

void Animal::speak() const
{
    std::cout << "My name is " << this->name << std::endl;
}