#include <stdio.h>
#include <ncurses.h>

int main()
{
    initscr();                  // start curses mode
    printw("Hello world!");     // print to screen
    refresh();                  // print on real screen
    getch();                    // wait for user input
    endwin();                   // end curses mode
    return 0;
}
