// Include the gamer class
#include "gamer.h"

gamer::gamer(/* args */int width, int height, Uint32 flags) {
    if (SDL_Init(SDL_INIT_EVERYTHING)) {SDL_Log("Failed"); return;}
    SDL_Log("Initalized subsystems.");
    // So the composter is cool cause animations and this will make it so its not disabled.
    SDL_SetHint(SDL_HINT_VIDEO_X11_NET_WM_BYPASS_COMPOSITOR, "0");
    window = SDL_CreateWindow("Hello, World!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
    
}

gamer::~gamer() {
    SDL_DestroyWindow(window);
}