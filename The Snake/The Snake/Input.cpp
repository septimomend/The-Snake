// Input.cpp >> captures data from the keyboard
#include "stdafx.h"

using namespace std;

void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case KEY_LEFT:
			dir = LEFT;
			break;
		case KEY_RIGHT:
			dir = RIGHT;
			break;
		case KEY_UP:
			dir = UP;
			break;
		case KEY_DOWN:
			dir = DOWN;
			break;
		case R:
			isHard = true;
			break;
		case E:
			isHard = false;
			break;
		case ESC:
			escape = true;
			break;
		}
	}
}