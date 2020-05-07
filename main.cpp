#include <iostream>
#include <sstream>

#include "Cat.h"
#include "Person.h"

void stringstreams();

int main()
{
    Cat bob;
    bob.makeSad();
    bob.speak();
    bob.jump();
    
    Cat jim;
    jim.makeHappy();
    jim.speak();
    jim.jump();

    { //scope example
        Cat tom;
        tom.speak();
    }

    Person george;
    std::cout << george.toString() << std::endl;
    george.setName("Mike");
    std::cout << george.toString() << std::endl;

    Person hans("Hans");
    std::cout << hans.toString() << std::endl;

    Person sue("Sue", 47);
    std::cout << sue.toString() << std::endl;

    stringstreams();

    std::cout << "End program" << std::endl;

    return 0;
}

void stringstreams()
{
    std::string name = "Bob";
    int age = 32;

    std::stringstream info;
    info << "Name: ";
    info << name;
    info << "; age: " << "asd";
    info << age;
    std::cout << info.str() << std::endl;

}