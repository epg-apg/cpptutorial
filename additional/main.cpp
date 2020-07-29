#include <iostream>
#include "Test.h"

int main()
{
    char value = 127;
    std::cout << (int)value << std::endl;

    value++; // -128
    std::cout << (int)value << std::endl;

    /*
     * Example how it could be done, but is in fact not done:
     * 
     * 3-bit system:
     *  biggest value: 111 = 7 = 2^3 -1 
     * 
     * 8-bit system:
     *  111111111 = 2^8 -1 = 255 (unsigned)
     * 
     * 8-bit signed:
     *  1xxxxxxx = negative
     *  0xxxxxxx = positive
     *  max: 2^7 -1 = 127 positive
     * 
     * ------------------------
     * 3-bit signed:
     * 
     * 000 = 0
     * 001 = 1
     * 010 = 2
     * 011 = 3
     * 100 = -0
     * 101 = -1
     * 110 = -2
     * 111 = -3
     * 
     * one complement (better for calculations, with overflow bit)
     * 
     * 000 = 0
     * 001 = 1
     * 010 = 2
     * 011 = 3
     * 100 = -3
     * 101 = -2
     * 110 = -1
     * 111 = -0
     * 
     * two's complment
     * 
     * 000 = 0
     * 001 = 1
     * 010 = 2
     * 011 = 3
     * 100 = -4
     * 101 = -3
     * 110 = -2
     * 111 = -1
     * 
     *  010 (2) +
     *  110 (-2) =
     * 1000 = discard overflow bit = 000 = 0
     * 
     *  010 (2) +
     *  101 (-3) =
     *  111 = -1
     * 
     */

    std::cout << "Test: " << Test::count << std::endl;
    Test::showHidden();
    std::cout << "Max: " << Test::MAX << std::endl;

    Test t1;
    std::cout << "ID t1: " << t1.getId() << std::endl;
    Test t2;
    std::cout << "ID t2: " << t2.getId() << std::endl;

    std::cout << "Test: " << Test::count << std::endl;

    return 0;
}