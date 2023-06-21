#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "main.h"



const int pixelSize = 10;

const int widthScreen = 1920;
const int heightScreen = 1080;

const int numberOfPixelWidth = widthScreen/pixelSize;
const int numberOfPixelHeight = heightScreen/pixelSize;
const int numberOfPixel = numberOfPixelHeight*numberOfPixelWidth;

int main()
{
    particle listParticles[numberOfPixel];
    

    for(int x = 0; x < numberOfPixelWidth; x++) //   ——
    {
        for (int y = 0; y < numberOfPixelHeight; y++) //   |
        {
            listParticles[x+numberOfPixelWidth*y].x = x;
            listParticles[x+numberOfPixelWidth*y].y = y;
        }
    }

    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Failed to initialize the SDL2 library\n";
        return -1;
    }

    SDL_Window *window = SDL_CreateWindow("SDL2 Window",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          680, 480,
                                          0);

    if(!window)
    {
        std::cout << "Failed to create window\n";
        return -1;
    }

    SDL_Surface *window_surface = SDL_GetWindowSurface(window);

    if(!window_surface)
    {
        std::cout << "Failed to get the surface from the window\n";
        return -1;
    }

    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);

    printf("hi")
    
}