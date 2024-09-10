
#include "iostream"
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>

int main(int argc, char *argv[]) {

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "Failed to initialize the SDL2 library\n";
    return -1;
  }

  SDL_Window *window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED, 680, 480, 0);

  if (!window) {
    std::cout << "Failed to create window\n";
    return -1;
  }

  SDL_Surface *window_surface = SDL_GetWindowSurface(window);

  if (!window_surface) {
    std::cout << "Failed to get the surface from the window\n";
    return -1;
  }

  bool keep_window_open = true;
  while (keep_window_open) {
    SDL_Event e;
    while (SDL_PollEvent(&e) > 0) {
      switch (e.type) {
      case SDL_QUIT:
        keep_window_open = false;
        break;
      }

      SDL_Rect rect;
      rect.x = 680 / 2;
      rect.y = 480 / 2;
      rect.w = 24;
      rect.h = 24;

      SDL_FillRect(window_surface, &rect,
                   SDL_MapRGB(window_surface->format, 0, 0, 0xFF));
      SDL_UpdateWindowSurface(window);
    }
  }
}
