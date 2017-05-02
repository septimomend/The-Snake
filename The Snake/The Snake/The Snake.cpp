// The Snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "The Snake Dec.h"

using namespace std;

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
			cout << "\n\t\t\tAdieu! Shhh..." << endl;
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