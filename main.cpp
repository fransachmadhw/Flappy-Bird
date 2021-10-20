#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <glut.h>

#define pi (2*acos(0.0))
#define GLUT_DISABLE_ATEXIT_HACK;
#define PI 3.1416

GLvoid *font_style = GLUT_BITMAP_HELVETICA_18;

double cameraHeight;
double cameraAngle;
static float clx1 = 280;
static float cly1 = 70;
int drawgrid;
int drawaxes;
int a=0;
double angle;
double incx, incy;
int state,state1,state2,state3;
int tx,ty,tx1=-60,ty1=150,tx2=-60,ty2=-20,tx3,ty3,tx4=-14,ty4=15;
float tx5=150,ty5,tx6=300,ty6,tx7=-90,ty7=0,tx8=-10,ty8=16;
char text[100]="START";
char text2[100]="Enter space to start";
char text1[100]="LET's PLAY THE FLAPY BIRD";
char text3[100]="Thanks for play!";
char text4[100]="Score:";
double inc_ang=0.05;
int stop=0;
double score;
char msg[30];
char sc[30]="Score=";

struct point
{
	double x,y,z;
};
void bird()
{

}

void continuous()
{
    tx+=1;
    tx1-=1;
    tx2+=1;
    //ty4+=1;

    if(state ==0 && ty4>10){ state =1;}
    if(state ==1 && ty4<15){ state =0;}

    if(state==1) ty4-=3;
    if(state==0) ty4+=3;

    if(state1 ==0 && tx5 <-690){ state1 =1;}
    if(state1 ==1 && tx5==155 ){state1 =0;}

    if(state1==0) tx5-=0.2;
    if(state1==1){tx5=155;}

    if(state2 ==0 && tx6 <-250){ state2 =1;}
    if(state2 ==1 && tx6==100 ){state2 =0;}

    if(state2==0) tx6-=0.2;
    if(state2==1){tx6=100;}

    /*tx5-=0.05;
     if(tx5 <= -650)
        tx5 = tx5 + 480;*/

    if(state3==0) {state3=1;}

    if(state3==1) {//tx7+=0.02;
                   ty7-=0.05;
                   }

   /* tx6-=0.02;
     if(tx6 <= -390)
        tx6 = tx6 + 150;*/

    clx1 -= 0.08;
    if(clx1 <= -240)
        clx1 = clx1 + 450;

    /*if(state1 == 0) {
                    tx5+=.05;}

    if(state1 ==1) {
                    tx5-=.05;}
    if(state1 ==2) {
                    tx5+=.05;}*/

  // ty=0;
    glutPostRedisplay();

}






