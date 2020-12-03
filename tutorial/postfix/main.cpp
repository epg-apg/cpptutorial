#include <iostream>

int main()
{
    int value1 = 8;

    value1++; //postfix
    std::cout << "Postfix: " << value1 << std::endl;

    int value2 = 8;

    ++value2; //prefix
    std::cout << "Prefix: " << value2 << std::endl;

    // in expression
    std::cout << "Postfix: " << value1++ << std::endl; // used, then increment
    std::cout << "Prefix: " << ++value2 << std::endl; // increment, then use

    return 0;
}
