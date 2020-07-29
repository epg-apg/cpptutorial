#ifndef TEST_H_
#define TEST_H_
#include <iostream>
#include "Test.h"

class Test
{
private:
    static int hiddenVar;
    int id;

public:
    static int count; // shared with the whole class (not the object!)
    static int const MAX = 99;

public:
    Test();
    ~Test();
    static void showHidden();
    int getId() { return this->id; }
};

#endif