#include <graphics.h>
#include <iostream>
using namespace std;
void circlePlotPoint(int XCenter,int YCenter,int x,int y)
{
    putpixel(XCenter+x,YCenter+y,YELLOW);
    putpixel(XCenter-x,YCenter+y,YELLOW);
    putpixel(XCenter+x,YCenter-y,YELLOW);
    putpixel(XCenter-x,YCenter-y,YELLOW);
    putpixel(XCenter+y,YCenter+x,YELLOW);
    putpixel(XCenter-y,YCenter+x,YELLOW);
    putpixel(XCenter+y,YCenter-x,YELLOW);
    putpixel(XCenter-y,YCenter-x,YELLOW);

}
void circleMPA(int XCenter,int YCenter,int r)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    
    int x = 0, y=r;
    int dParameter = 1-r; // Replace 1 with 5/4 for accurate results
    cout<<"Pk"<<"  (x,y)"<<endl;
    circlePlotPoint(XCenter,YCenter,x,y);//Initializing the starting points
    cout<<dParameter<<" ("<<x<<","<<y<<")"<<endl;
    while(x<y)
    {
        x++;
        delay(100);
        if(dParameter<0)
        {
            dParameter +=   2*(x)+1; 
        }
        else
        {
            y--;
            dParameter +=   2*(x)+1-2*(y); 
        }
        cout<<dParameter<<" ("<<x<<","<<y<<")"<<endl;
        circlePlotPoint(XCenter,YCenter,x,y);
    }
    outtextxy(250,250,(char*)"Arnav Deshpande");
    getch();
    closegraph();
}
int main()
{
    int xCenter, yCenter, r;
    cout<<"----This is Circle Mid Point Drawing Algo.----"<<endl;
    cout<<"Enter Xc, Yc, r: ";
    cin>>xCenter>>yCenter>>r;
    circleMPA(xCenter,yCenter,r);
    return 0;
}
