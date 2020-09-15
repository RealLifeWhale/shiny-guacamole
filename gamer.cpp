// Include the gamer class
#include "gamer.h"

gamer::gamer(/* args */int width, int height, Uint32 flags) {
    running = false;
    if (SDL_Init(SDL_INIT_EVERYTHING)) {SDL_Log("Failed initilization."); return;}
    SDL_Log("Initalized subsystems.");
    // So the composter is cool cause animations and this will make it so its not disabled.
    SDL_SetHint(SDL_HINT_VIDEO_X11_NET_WM_BYPASS_COMPOSITOR, "0");
    window = SDL_CreateWindow("Hello, World!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
    if (!window) {SDL_Log("Failed creating window."); return;}
    SDL_Log("Made window.");
    renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer) {SDL_Log("Failed creating renderer."); return;}
    SDL_Log("Made renderer.");
    running = true; SDL_Log("Game Created!");
    return;
}

gamer::~gamer() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Log("Closing game.");
}

void gamer::events() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        default:
            break;
    }
}

void gamer::render() {
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void gamer::update() {
    
}