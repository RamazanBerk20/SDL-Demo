#include "../include/game.h"
#include <stdbool.h>

int main()
{
    WindowSettings windowSettings = {"My GAME", 960, 540, true};

    Run(&windowSettings);

    return 0;
}
