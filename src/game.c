#include "../include/game.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_video.h>
#include <stdbool.h>

void Run(WindowSettings* windowSettings) {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = SDL_CreateWindow(windowSettings->title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowSettings->width, windowSettings->height, 0);
    SDL_Surface* windowSurface = SDL_GetWindowSurface(window);

    while(windowSettings->isRunning) {
        SDL_Event e;
        while (SDL_PollEvent(&e) > 0) {
            if (e.type == SDL_QUIT) {
                windowSettings->isRunning = false;
            }

            SDL_UpdateWindowSurface(window);
        }
    }
}
