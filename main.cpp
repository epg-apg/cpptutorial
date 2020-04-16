#include <iostream>

#include "Cat.h"

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

    std::cout << "End program" << std::endl;

    return 0;
}