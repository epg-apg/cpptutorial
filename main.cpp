#include <iostream>

void manipulate(double value)
{
    std::cout << "(manipulate) Value, before: " << value << std::endl;
    value = 10;
    std::cout << "(manipulate) Value, after: " << value << std::endl;
}

void realmanipulate(double *value)
{
    std::cout << "(realmanipulate) Value, before: " << *value << std::endl;
    *value = 10;
    std::cout << "(realmanipulate) Value, after: " << *value << std::endl;
}

int main()
{
    int numberVal   = 8;
    int *pNumberVal = &numberVal;

    std::cout << "(main) Int value: " << numberVal << std::endl;
    std::cout << "(main) Int pointer: " << pNumberVal << std::endl;
    std::cout << "(main) Int value by pointer: " << *pNumberVal << std::endl;

    std::cout << "------" << std::endl;

    double dValue1 = 123.4;
    std::cout << "(main) Double value: " << dValue1 << std::endl;
    manipulate(dValue1); // manipulate cannot change value, because of call-by-value
    std::cout << "(main) Double value: " << dValue1 << std::endl;

    std::cout << "------" << std::endl;

    double dValue2 = 123.4;
    std::cout << "(main) Double value: " << dValue2 << std::endl;
    realmanipulate(&dValue2);
    std::cout << "(main) Double value: " << dValue2 << std::endl;

    return 0;
}