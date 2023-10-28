//
// Created by konrad on 04.05.2023.
//

#include "game.h"

#include <SDL_main.h>

Game::Game() {
    renderer = std::make_unique<Renderer>();
}
Game::~Game() {

}

void Game::runGame() {
    renderer->checkAsserts();
    sleep(10);
}

void runGame()
{
    Game game;
    game.runGame();
}

//main function
int main(int argc, char **argv) {
    runGame();
    return EXIT_SUCCESS;
}