#ifndef GLOBAL_H
#define GLOBAL_H
#include "stdafx.h"

// Global variables
//
extern bool gameOver; // end of game
extern bool isHard; // true if difficulty of game is hard
extern bool escape; // true if exit from game
extern const int width; // width of game window
extern const int height; // height of game window
 					   // variables for coordinate of snake, snake's tail and food
 					   //
extern int x, y;
extern int foodX, foodY;
extern int tailX[100], tailY[100];
 
extern int score; // score is added when snake eats food
extern int nTail; // global variable is initialized as 0 if there is no initialization
		   // nTail is a size of snake

		   // enum structure represents direction
		   //
enum snakeDirection
{
	STOP = 0,
	LEFT,
	RIGHT,
	UP,
	DOWN
};
extern snakeDirection dir; // enum object


#endif // !GLOBAL_H
