#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

class Animal
{
public:
    Animal();
    ~Animal();
    void setName(std::string name) { this->name = name; }
    void speak() const;

private:
    std::string name;
    
};

#endif