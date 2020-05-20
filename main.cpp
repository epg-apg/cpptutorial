#include <iostream>

int main()
{
    const int ELEMENTS          = 5;
    std::string texts[ELEMENTS] = { "one", "two", "three", "four", "five" };

    std::string *pText = texts;

    std::cout << "1: " << *pText << std::endl;
    pText += 3;
    std::cout << "2: " << *pText << std::endl;
    pText -= 1;
    std::cout << "3: " << *pText << std::endl;

    std::string *pEnd = &texts[ELEMENTS - 1];
    std::cout << "4: " << *pEnd << std::endl;

    pText = &texts[0];
    // used for "end of array", but should not be used for anything else, invalid memory area!!!
    std::string *pInvalidEnd = &texts[ELEMENTS];

    while (pText != pInvalidEnd)
    {
        std::cout << "Loop: " << *pText << std::endl;
        pText++;
    }

    // number of array items, pointer arithmetic. take last pointer and first pointer and you know
    // how many are there
    pText        = &texts[0];
    long entries = (long)(pInvalidEnd - pText);
    std::cout << "Entries: " << entries << std::endl;

    // pointer arithmetic for middle of array
    pText = &texts[0];
    pText += ELEMENTS / 2;
    std::cout << "Middle: " << *pText << std::endl;

    return 0;
}