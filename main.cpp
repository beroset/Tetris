#include <SDL2/SDL.h>
#include <string>
#include <iostream>
#include "Tetris.h"
#define WIDTH 600
#define HEIGHT 600

int main(int argc, char *argv[])
{
	Tetris game = Tetris(WIDTH, HEIGHT);
	SDL_Quit();
	return 0;
}
