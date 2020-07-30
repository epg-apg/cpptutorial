#include <iostream>
#include <iomanip>

int main()
{
    // 0x123456FF

    unsigned char red   = 0x12;
    unsigned char green = 0x34;
    unsigned char blue  = 0x56;
    unsigned char alpha = 0xFF;

    unsigned int color = 0; // 0x00000000
    // color = color << 8; // same as color <<= 8   (8bit=1byte)

    color += red;   // 0x00000012
    color <<= 8;    // 0x00001200
    color += green; // 0x00001234
    color <<= 8;    // 0x00123400
    color += blue;  // 0x00123456
    color <<= 8;    // 0x12345600
    color += alpha; // 0x123456FF

    std::cout << "Size of int: " << sizeof(int) << ", Size of char: " << sizeof(char) << std::endl;
    std::cout << "Color: " << std::setfill('0') << std::setw(8) << std::hex << color << std::endl;

    return 0;
}