// Include the gamer class
#include "gamer.h"

gamer::gamer(/* args */int width, int height) {
    if (!SDL_Init(SDL_INIT_EVERYTHING))
    {
        window = SDL_CreateWindow("Hello, World!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_RESIZABLE);
    }
    
}

gamer::~gamer() {
    SDL_DestroyWindow(window);
}