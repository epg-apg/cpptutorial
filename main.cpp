#include <iostream>

void changeSomething(double &value)
{
    value = 123.4;
}

int main()
{
    int value1 = 8;
    // reference variable, value2 is a reference to value1 (aka other name to value1, synonym/alias)
    int &value2 = value1;
    value2      = 10;

    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;

    // reference for parameter
    double value3 = 4.321;
    changeSomething(value3);
    std::cout << "Value 3: " << value3 << std::endl;

    return 0;
}