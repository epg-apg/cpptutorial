#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>

namespace mypgm
{

class Screen
{
  public:
    const static int SCREEN_WIDTH  = 800;
    const static int SCREEN_HEIGHT = 600;

  public:
    Screen();
    Screen(Screen &&)      = default;
    Screen(const Screen &) = default;
    Screen &operator=(Screen &&) = default;
    Screen &operator=(const Screen &) = default;
    ~Screen();

    bool init();
    void close();
    bool processEvents();
    void update();
    void clear();
    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);

  private:
    SDL_Window *mWindow;
    SDL_Renderer *mRenderer;
    SDL_Texture *mTexture;
    Uint32 *mBuffer1;
};

} // namespace mypgm

#endif