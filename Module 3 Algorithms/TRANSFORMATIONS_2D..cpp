#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

const int POINT_COUNT = 8;
const float PI = 3.14159265f;

void translateObject(const int src[], int dst[], int tx, int ty)
{
    for (int i = 0; i < POINT_COUNT; i += 2)
    {
        dst[i] = src[i] + tx;
        dst[i + 1] = src[i + 1] + ty;
    }
}

void scaleObject(const int src[], int dst[], float sx, float sy)
{
    for (int i = 0; i < POINT_COUNT; i += 2)
    {
        dst[i] = (int)(src[i] * sx);
        dst[i + 1] = (int)(src[i + 1] * sy);
    }
}

void rotateObject(const int src[], int dst[], float angle)
{
    float rad = angle * PI / 180.0f;

    for (int i = 0; i < POINT_COUNT; i += 2)
    {
        float x = (float)src[i];
        float y = (float)src[i + 1];

        dst[i] = (int)(x * cos(rad) - y * sin(rad));
        dst[i + 1] = (int)(x * sin(rad) + y * cos(rad));
    }
}

void compositeTransform(const int src[], int dst[], float sx, float sy, float angle, int tx, int ty)
{
    float rad = angle * PI / 180.0f;

    for (int i = 0; i < POINT_COUNT; i += 2)
    {
        float x = (float)src[i];
        float y = (float)src[i + 1];

        x = x * sx;
        y = y * sy;

        float xr = x * cos(rad) - y * sin(rad);
        float yr = x * sin(rad) + y * cos(rad);

        dst[i] = (int)(xr + tx);
        dst[i + 1] = (int)(yr + ty);
    }
}

int main()
{
    int gd = DETECT, gm;
    int points[POINT_COUNT] = {320, 150, 420, 300, 250, 300, 320, 150};

    int translated[POINT_COUNT];
    int scaled[POINT_COUNT];
    int rotated[POINT_COUNT];
    int composite[POINT_COUNT];

    int tx, ty;
    float sx, sy, angle;

    cout << "Enter translation values (tx ty): ";
    cin >> tx >> ty;

    cout << "Enter scaling values (sx sy): ";
    cin >> sx >> sy;

    cout << "Enter rotation angle in degrees: ";
    cin >> angle;

    initgraph(&gd, &gm, (char*)" ");

    setbkcolor(BLACK);
    cleardevice();

    translateObject(points, translated, tx, ty);
    scaleObject(points, scaled, sx, sy);
    rotateObject(points, rotated, angle);
    compositeTransform(points, composite, sx, sy, angle, tx, ty);

    setcolor(WHITE);
    drawpoly(4, points);

    setcolor(RED);
    drawpoly(4, translated);

    setcolor(GREEN);
    drawpoly(4, scaled);

    setcolor(YELLOW);
    drawpoly(4, rotated);

    setcolor(CYAN);
    drawpoly(4, composite);

    outtextxy(10, 10, (char*)"White: Original");
    outtextxy(10, 30, (char*)"Red: Translation");
    outtextxy(10, 50, (char*)"Green: Scaling");
    outtextxy(10, 70, (char*)"Yellow: Rotation");
    outtextxy(10, 90, (char*)"Cyan: Composite");

    getch();
    closegraph();
    return 0;
}

