#include <ncurses.h>
#include <cstring>

double water = 0.0;

void add() {
    water += 0.3;
}

void rem() {
    water -= 0.3;
}

void drawUI() {
    clear();

    int h, w;
    getmaxyx(stdscr, h, w);

    mvprintw(h/2, (w - 22) / 2, "Water: %.1f L", water);
    
    refresh();
}

int main() {
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);
    curs_set(0);

    while (true) {
        drawUI();

        int ch = getch();

        switch (ch) {

            case KEY_RIGHT:
                add();
                break;

            case KEY_LEFT:
                rem();
                break;

            case 'q':
                endwin();
                return 0;

           default:
                break;
        }
    }
}
