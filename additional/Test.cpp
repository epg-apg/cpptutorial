
#include <iostream>

#include "Test.h"

// otherwise undefined reference; need to allocate memory
int Test::count = 7;
int Test::hiddenVar = 2;

Test::Test()
{
    id = count++;
}

Test::~Test()
{
    
}

void Test::showHidden()
{
    std::cout << "Hidden: " << hiddenVar << std::endl;
}