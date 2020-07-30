#include <iostream>
#include <string.h>

#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{
    const int SCREEN_WIDTH  = 800;
    const int SCREEN_HEIGHT = 600;

    // Start SDL2
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        std::cout << "SDL init failed" << std::endl;
        return 1;
    }

    // Create a Window in the middle of the screen
    SDL_Window *window = 0;

    window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL)
    {
        std::cout << "SDL CreateWindow: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 2;
    }

    // Delay so that we can see the window appear
    // SDL_Delay(2000);

    // event loop
    bool quit = false;
    SDL_Event event;

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    Uint32 *buffer1 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

    memset(buffer1, 123, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    SDL_UpdateTexture(texture, NULL, buffer1, SCREEN_WIDTH*sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    while (!quit)
    {
        // update particles
        // draw particles
        // check for messages/events

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                quit = true;
            }
        }
    }

    delete [] buffer1;

    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);

    // Cleanup and Quit
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}