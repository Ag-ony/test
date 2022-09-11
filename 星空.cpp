#define  _CRT_SECURE_NO_WARNINGS

#include <graphics.h>
#include <time.h>
#include <conio.h>

void star(int x, int y) {
    setfillcolor(YELLOW);
    solidcircle(x, y, 20);
    setfillcolor(getbkcolor());
    solidcircle(x - 20, y - 20, 20);
    solidcircle(x + 20, y - 20, 20);
    solidcircle(x - 20, y + 20, 20);
    solidcircle(x + 20, y + 20, 20);
    return;
}

int main() {
    srand((unsigned int)time(NULL));
    initgraph(640, 480);
    setfillcolor(YELLOW);
    solidcircle(450, 80, 50);
    star(50, 50);
    star(570, 400);
    star(300, 60);
    star(250, 300);
    star(50, 400);
    for (int i = 0; i < 100; i++) {
        putpixel(rand() % 640, rand() % 480, YELLOW);
    }
    _getch();
    closegraph();
    return 0;
}