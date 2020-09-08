// Game class, cool.
#include "gamer.h"

// It's main function runs at start
int main(int argc, char const *argv[]) {
    gamer* game = new gamer(600, 800, SDL_WINDOW_RESIZABLE);
    while(game->isRunning())
    {
        game->render();
        game->update();
        game->events();
    };
    game->~gamer();
    return 0; //Return when done and prog ends
}