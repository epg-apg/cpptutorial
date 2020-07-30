#include <iostream>

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
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
        for(int y=0; y < mypgm::Screen::SCREEN_HEIGHT;++y) {
            for(int x=0; x < mypgm::Screen::SCREEN_WIDTH;++x) {
                screen.setPixel(x, y, 255, 0, 0);
            }
        }

        screen.setPixel(400, 300, 255, 255, 255);
        screen.update();

        if (screen.processEvents() == false)
            break;
    }

    screen.close();

    return 0;
}