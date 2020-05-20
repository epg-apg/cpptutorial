#include <iostream>

int main()
{
    std::string text = "hello";
    std::cout << text << std::endl;

    char chars1[] = { 'a', 'b', 'c', 'd', 'e', 0 }; // output is abcde³■a without the 0
    std::cout << chars1 << std::endl;

    char chars2[] = "qwertz"; // append 0 to string for null terminator, always when using "
    std::cout << chars2 << std::endl;

    for (int i = 0; i < sizeof(chars2); ++i) // last entry is null terminator 0
    {
        std::cout << i << ": " << chars2[i] << " - " << (int)chars2[i] << std::endl;
    }

    std::cout << "Loop: " << std::flush;

    int j = 0;
    while (true)
    {
        if (chars2[j] == 0) // end if null terminator is found
            break;

        std::cout << chars2[j] << std::flush;
        j++;
    }
    std::cout << std::endl;

    return 0;
}