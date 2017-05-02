// Logic.cpp >> defines game logic
#include "stdafx.h"
#include "Global.h"
#include "The Snake Dec.h"

using namespace std;

void Logic()
{
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	
	// move snake's some item and remove the last
	//
	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	// determine the direction
	//
	switch (dir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	default:
		break;
	}
	// hard difficulty. Make all walls as solid stuff
	//
	if (isHard == true)
	{
		if (x == width || x < 0 || y == height || y < 0)
		{
			gameOver = true;
			GameOver();
		}
	}

	if (x >= width) 
		x = 0; 
	else if (x < 0) 
		x = width - 1;
	if (y >= height) 
		y = 0; 
	else if (y < 0) 
		y = height - 1;
	// determine head to tail crash
	//
	for (int i = 0; i < nTail; i++)
	{
		if (tailX[i] == x && tailY[i] == y)
		{
			gameOver = true;
			GameOver();
		}
	}
	// if snake eat food
	//
	if (x == foodX && y == foodY)
	{
		score += 10; // add 10 scores for each eaten food
		foodX = rand() % width; // generate new
		foodY = rand() % height; // place for food
		nTail++; // increase snake's size
	}
}