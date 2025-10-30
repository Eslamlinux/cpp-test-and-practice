#include <iostream>
#include <ncurses.h>

int main(int argc,char** argv)
{
int h,w,x,y;

initscr();
cbreak();
//raw();
noecho();

WINDOW* win = newwin(h = 10, w = 20, y = 10 , x = 10);
refresh();

char t = 'g';
//box(win, (int)t, 104);
//box(win, 0, 0);
int left, right, top, bottom, tlc, trc, blc, brc;
left = right = 103;
top = bottom = 104;
wborder(win,left, right, top, bottom, tlc, trc, blc, brc)
mvwprintw(win, 1, 1,"hello window '0'");

wrefresh(win);

int c = getch();

endwin();

return 0;
}