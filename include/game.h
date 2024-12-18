#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct WindowSettings {
    const char* title;
    uint32_t width;
    uint32_t height;
    bool isRunning;

} WindowSettings;

void Run(WindowSettings* windowSettings);
