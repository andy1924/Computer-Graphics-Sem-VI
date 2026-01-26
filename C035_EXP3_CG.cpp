#include <graphics.h>
#include <iostream>
using namespace std;
#define ROUND(a)  ((int)(a+0.5))

void DDA(int xa, int ya, int xb, int yb)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int dx = xb - xa, dy = yb-ya, steps , k;
    float xI , yI, x = xa, y = ya;

    if(abs(dx)>abs(dy)) steps = abs(dx);
    else steps = abs (dy);
    xI = dx / float(steps);
    yI = dy / float(steps);

    putpixel (ROUND(x),ROUND(y),YELLOW);
    cout<<"X: "<<ROUND(x)<<"Y: "<<ROUND(y)<<endl;

    for (k = 0; k<steps; k++){
        x += xI;
        y += yI;
        cout<<"X: "<<ROUND(x)<<"Y: "<<ROUND(y)<<endl;
       delay(100);
        putpixel (ROUND(x),ROUND(y),YELLOW);
    }
    outtextxy(200 , 200,(char*)"Arnav Deshpande");
    getch();
    closegraph();
}
int main()
{
    int xa,ya,xb,yb;
    cout<<"Enter the values for xa, ya, xb, yb :";
    cin>>xa>>ya>>xb>>yb;
    DDA(xa,ya,xb,yb);
    return 0;
}
