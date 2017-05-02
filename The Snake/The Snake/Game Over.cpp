// Game Over.cpp >> draw game window when game is over
#include "stdafx.h"

using namespace std;

void GameOver()
{
	// create game window
	//
	system("cls"); // clear window
	cout << "\n\n\n";
	cout << "\t\t\t" << " ";
	for (int k = 0; k <= 13; k++)
		cout << (char)220;
	cout << " " << (char)4 << endl;
	cout << "\t\t\t" << " " << (char)221 << "  Snake Console Game  " << (char)220 << endl;
	cout << "\t\t\t" << " ";
	for (int k = 0; k <= 23; k++)
		cout << (char)223;
	cout << endl;
	if (isHard)
		cout << "\t\t\tScore: " << score << "\t  Hard mode" << endl;
	else
		cout << "\t\t\tScore: " << score << "\tNormal mode" << endl;

	// draw upper wall
	//
	for (int i = 0; i < width + 2; i++)
	{
		if (i == 0)
			cout << "\t\t\t";
		cout << (char)178;
	}
	cout << endl;

	// main draw cycle
	//
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			// draw left wall
			//
			if (j == 0)
				cout << "\t\t\t" << (char)178;
			// draw "game over" on game window
			//
			if (gameOver)
			{
				if (i == 12 && j == 0)
					cout << "\t Game Over!";
				if (i == 14 && j == 0)
					cout << "\tPlay  again?";
				if (i == 15 && j == 0)
					cout << "\t  <Y>/<N>";
			}
			// draw snake's head
			//
			if (i == y && j == x)
				cout << (char)219;
			// if there are not snake's head draw food
			//
			else if (i == foodY && j == foodX)
				cout << (char)4;
			// draw snake's tail
			//
			else
			{
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						cout << (char)219;
						print = true;
					}
				}
				if (!print)
					cout << " ";
			}

			// draw right wall and text
			//
			if (gameOver && i == 12 && j == width - 19)
				cout << (char)178;
			if (gameOver && i == 14 && j == width - 20)
				cout << (char)178;
			if (gameOver && i == 15 && j == width - 17)
				cout << (char)178;
			if (j == width - 1)
			{
				if (!gameOver)
				{
					cout << (char)178;
					if (i == 14)
						cout << "\t\t\t" << (char)249 << " Difficulty:";
					if (i == 15)
						cout << "\t\t\tPress upper <R> to enable hard mode.";
				}
				else
				{
					if (i != 12 && i != 14 && i != 15)
						cout << (char)178;
					if (i == 12)
						cout << "";
					if (i == 14)
						cout << "\t" << (char)249 << " Difficulty:";
					if (i == 15)
						cout << "\tPress upper <R> to enable hard mode.";
				}
				if (i == 6)
					cout << "\t\t\t" << (char)249 << " Instruction:";
				if (i == 7)
					cout << "\t\t\tPress <Esc> for exit.";
				if (i == 8)
					cout << "\t\t\tPress " << (char)30 << " to move up.";
				if (i == 9)
					cout << "\t\t\tPress " << (char)31 << " to move down.";
				if (i == 10)
					cout << "\t\t\tPress " << (char)16 << " to move right.";
				if (i == 11)
					cout << "\t\t\tPress " << (char)17 << " to move left.";
				if (i == 16)
					cout << "\t\t\tPress upper <E> to enable normal mode.";
			}
		}
		cout << endl;
	}

	// draw lower wall
	//
	for (int i = 0; i < width + 2; i++)
	{
		if (i == 0)
			cout << "\t\t\t";
		cout << (char)178;
	}
	cout << endl;
	// output text when game is over
	//
	if (isHard && gameOver)
		cout << "\n\t\t  Monitor the wall, s-s-stupid man! Shh-sh..." << endl;
	else if (gameOver)
		cout << "\n\t\t       Watch-sh where you follow and\n\t\t\t where is-s my tail. Shh..." << endl;
}