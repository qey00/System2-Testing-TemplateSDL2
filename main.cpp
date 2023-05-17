//to run "mingw32-make -f Makefile" and "./main"

#include <iostream>
#include <SDL2/SDL.h>

//size of the window
const int WIDTH = 800, HEIGHT = 450;

int main( int argc, char *argv[] )
{
    SDL_Init( SDL_INIT_EVERYTHING ); //Initializer

    //creates a window format with name
    SDL_Window *window = SDL_CreateWindow( "System 2 for trial purposes only", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI );

    if ( NULL == window )
    {
        std::cout << "Could not create window: " << SDL_GetError( ) << std::endl;
        return 1;
    }

    SDL_Event windowEvent;

    //main loop of the program
    while ( true )
    {
        if ( SDL_PollEvent( &windowEvent ) )
        {
            if ( SDL_QUIT == windowEvent.type )
            { break; }
        }
    }

    SDL_DestroyWindow( window );
    SDL_Quit( );

    return EXIT_SUCCESS;
}