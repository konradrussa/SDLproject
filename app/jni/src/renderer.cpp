//
// Created by konrad on 04.05.2023.
//

#include "renderer.h"

Renderer::Renderer() {
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO,
                   "Starting Application.");
    windowFlags = SDL_WINDOW_OPENGL;
    window =
            SDL_CreateWindow("Game Test", 0, 0, winWidth, winHeight, windowFlags);
    renderer = SDL_CreateRenderer(
            window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    context = SDL_GL_CreateContext(window);

    //ANativeWindow_getHeight(ANativeWindow *window)
    //ANativeWindow_getWidth(ANativeWindow *window)
    int w, h;
    SDL_GetWindowSize(window, &w, &h);
    //glViewport(0, 0, w, h);

    SDL_SetRenderDrawColor(renderer, 0, 255, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_Rect rect;
    rect.x = 10 * 10;
    rect.y = 10 * 10;
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
}

Renderer::~Renderer() {
    SDL_GL_DeleteContext(context);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Renderer::checkAsserts() {
    assert(window);
    assert(renderer);
}
