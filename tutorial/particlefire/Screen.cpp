#include "Screen.h"

#include <string.h>

namespace mypgm
{

Screen::Screen()
    : mWindow(NULL)
    , mRenderer(NULL)
    , mTexture(NULL)
    , mBuffer1(NULL)
    , mBuffer2(NULL)
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
    memset(mBuffer1, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    mBuffer2 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
    memset(mBuffer2, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; ++i)
    {
        mBuffer1[i] = 0x00000000;
    }

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
    delete[] mBuffer2;

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

void Screen::update()
{
    SDL_UpdateTexture(mTexture, NULL, mBuffer1, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(mRenderer);
    SDL_RenderCopy(mRenderer, mTexture, NULL, NULL);
    SDL_RenderPresent(mRenderer);
}

void Screen::clear()
{
    memset(mBuffer1, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
    memset(mBuffer2, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
}

void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue)
{
    if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT)
    {
        return;
    }

    Uint8 alpha  = 0xFF;
    Uint32 color = 0;

    // example: 0x123456FF
    color += red;   // 0x00000012
    color <<= 8;    // 0x00001200
    color += green; // 0x00001234
    color <<= 8;    // 0x00123400
    color += blue;  // 0x00123456
    color <<= 8;    // 0x12345600
    color += alpha; // 0x123456FF

    mBuffer1[(y * SCREEN_WIDTH) + x] = color;
}

void Screen::boxBlur()
{
    Uint32 *temp = mBuffer1;

    mBuffer1 = mBuffer2;
    mBuffer2 = temp;

    for (int y = 0; y < SCREEN_HEIGHT; ++y)
    {
        for (int x = 0; x < SCREEN_WIDTH; ++x)
        {
            /*
             * 0 0 0
             * 0 1 0
             * 0 0 0
             */

            int redTotal   = 0;
            int greenTotal = 0;
            int blueTotal  = 0;

            // process all pixels around our pixel
            for (int row = -1; row <= 1; ++row)
            {
                for (int col = -1; col <= 1; ++col)
                {
                    int currentX = x + col;
                    int currentY = y + row;

                    if (currentX >= 0 && currentX < SCREEN_WIDTH && currentY >= 0
                        && currentY < SCREEN_HEIGHT)
                    {
                        Uint32 color = mBuffer2[currentY * SCREEN_WIDTH + currentX];

                        Uint8 red = color >> 24; // see setPixel(), shift 3 bytes
                        Uint8 green = color >> 16;
                        Uint8 blue  = color >> 8;

                        redTotal += red;
                        greenTotal += green;
                        blueTotal += blue;
                    }
                }
            }

            Uint8 red = redTotal / 9; // because of 9 pixel
            Uint8 green = greenTotal / 9;
            Uint8 blue = blueTotal / 9;

            setPixel(x, y, red, green, blue);
        }
    }
}

} // namespace mypgm