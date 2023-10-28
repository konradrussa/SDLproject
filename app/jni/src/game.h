//
// Created by konrad on 04.05.2023.
//

#ifndef SDLPROJECT_GAME_H
#define SDLPROJECT_GAME_H

#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <chrono>
#include <pthread.h>
#include <threads.h>
#include <memory>

#include "renderer.h"

class Game {
public:
    Game();
    ~Game();
    void runGame();
private:
    std::unique_ptr<Renderer> renderer;
};

void runGame();

#endif //SDLPROJECT_GAME_H
