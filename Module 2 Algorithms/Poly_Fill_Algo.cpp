#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

void FloodFill4(int x, int y, int newcolor, int oldColor)
{
    if (x < 0 || y < 0 || x > getmaxx() || y > getmaxy())
        return;

    if (getpixel(x, y) == oldColor)
    {
        putpixel(x, y, newcolor);

        FloodFill4(x + 1, y, newcolor, oldColor);
        FloodFill4(x - 1, y, newcolor, oldColor);
        FloodFill4(x, y + 1, newcolor, oldColor);
        FloodFill4(x, y - 1, newcolor, oldColor);
    }
}

void BoundaryFill4(int x, int y, int fillColor, int boundaryColor)
{
    if (x < 0 || y < 0 || x > getmaxx() || y > getmaxy())
        return;

    int currentColor = getpixel(x, y);
    if (currentColor != boundaryColor && currentColor != fillColor)
    {
        putpixel(x, y, fillColor);

        BoundaryFill4(x + 1, y, fillColor, boundaryColor);
        BoundaryFill4(x - 1, y, fillColor, boundaryColor);
        BoundaryFill4(x, y + 1, fillColor, boundaryColor);
        BoundaryFill4(x, y - 1, fillColor, boundaryColor);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");

    setbkcolor(BLACK);
    cleardevice();

    int x1 = 200, y1 = 100;
    int x2 = 100, y2 = 300;
    int x3 = 300, y3 = 300;

    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    BoundaryFill4(200, 200, BLUE, WHITE); //or FloodFill4(200, 200, BLUE, BLACK);

    setcolor(YELLOW);
    outtextxy(120, 350, (char*)"Arnav Deshpande CO35");

    getch();
    closegraph();
    return 0;
}
