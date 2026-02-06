#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	int gdriver=detect,gmode;
	int x,y,i;
	intgraph(&gdriver,&gmode,"c:\\TC\\BGI");
	x=getmaxx()/2;
	y=getmaxx()/2;
	for(i=40;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
   return 0;
}
