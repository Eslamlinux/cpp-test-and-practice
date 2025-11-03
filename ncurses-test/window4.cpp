nclude <string>

void start_ncurses(bool useRaw, bool useNoecho);
void printMenu(WINDOW* menu, std::string choices[],int size, int highlight);

int main(int argc ,char argv)
{
//to start ncurses
initscr();
noecho();
cbreak();

//to get screen size
int ymax, xmax;
getmaxyx(stdscr, ymax, xmax);

//creat a window for our input 
WINDOW* inputwin = newwin(3, xmax-12, ymax-5, 5);
box(inputwin, 0, 0);
refresh();
wrefresh(inputwin);

//make sure program waits before exiting...
getch();
endwin();


return 0;
}
