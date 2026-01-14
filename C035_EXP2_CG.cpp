// Graphics Library for C++
#include <graphics.h>
using namespace std;
int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
 /**
    putpixel(50, 100, YELLOW);
    outtextxy(35, 55, "PIXEL");

    line(120, 90, 170, 170);
    outtextxy(130, 55, "LINE");

    circle(240, 120, 40);
    outtextxy(215, 55, "CIRCLE");

    rectangle(300, 90, 400, 140);
    outtextxy(310, 55, "RECTANGLE");

    ellipse(500, 120, 0, 360, 70, 35);
    outtextxy(470, 55, "ELLIPSE");
**/
    //
   /**
    //A
    rectangle(200, 20, 400, 120);//outer
    rectangle(225, 35, 375, 105);//inner
    line(250,120,150,150);//line left
    line(350,120,450,150);//line right
    rectangle(100,150,500,200);//rectangle bottom
    outtextxy(225,225,"Arnav Deshpande C035");//Watermark
    **/
  /**  //B
    rectangle(100, 20, 500, 120);//outer
    circle(150,170,50);//left wheel
    circle(450,170,50);//right wheel
    outtextxy(225,225,"Arnav Deshpande C035");//Watermark**/
   /** //C
    line(100,50,100,70);
    line(100,50,200,50);
    line(200,50,200,30);
    line(200,30,250,60);
    line(100,70,200,70);
    line(200,70,200,90);
    line(200,90,250,60);
    outtextxy(100,125,"Arnav Deshpande C035");//Watermark**/

   /** //D
    // Head
    ellipse(350, 130, 0, 360, 22, 20);
    // Eyes
    ellipse(340, 125, 0, 360, 3, 3);
    ellipse(360, 125, 0, 360, 3, 3);
    // Body
    ellipse(350, 180, 0, 360, 16, 35);
    // Arms
    line(332, 175, 305, 190);
    line(368, 175, 395, 190);
    outtextxy(100,125,"Arnav Deshpande C035");//Watermark**/

  /**  //E
    // Face outline
    ellipse(150, 350, 0, 360, 45, 35);

    // Eyes
    ellipse(135, 340, 0, 360, 6, 6);
    ellipse(165, 340, 0, 360, 6, 6);

    // Nose
    line(150, 345, 145, 360);
    line(145, 360, 155, 360);

    // Mouth
    rectangle(140, 370, 160, 380);
    outtextxy(100,125,"Arnav Deshpande C035");**/
    //F
   // Base rectangles
    rectangle(150, 200, 300, 350);  // Left rectangle
    rectangle(300, 200, 500, 350);  // Right rectangle

    // Roof lines
    line(150, 200, 225, 120);  // Left slanted roof
    line(225, 120, 400, 120);  // Top horizontal roof
    line(400, 120, 500, 200);  // Right slanted roof

    line(225, 120, 300, 200);
    outtextxy(400,400,"Arnav Deshpande C035");
    getch();
    closegraph();

    return 0;
}
