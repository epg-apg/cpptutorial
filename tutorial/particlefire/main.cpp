#include <iostream>

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

    window = SDL_CreateWindow("Hello World!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
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

    while(!quit) {
        // update particles
        // draw particles
        // check for messages/events

        while(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    // Cleanup and Quit
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}