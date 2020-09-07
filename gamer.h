// I guess this makes shit do if its included 
// double by oopsie
#pragma once

// SDL2 is graphics lib also has like
// sound and stuff. Cool :)
#include <SDL2/SDL.h>

class gamer
{
private:
    /* data */
    SDL_Window *window;
    SDL_Renderer *renderer;
    bool running;
public:
    gamer(int width, int height, Uint32 flags);
    ~gamer();
    void events();
    void render();
    void update();
    bool isRunning() {
        return running;
    }
};