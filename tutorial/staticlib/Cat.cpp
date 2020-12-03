#include <iostream>

#include "Cat.h"

namespace mypgm
{

void saySomething()
{
    std::cout << "Hello!" << std::endl;
}

Cat::Cat()
{
}

Cat::~Cat()
{
}

void Cat::speak()
{
    std::cout << "Speak happy" << std::endl;
}
} // namespace mypgm