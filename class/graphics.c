//doesnot 
#include<stdio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int max_x_coordinate=getmaxx();
int max_y_coordinate=getmaxy();
printf("screen size=%d x %d",max_x_coordinate,max_y_coordinate);
}
