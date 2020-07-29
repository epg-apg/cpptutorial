#include <iostream>

#include "Animal.h"
#include "Cat.h"
#include "Tiger.h"

int main()
{
    Animal a;
    a.speak();

    Cat c;
    c.speak();
    c.jump();

    Tiger t;
    t.speak();
    t.jump();
    t.attack();

    return 0;
}