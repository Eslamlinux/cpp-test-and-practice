#include <iostream>
#include <ncurses.h>

int main(int argc,char** argv)
{
int h,w,x,y;

initscr();
WINDOW* win = newwin(h = 10, w = 20, y = 10 , x = 10);
refresh();


box(win, 0, 0);
wprintw(win,"hello window '0'");

wrefresh(win);

int c = getch();

endwin();

return 0;
}