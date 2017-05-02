// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>

// Keys
//
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ESC 27
#define E 69
#define R 82
#define Y 89
#define N 78

// Global variables
//
bool gameOver; // end of game
bool isHard; // true if difficulty of game is hard
bool escape; // true if exit from game
const int width = 25; // width of game window
const int height = 25; // height of game window
// variables for coordinate of snake, snake's tail and food
//
int x, y;
int foodX, foodY;
int tailX[100], tailY[100];

int score; // score is added when snake eats food
int nTail; // global variable is initialized as 0 if there is no initialization
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
snakeDirection dir; // enum object 