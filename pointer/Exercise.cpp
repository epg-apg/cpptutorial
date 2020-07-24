#include <iostream>

#include "Exercise.h"

Exercise::Exercise(/* args */)
{
}

Exercise::~Exercise()
{
}

void Exercise::setName(std::string newName) {
    this->name = newName;
}

void Exercise::output() const {
    std::cout << "Output: " << this->name << std::endl;;
}