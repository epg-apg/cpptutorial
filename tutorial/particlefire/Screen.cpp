#include "Screen.h"

#include <string.h>

namespace mypgm
{

Screen::Screen()
    : mWindow(NULL)
    , mRenderer(NULL)
    , mTexture(NULL)
    , mBuffer1(NULL)
{
}

Screen::~Screen()
{
}

bool Screen::init()
{
    // Start SDL2
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        return false;
    }

    mWindow
        = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_CENTERED,
                           SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (mWindow == NULL)
    {
        this->close();
        return false;
    }

    mRenderer = SDL_CreateRenderer(mWindow, -1, SDL_RENDERER_PRESENTVSYNC);
    mTexture  = SDL_CreateTexture(mRenderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC,
                                 SCREEN_WIDTH, SCREEN_HEIGHT);

    mBuffer1 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
    memset(mBuffer1, 123, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    mBuffer1[30000] = 0xFF000000;

    for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; ++i)
    {
        mBuffer1[i] = 0xFFFF0000;
    }

    SDL_UpdateTexture(mTexture, NULL, mBuffer1, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(mRenderer);
    SDL_RenderCopy(mRenderer, mTexture, NULL, NULL);
    SDL_RenderPresent(mRenderer);

    return true;
}

void Screen::close()
{
    if (mRenderer != NULL)
        SDL_DestroyRenderer(mRenderer);

    if (mTexture != NULL)
        SDL_DestroyTexture(mTexture);

    if (mWindow != NULL)
        SDL_DestroyWindow(mWindow);

    delete[] mBuffer1;

    SDL_Quit();
}

bool Screen::processEvents()
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            return false;
        }
    }

    return true;
}

} // namespace mypgm