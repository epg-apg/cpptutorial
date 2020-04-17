#include <iostream>

#include "Cat.h"
#include "Person.h"

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

    std::cout << "End program" << std::endl;

    return 0;
}