#include <ncurses.h>
int main(){

// pointer to a window data structure
  WINDOW* window;

// fire up curses
  initscr();

// get user input after every character
  cbreak();

// prepare the console for writing 
  refresh();

// create a window with 10 rows and 40 columns at the y = 0, x = 0 on the ecreen
  window = newwin(10, 40, 0, 0);

// draw a box round the window
  box(window, 0, 0);

// write a message at the top left of the window, one column in
  mvwprintw(window, 0, 1, "press any key to exit!");
  mvwprintw(window, 3,1, "aaaaaabb");
// refresh the window contents
  wrefresh(window);
// block until they press any key
  getch();

// clear up curses resources
  endwin();
}
