// Draw.cpp >> defined function for drawing game field
#include "stdafx.h"
#include "Global.h"
#include "The Snake Dec.h"

using namespace std;

void Draw()
{
	// create game window
	//
	system("cls"); // clear window
	cout << "by I. Chapkailo\n\n";
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
		cout << "\n\t\t\tScore: " << score << "\t  Hard mode" << endl;
	else
		cout << "\n\t\t\tScore: " << score << "\tNormal mode" << endl;
	
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
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			// draw left wall
			//
			if (j == 0)
				cout << "\t\t\t" << (char)178;
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
			if (j == width - 1)
			{
				cout << (char)178;
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
				if (i == 14)
					cout << "\t\t\t" << (char)249 << " Difficulty:";
				if (i == 15)
					cout << "\t\t\tPress upper <R> to enable hard mode.";
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
}