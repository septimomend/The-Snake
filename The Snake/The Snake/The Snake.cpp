// The Snake.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Global.h"

using namespace std; 
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

snakeDirection dir; // enum object

//
void Setup();
void Draw();
void GameOver();
void Input();
void Logic();

int main()
{
	// main cycle
	//
	bool again = true;
	Setup();
	while (!gameOver && !escape)
	{
		Draw();
		Input();
		Logic();
		Sleep(15); // speed
	}
	// play again
	//
	while (again)
	{
		// if <Esc> is pressed
		//
		if (escape)
		{
			cout << "\n\t\t\tAdieu! Shhh...\n" << endl;
			return 0;
		}
		else
		{
			switch (_getch())
			{
			case Y:
				nTail = 0; // snake has no tail
				Setup();
				// main cycle
				//
				while (!gameOver && !escape)
				{
					Draw();
					Input();
					Logic();
					Sleep(15); // speed
				}
				again = true;
				break;
			case N:
				again = false;
				cout << "\n\t\t\tAdieu! Shhh...\n" << endl;
				break;
			}
		}
	}
	return 0;
}