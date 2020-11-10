#include <iostream>
#include <time.h>

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <math.h>
#include "Screen.h"
#include "Swarm.h"
#include "Particle.h"

int main(int argc, char *argv[])
{
    std::srand(time(NULL));
    mypgm::Screen screen;

    if (screen.init() == false)
    {
        return 1;
    }

    mypgm::Swarm mySwarm;

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
                // screen.setPixel(x, y, red, green, blue);
            }
        }

        const mypgm::Particle * const tParticles = mySwarm.getParticles();
        for (int i = 0; i < mypgm::Swarm::NPARTICLES; ++i) 
        {
            mypgm::Particle tParticle = tParticles[i];
            // particles are in a coordinate system from -1 to 1; add 1 to move it between 0 and 2 (no negatives)
            // then multiple by half of screen width/height (2 times will be full witdh)
            int x = (tParticle.mX + 1) * mypgm::Screen::SCREEN_WIDTH/2;
            int y = (tParticle.mY + 1) * mypgm::Screen::SCREEN_HEIGHT/2;

            screen.setPixel(x, y, red, green, blue);
        }

        screen.update();

        if (screen.processEvents() == false)
            break;
    }

    screen.close();

    return 0;
}