#include <graphics.h>
#include <iostream>
using namespace std;
void bresenhamLDA(int x1,int y1, int x2, int y2){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    int dx = abs(x2-x1), dy = abs(y2-y1),P;
    P = 2*dy - dx ;
    cout<<"X"<<"  "<<"Y"<<"   "<<"P"<<endl;
    cout<<x1<<"  "<<y1<<"  "<<P<<endl;
    putpixel(x1,y1,YELLOW);
    for(int i =0; i<dx; i++){
        if(P<0){
            x1 += 1;
            P = P+2*dy;
            cout<<x1<<"  "<<y1<<"   "<<P<<endl;
            putpixel(x1,y1,YELLOW);
        }
        else{
            x1+=1;
            y1+=1;
            P = P +2*dy - 2*dx;
            cout<<x1<<"  "<<y1<<"  "<<P<<endl;
            putpixel(x1,y1,YELLOW);
        }
    }
    getch();
    closegraph();
}


int main(){
int x1,y1,x2,y2;
cout<<"---This is Bresenham's Line drawing Algorithm---"<<endl;
cout<<"Enter x1, y1, x2, y2: ";
cin>>x1>>y1>>x2>>y2;
bresenhamLDA(x1,y1,x2,y2);
return 0;
}