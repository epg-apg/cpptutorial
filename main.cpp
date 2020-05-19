#include <iostream>

int main()
{
    std::string stringArray[] = { "one", "two", "three" };

    std::cout << "Array size: " << sizeof(stringArray) / sizeof(std::string) << std::endl;

    for (int i = 0; i < sizeof(stringArray) / sizeof(std::string); ++i)
    {
        std::cout << "String [" << i << "] " << stringArray[i] << std::endl;
    }

    std::string *pText = stringArray; // works, set to first entry
    std::cout << "pText: " << *pText << std::endl;

    for (int i = 0; i < sizeof(stringArray) / sizeof(std::string); ++i)
    {
        std::cout << "String [" << i << "] " << pText[i] << std::endl;
    }

    pText = stringArray; // set to first entry
    for (int i = 0; i < sizeof(stringArray) / sizeof(std::string); ++i)
    {
        std::cout << "String [" << i << "] " << *pText << std::endl;
        pText = pText + 1;
    }

    pText = stringArray; // set to first entry
    for (int i = 0; i < sizeof(stringArray) / sizeof(std::string); ++i, pText++)
    {
        std::cout << "String [" << i << "] " << *pText << std::endl;
    }

    std::string *pBeginPtr = stringArray; // same as std::string *pBeginPtr = &stringArray[0];
    std::string *pEndPtr   = &stringArray[2];

    while (true)
    {
        std::cout << *pBeginPtr << " " << std::flush;

        if (pBeginPtr == pEndPtr)
            break;
            
        pBeginPtr++;
    }

    return 0;
}