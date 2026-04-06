#include<graphics.h>
#include<conio.h>
#include<iostream>
using namespace std;
#define INSIDE 0
#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

int xmin, ymin, xmax, ymax;

int computeCode(float x, float y)
{
    int code = INSIDE;

    if (x < xmin) code |= LEFT;
    else if (x > xmax) code |= RIGHT;

    if (y < ymin) code |= BOTTOM;
    else if (y > ymax) code |= TOP;

    return code;
}
void cohenSutherland(float x1, float y1, float x2, float y2)
{
    int code1 = computeCode(x1, y1);
    int code2 = computeCode(x2, y2);

    int accept = 0;

    while (1)
    {
        if ((code1 == 0) && (code2 == 0))
        {
            accept = 1;
            break;
        }
        else if (code1 & code2)
        {
            break;
        }
        else
        {
            float x, y;
            int code_out;

            if (code1 != 0)
                code_out = code1;
            else
                code_out = code2;

            if (code_out & TOP)
            {
                x = x1 + (x2 - x1) * (ymax - y1) / (y2 - y1);
                y = ymax;
            }
            else if (code_out & BOTTOM)
            {
                x = x1 + (x2 - x1) * (ymin - y1) / (y2 - y1);
                y = ymin;
            }
            else if (code_out & RIGHT)
            {
                y = y1 + (y2 - y1) * (xmax - x1) / (x2 - x1);
                x = xmax;
            }
            else if (code_out & LEFT)
            {
                y = y1 + (y2 - y1) * (xmin - x1) / (x2 - x1);
                x = xmin;
            }
            if (code_out == code1)
            {
                x1 = x;
                y1 = y;
                code1 = computeCode(x1, y1);
            }
            else
            {
                x2 = x;
                y2 = y;
                code2 = computeCode(x2, y2);
            }
        }
    }

    if (accept)
    {
        setcolor(YELLOW);
        line(x1, y1, x2, y2);
    }
    else
    {
        setcolor(WHITE);
        outtextxy(20, 50, (char*)"Line Rejected");
    }
}
int main()
{
    float x1, y1, x2, y2;

    cout << "Enter window (xmin ymin xmax ymax): ";
    cin >> xmin >> ymin >> xmax >> ymax;

    cout << "Enter line (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    setbkcolor(BLACK);
    cleardevice();

    setcolor(WHITE);
    rectangle(xmin, ymin, xmax, ymax);

    setcolor(RED);
    line(x1, y1, x2, y2);

    cohenSutherland(x1, y1, x2, y2);

    char name[] = "Arnav Deshpande C035";
    outtextxy(120, 60, name);

    getch();
    closegraph();
}
