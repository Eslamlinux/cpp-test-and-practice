#include <iostream>
#include <ncurses.h>

/*
int main()
{
	initscr();
	noecho();
	printw("hello in ncurses the first one\n");
	printw("press any key to out");
	mvprintw(10,10,"in defreent locution\n");
	refresh();
	getch();
	endwin();
	return 0;
}
*/

#include <ncurses.h>

int main() {
    initscr();
    curs_set(0);           // إخفاء المؤشر
    noecho(); 
  	move(3,0);  
	addstr("hello world add str use\n");
	move(4,25);
	addch('c');
	move(6,35);
	printw("\nhi\n");
	mvprintw(7,0,"move and print w\n");
	mvaddstr(8,0,"add and movw str\n");
	mvaddch(9,0,'c');
	refresh();
	getch();
    endwin();
    return 0;
}
