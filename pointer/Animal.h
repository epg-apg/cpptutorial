#include <iostream>

class Animal
{
public:
    Animal();
    Animal(const Animal& other); 
    ~Animal();
    void setName(std::string name) { this->name = name; }
    void speak() const;

private:
    std::string name;
    
};
