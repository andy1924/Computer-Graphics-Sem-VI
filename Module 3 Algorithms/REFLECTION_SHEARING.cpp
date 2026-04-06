#include<iostream>
#include<graphics.h>
#include<conio.h>

int main()
{
    int i;
    int x[4] = {320,420,250,320};
    int y[4] = {150,300,300,150};

    printf("Original Coordinates:\n");
    for(i=0;i<4;i++)
        printf("(%d , %d)\n",x[i],y[i]);



    printf("\nReflection about X-axis:\n");
    for(i=0;i<4;i++)
        printf("(%d , %d)\n",x[i],-y[i]);

    printf("\nReflection about Y-axis:\n");
    for(i=0;i<4;i++)
        printf("(%d , %d)\n",-x[i],y[i]);

    printf("\nReflection about Origin:\n");
    for(i=0;i<4;i++)
        printf("(%d , %d)\n",-x[i],-y[i]);

    printf("\nReflection about line y = x:\n");
    for(i=0;i<4;i++)
        printf("(%d , %d)\n",y[i],x[i]);

    printf("\nReflection about line y = -x:\n");
    for(i=0;i<4;i++)
        printf("(%d , %d)\n",-y[i],-x[i]);



    int gd = DETECT, gm;
    initgraph(&gd,&gm, (char*)" ");

    int poly[8]={320,150,420,300,250,300,320,150};
    drawpoly(4,poly);


    int shx[8];
    float sh=1;

    for(i=0;i<4;i++)
    {
        shx[2*i] = x[i] + sh*y[i];
        shx[2*i+1] = y[i];
    }

    drawpoly(4,shx);

    getch();
    cleardevice();


    int shy[8];

    for(i=0;i<4;i++)
    {
        shy[2*i] = x[i];
        shy[2*i+1] = y[i] + sh*x[i];
    }

    drawpoly(4,poly);
    drawpoly(4,shy);

    getch();
    closegraph();

    return 0;
}
