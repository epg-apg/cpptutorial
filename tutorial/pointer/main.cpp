#include <iostream>
#include "Animal.h"
#include "Exercise.h"

void changeSomething(double &value)
{
    value = 123.4;
}

Animal *createAnimal()
{
    Animal *a = new Animal();
    a->setName("Zack");

    return a;
}

void show1(std::string xParm[], int xSize)
{
    for (int i = 0; i < xSize; ++i)
    {
        std::cout << xParm[i] << std::endl;
    }
}

void show2(std::string *xParm, int xSize)
{
    for (int i = 0; i < xSize; ++i)
    {
        std::cout << xParm[i] << std::endl;
    }
}

void show3(std::string (&xParm)[3])
{
    for (unsigned int i = 0; i < sizeof(xParm)/sizeof(std::string); ++i)
    {
        std::cout << xParm[i] << std::endl;
    }
}

std::string *getArray() {
    // do not return local variables in pointer functions
    //std::string texts[] = { "one", "two", "three" };
    std::string *texts = new std::string[3];

    return texts;
}

void freeMemory(std::string *pointer) {
    delete[] pointer;
}

int main()
{
    std::cout << "----- reverse -----" << std::endl;
    char text[] = "hello";
    char reverse[sizeof(text)];

    // reverse[0]=text[4];
    // reverse[1]=text[3];
    // reverse[2]=text[2];
    // reverse[3]=text[1];
    // reverse[4]=text[0];

    for (unsigned int i = 0; i < (sizeof(text) - 1); ++i)
    {
        reverse[i] = text[sizeof(text) - 2 - i];
    }
    reverse[sizeof(reverse) - 1] = 0;

    std::cout << "Reverse: '" << reverse << "'; '" << text << "'" << std::endl;

    // solution from video with pointer
    int nChars   = sizeof(text) - 1;
    char *pStart = text;
    char *pEnd   = text + nChars - 1;

    std::cout << "Last letter: " << *pEnd << std::endl;

    while (pStart < pEnd)
    {
        char save = *pStart;
        *pStart   = *pEnd;
        *pEnd     = save;

        pStart++;
        pEnd--;
    }

    std::cout << "Swapped: " << text << std::endl;

    std::cout << "----- references -----" << std::endl;
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
    std::cout << "----- const keyword -----" << std::endl;
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
    std::cout << "----- copy constructor -----" << std::endl;
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
    std::cout << "----- new operator -----" << std::endl;
    Animal *pCat = new Animal(); // allocated memory ! delete must be used !!!!!!
    (*pCat).setName("Sue");      // also works
    pCat->speak();

    delete pCat; // deallocate
    std::cout << sizeof(pCat) << std::endl;

    // return object from function
    std::cout << "----- Object return -----" << std::endl;
    Animal *zack = createAnimal();
    zack->speak();
    delete zack;

    // memory allocation
    std::cout << "----- Memory allocation -----" << std::endl;
    Animal *animalArray = new Animal[10];
    animalArray[5].setName("Betty");
    animalArray[5].speak();
    delete[] animalArray;

    // exercise, 26 objects (array) with one character -> abcde...
    std::cout << "----- Exercise -----" << std::endl;
    Exercise *exerciseArray = new Exercise[26];
    for (int i = 0, c = 'a'; i < 26; ++i, ++c)
    {
        exerciseArray[i].setName(std::string(1, c));
        exerciseArray[i].output();
    }
    delete[] exerciseArray;

    // arrays and function
    std::cout << "----- Arrays and function -----" << std::endl;
    std::string texts[] = { "Apple", "Orange", "Banana" };
    show1(texts, 3);
    show2(texts, 3);
    show3(texts);

    std::string *myArrayVar = getArray();
    freeMemory(myArrayVar);

    std::cout << "Close... " << std::endl;
    return 0;
}