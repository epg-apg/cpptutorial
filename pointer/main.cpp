#include <iostream>
#include "Animal.h"

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

    // const keyword
    const double PI = 3.141592;
    std::cout << "Pi: " << PI << std::endl;

    Animal cat;
    cat.setName("Bob");
    cat.speak();

    int iValue1 = 8;
    int iValue2 = 11;
    int *pValue = &iValue1;

    // read type backwards: const int * -> pointer to an integer which is constant
    // ! const int *pValue = &iValue1; // pointer to an constant integer
    // ! int * const pValue = &iValue1; // constant pointer to an integer
    // ! const int * const pValue = &iValue1; // constant pointer to an constant integer
    pValue = &iValue2; // error with this: "int * const pValue = &iValue;""  

    *pValue = 12; // error with this: "const int *pValue = &iValue;""  

    std::cout << "Pointer value: " << *pValue << std::endl;

    // copy constructor
    Animal animal1;
    animal1.setName("Freddy");

    Animal animal2 = animal1;
    animal2.speak();
    animal2.setName("Tom");

    animal1.speak();
    animal2.speak();

    Animal animal3(animal1);
    animal3.speak();

    // the new operator
    Animal *pCat = new Animal(); // allocated memory ! delete must be used !!!!!!
    (*pCat).setName("Sue"); // also works
    pCat->speak();

    delete pCat; // deallocate
    std::cout << sizeof(pCat) << std::endl;

    std::cout << "Close... " << std::endl;
    return 0;
}