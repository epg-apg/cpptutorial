#include <iostream>

#include "Animal.h"
#include "Cat.h"
#include "Tiger.h"
#include "Machine.h"
#include "Vehicle.h"

int main()
{
    // first
    Animal a;
    a.speak();

    Cat c;
    c.speak();
    c.jump();

    Tiger t;
    t.speak();
    t.jump();
    t.attack();

    // third
    Vehicle v1;
    v1.info();

    Vehicle v2(123);
    v2.info();

    return 0;
}