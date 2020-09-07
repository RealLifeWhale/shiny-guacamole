#ifndef engine_hpp
#define engine_hpp

#include <SDL.h>
#include <iostream>

class Engine {
public:
    Engine(const char *title, int xPos, int yPos, int width, int height, bool fullscreen);
    ~Engine();
    //void init(const char *title, int xPos, int yPos, int width, int height, bool fullscreen);
    void events();
    void render();
    void update();

    inline bool isPlaying() { return playing; };    
private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    bool playing;
};

#endif //engine_hpp
