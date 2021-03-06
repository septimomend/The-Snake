# The-Snake
One of most popular all time games - The Snake, represented in console view by C++.
***
In this game player manages the snake. In order to score as many points snake must eat food as long until player bumps into wall or tail. But it isn't easy, because snake is fast and angry. So, player, be careful and good luck! Shh...
***  
## License  
MIT License

Copyright (c) 2017 Ivan Chapkailo

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.   
***  
## Usage  
**Before game, please, enable CapsLock key and True Type font in console for right representation of game.**  
## Logic of game  
I divide the field into four parts, following the coordinates X, Y:  
![](https://s8.hostingkartinok.com/uploads/images/2017/05/9fa61f8dc018b879267d5593db712cd9.png "Field game layout")  
When the snake is moving across the field a special function determines the location of the head and tail of a snake using coordinates X, Y. X and Y take negative or positive value in depending snake location. This is same way for food.  
The maximum value of X and Y determined by the size of horizontal walls for X and vertical walls for Y.  
For normal mode:  
When the snake passes through the wall X and Y are taking the opposite value of coordinates and the snake will be back out from the opposite wall.  
For hard mode:  
When the snake hits in the wall of the X and Y values do not take the opposite position and the game ends.  
When the coordinate of snake's head and coordinate of food are match it's meaning that the snake ate the food. When snake eats food score counter increases by 10 points and the snake is longer by 1.  
The game is implemented through the cycle, so any change playing field is always redrawn till the game ends. So it is not performance idea and it has many flaws, but this is the console. And it demonstrates main ability of C++ - this is really fast.  
Screenshot of game:  
![](https://s8.hostingkartinok.com/uploads/images/2017/05/02de77cc86ae8fdd1625f5b222f90de8.png "The Snake game screenshot") 
