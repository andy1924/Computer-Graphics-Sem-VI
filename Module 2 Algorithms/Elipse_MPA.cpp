#include <graphics.h>
#include <cmath>
#include <iostream>
using namespace std;



void elipseMPA(int Xc, int Yc, int Rx, int Ry)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    //First Point is Centered on (0,Ry)
    putpixel(0,Ry, YELLOW); // Replace with func. later
    //Initializing the desicion Paramenter
    int dParameter1 = pow(Ry,2) - pow(Rx,2)*Ry + 1/4*pow(Rx,2);
    while (2*pow(Ry,2)*x < 2*pow(Ry,2)*x)
    {
        /* code */
    }
    
    outtextxy(250,250,(char*)"Arnav Deshpande");
    getch();
    closegraph();
}


int main()
{

    return 0;
}