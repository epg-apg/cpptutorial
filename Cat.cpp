#include <iostream>

#include "Cat.h"

Cat::Cat()
{
    std::cout << "Cat created..." << std::endl;
    happy = false;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed..." << std::endl;
}

void Cat::speak()
{
    if (happy == true)
    {
        std::cout << "Speak happy" << std::endl;
    }
    else
    {
        std::cout << "Speak unhappy" << std::endl;
    }
}

void Cat::jump()
{
    std::cout << "Jump" << std::endl;
}

void Cat::makeHappy()
{
    happy = true;
}

void Cat::makeSad()
{
    happy = false;
}