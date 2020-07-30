#include <iostream>

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <math.h>
#include "Screen.h"

int main(int argc, char *argv[])
{
    mypgm::Screen screen;

    if (screen.init() == false)
    {
        return 1;
    }

    while (true)
    {
        int elapsed = SDL_GetTicks();

        // make milliseconds a bit smaller so sin returns a smoother transision -> * 0.001
        unsigned char red = (unsigned char)((1 + std::sin(elapsed * 0.001)) * 128);
        unsigned char green = (unsigned char)((1 + std::sin(elapsed * 0.002)) * 128);
        unsigned char blue = (unsigned char)((1 + std::sin(elapsed * 0.003)) * 128);

        for (int y = 0; y < mypgm::Screen::SCREEN_HEIGHT; ++y)
        {
            for (int x = 0; x < mypgm::Screen::SCREEN_WIDTH; ++x)
            {
                screen.setPixel(x, y, red, green, blue);
            }
        }

        screen.update();

        if (screen.processEvents() == false)
            break;
    }

    screen.close();

    return 0;
}