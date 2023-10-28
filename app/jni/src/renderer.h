//
// Created by konrad on 04.05.2023.
//

#ifndef SDLPROJECT_RENDERER_H
#define SDLPROJECT_RENDERER_H

#include <assert.h>

#include <SDL.h>

#include <GLES2/gl2.h>
#include <EGL/egl.h>

#include <android/native_window.h>

#define winWidth 500
#define winHeight 500

class Renderer {
public:
    Renderer();
    ~Renderer();
    void checkAsserts();
private:
    SDL_WindowFlags windowFlags;
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_GLContext context;
};

#endif //SDLPROJECT_RENDERER_H
