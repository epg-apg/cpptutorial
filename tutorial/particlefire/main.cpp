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
        // update particles
        // draw particles
        // check for messages/events

        if (screen.processEvents() == false)
            break;
    }

    screen.close();

    return 0;
}