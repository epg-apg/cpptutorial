#include <iostream>

int main()
{
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

    while(pStart < pEnd) {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        pStart++;
        pEnd--;
    }

    std::cout << "Swapped: " << text << std::endl;

    return 0;
}