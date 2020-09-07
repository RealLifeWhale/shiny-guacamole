#include "engine.hpp"

Engine::~Engine() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    SDL_Log("Engine long gone judt like the ex girlfriend who will NEVER RETURN HOME RUN!!!!");
};

/**Lmao*/
Engine::Engine(const char *title, int xPos, int yPos, int width, int height, bool fullscreen) {
    int flags = 0;
    if(fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        SDL_Log("%i Initialised!", SDL_INIT_EVERYTHING);
        window = SDL_CreateWindow(title, xPos, yPos, width, height, flags);
        if(window) {
            SDL_Log("Window Created! %i", &window);
            renderer = SDL_CreateRenderer(window, -1, 0);
            if(renderer) {
                SDL_Log("Renderer Created! %i", &renderer);
                playing = true;
            } else SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Renderer Failed!");
        } else SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Window Failed!");
    } else SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Initialization Failed!");
    if(!playing) {
        playing = false;
    }
}

//                                      :X-
//                                   :X###
//                                 ;@####@
//                               ;M######X
//                             -@########$
//                           .$##########@
//                          =M############-
//                         +##############$
//                       .H############$=.
//          ,/:         ,M##########M;.
//       -+@###;       =##########M;
//    =%M#######;     :#########M/
// -$M###########;   :########/
//  ,;X###########; =#######$.
//      ;H#########+######M=
//        ,+#############+
//           /M########@-
//             ;M#####%
//               +####:
//                ,$M-

void Engine::events() {
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            playing = false;
            break;
        default:
            break;
    }
}

void Engine::render() {
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void Engine::update() {
    
}