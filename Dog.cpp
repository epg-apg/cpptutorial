#include <iostream>

#include "Dog.h"

// constructor initialization list
Dog::Dog()
    : happy(false)
    , age(0) 
{
}

// constructor initialization list
Dog::Dog(bool newHappy, int newAge)
    : happy(newHappy)
    , age(newAge)
{
}

Dog::~Dog()
{
}

void Dog::makeHappy()
{
    happy = true;
}

void Dog::makeSad()
{
    happy = false;
}