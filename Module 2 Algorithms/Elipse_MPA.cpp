#include <graphics.h>
#include <iostream>
using namespace std;

void ellipsePlotPoint(int XCenter,int YCenter,int x,int y)
{
    putpixel(XCenter+x,YCenter+y,YELLOW);
    putpixel(XCenter-x,YCenter+y,YELLOW);
    putpixel(XCenter+x,YCenter-y,YELLOW);
    putpixel(XCenter-x,YCenter-y,YELLOW);
}

void ellipseMPA(int XCenter,int YCenter,int rx,int ry)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    float dx, dy, d1, d2, x, y;
    x = 0;
    y = ry;

    // Decision parameter for Region 1
    d1 = (ry*ry) - (rx*rx*ry) + (0.25*rx*rx);
    dx = 2 * ry * ry * x;
    dy = 2 * rx * rx * y;

    cout<<"Pk"<<"  (x,y)"<<endl;

    // Region 1
    while(dx < dy)
    {
        ellipsePlotPoint(XCenter,YCenter,x,y);
        delay(100);

        if(d1 < 0)
        {
            x++;
            dx = dx + (2 * ry * ry);
            d1 = d1 + dx + (ry * ry);
            cout<<d1<<" ("<<x<<","<<y<<")"<<endl;
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d1 = d1 + dx - dy + (ry * ry);
            cout<<d1<<" ("<<x<<","<<y<<")"<<endl;
        }
    }

    // Decision parameter for Region 2
    d2 = ((ry*ry)*((x+0.5)*(x+0.5))) + ((rx*rx)*((y-1)*(y-1))) - (rx*rx*ry*ry);

    // Region 2
    while(y >= 0)
    {
        ellipsePlotPoint(XCenter,YCenter,x,y);
        delay(100);

        if(d2 > 0)
        {
            y--;
            dy = dy - (2 * rx * rx);
            d2 = d2 + (rx * rx) - dy;
            cout<<d2<<" ("<<x<<","<<y<<")"<<endl;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d2 = d2 + dx - dy + (rx * rx);
            cout<<d2<<" ("<<x<<","<<y<<")"<<endl;
        }
    }

    outtextxy(250,250,(char*)"Arnav Deshpande");
    getch();
    closegraph();
}

int main()
{
    int xCenter, yCenter, rx, ry;
    cout<<"----This is Ellipse Mid Point Drawing Algo.----"<<endl;
    cout<<"Enter Xc, Yc, Rx, Ry: ";
    cin>>xCenter>>yCenter>>rx>>ry;
    ellipseMPA(xCenter,yCenter,rx,ry);
    return 0;
}
