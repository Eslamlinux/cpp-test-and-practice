#include <iostream>
#include <ncurses.h>

int main(int argc,char** argv)
{


//start_ncurses(true,true);
initscr();

attron(A_INVIS);
printw("password");
attroff(A_INVIS);

attron(A_REVERSE);
printw("\nA REVERSE");
attroff(A_REVERSE);

attron(A_NORMAL);
printw("\nA NORMAL");
attroff(A_NORMAL);

attron(A_BLINK);
printw("\nA_BLINK");
attroff(A_BLINK);

attron(A_HORIZONTAL);
printw("\n A_HORIZONTAL");
attroff(A_HORIZONTAL);

attron(A_BOLD);
printw("\n A_BOLD");
attroff(A_BOLD);

attron(A_DIM);
printw("\n A_DIM");
attroff(A_DIM);

attron(A_CHARTEXT);
printw("\n A_CHARTEXT");
attroff(A_CHARTEXT);

attron(A_COLOR);
printw("\n A_COLOR");
attroff(A_COLOR);

attron(A_PROTECT);
printw("\n A_PROTECT");
attroff(A_PROTECT);

attron(A_ALTCHARSET);
printw("\n A_ALTCHARSET");
attroff(A_ALTCHARSET);

attron(A_ATTRIBUTES);
printw("\n A_ATTRIBUTES");
attroff(A_ATTRIBUTES);




getch();
endwin();
return 0;
}