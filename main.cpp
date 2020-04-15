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

    return 0;
}