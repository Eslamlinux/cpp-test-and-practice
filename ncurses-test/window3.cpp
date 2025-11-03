#include <iostream>
#include <ncurses.h>
#include <string>
int main(int argc,  char** argv)
{
initscr();
noecho();
cbreak();

int y, x, ybeg, xbeg, ymax, xmax;
getyx(stdscr, y, x);
getbegyx(stdscr,ybeg ,xbeg);
getmaxyx(stdscr,ymax ,xmax);


printw("%d %d %d %d %d %d",y,x,ybeg,xbeg,ymax,xmax);

return 0;
}