#include <iostream>

void loop(int length)
{
    std::cout << "Progress: ";

    for (int i = 0; i < length; ++i)
    {
        if(i % 100 == 0)
            std::cout << ".";
    }

    std::cout << std::endl;
}

void splitSeconds(int seconds)
{
    // first solution
    int hours = seconds / (60 * 60);
    int mins  = (seconds - (hours * 60 * 60)) / 60;
    int secs  = (seconds - (hours * 60 * 60) - (mins * 60));

    std::cout << "Result: " << hours << ":" << mins << ":" << secs << std::endl;
    std::cout << "Checksum: " << seconds << "=" << secs + mins * 60 + hours * 60 * 60 << std::endl;

    // second solution
    hours = seconds / (60 * 60);
    mins  = (seconds % (60 * 60)) / 60;
    //mins  = (seconds / 60 ) % 60; // from forum
    secs  = seconds % 60;

    std::cout << "Result: " << hours << ":" << mins << ":" << secs << std::endl;
    std::cout << "Checksum: " << seconds << "=" << secs + mins * 60 + hours * 60 * 60 << std::endl;
}

int main()
{
    double value1 = 7 / 2; // division from two integers
    std::cout << "Result 1: " << value1 << std::endl;

    double value2 = 7.0 / 2; // at least one double, floating point division
    std::cout << "Result 2: " << value2 << std::endl;

    double value3 = (double)7 / 2; // cast
    std::cout << "Result 3: " << value3 << std::endl;

    std::cout << "----" << std::endl;

    int value4 = 8;
    value4 += 1; // value4 = value4 + 1; or value4++;
    std::cout << "Result 4: " << value4 << std::endl;

    int value5 = 10;
    value5 /= 5; // value5 = value5 / 5;
    std::cout << "Result 5: " << value5 << std::endl;

    int value6 = 12 % 5;
    std::cout << "Result 6: " << value6 << std::endl;

    std::cout << "----" << std::endl;

    splitSeconds(7412);
    splitSeconds(45647);
    splitSeconds(58979);
    splitSeconds(123045);

    std::cout << "----" << std::endl;

    loop(200);
    loop(10000);

    return 0;
}