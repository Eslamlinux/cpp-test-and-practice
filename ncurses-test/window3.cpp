#include <iostream>
#include <ncurses.h>

int main(int argc,  char** argv)
{
initscr();
noecho();
cbreak();

int y, x, ybeg, xbeg, ymax, xmax);
getyx(stdscr, y, x);
getbegyx(stdscr,ybeg ,xbeg);
getmaxyx(stdscr,ymax ,xmax);




return 0;
}