// Setup.cpp >> defines all global variables and put start game data
#include "stdafx.h"

void Setup()
{
	srand(static_cast<unsigned int>(time(NULL))); // include seeding the random data
	gameOver = false; // game not over
	isHard = false; // enable default normal mode
	escape = false; // not exit
	dir = STOP; // snake is stand till move button is not pressed
	x = width / 2; // define begin
	y = height / 2; // of coordinate
	foodX = rand() % width; // coordinate of
	foodY = rand() % height; // food
	score = 0;
}