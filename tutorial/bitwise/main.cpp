#include <iostream>

int main()
{
    //                     RRGGBBaa (a=alpha)
    int colorwithAlpha = 0x12345678;

    // color : 000100100011010001010110
    // mask  : 111111110000000000000000
    // result: 000100100000000000000000

    int color = 0x123456;
    int red = color & 0xFF0000; // apply mask
    std::cout << std::hex << red << std::endl;

    red = red >> 16; // bitshifting 16 bits
    std::cout << std::hex << red << std::endl;

    int green = (color & 0x00FF00) >> 8;
    int blue = (color & 0x0000FF);

    std::cout << std::hex << green << std::endl;
    std::cout << std::hex << blue << std::endl;

    return 0;
}