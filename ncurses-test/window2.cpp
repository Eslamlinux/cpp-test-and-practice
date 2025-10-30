#include <iostream>
#include <ncurses.h>

int main(int argc,char** argv)
{


start_ncurses(true,true);

attron(A_REVERSE);
printw("this is text");
attroff(A_STANDOUT);

getch();

return 0;
}