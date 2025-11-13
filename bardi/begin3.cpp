#include <ios>
#include <iostream>
#include <ncurses.h>

int main()
{
	initscr();
int x,y,key;
keypad(stdscr,true);
noecho();
x = y =5;

while(key != 'q')
	{
		clear();
		move(0,0);
		printw("welcome to first move game program '%d");
		
		move(y,x);
		printw("-");
		refresh();
		
		key = getch();
		if(key == KEY_LEFT)
			{
				x++;
			if(x < 0) x=0;
			}

	}
endwin();
return 0;
}