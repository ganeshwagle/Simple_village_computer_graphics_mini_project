#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <mmsystem.h>
#include <MMSystem.h>
#include<string.h>
#include<iostream>

using namespace std;
void DrawEllipse(float cx, float cy, float rx, float ry, int num_segments);
void renderbitmap1(float x, float y, void *font, string s);
void myCircle(float r,float x, int y);
void delay();

float night=0;
float handposition=43,handdir=1;;

void display3()
{
int d=20,p,gx=0,hy=0,hxc=496,gyc=795,ha,gb;
delay();
glClear (GL_COLOR_BUFFER_BIT);

//wall left-right
glColor3ub (46,139,87);
glBegin(GL_POLYGON);
glVertex3f (3, 250, 0);
glVertex3f (390, 350, 0);
glVertex3f (390, 1000, 0);
glVertex3f (0, 1000, 0);

//----------
glVertex3f (3, 250, 0);
glVertex3f (390, 350, 0);
glVertex3f (390, 1000, 0);
glVertex3f (0, 1000, 0);
glEnd();



//wall right-left
glColor3ub (139 ,99 ,108);
glBegin(GL_POLYGON);
glVertex3f (390,350, 0);
glVertex3f (1000,250, 0);
glVertex3f (1000, 1000, 0);
glVertex3f (390, 1000, 0);
glEnd();

//photo frame - outer
glColor3ub (255,108,92);
glBegin(GL_POLYGON);
glVertex3f (450,700, 0);
glVertex3f (540,700, 0);
glVertex3f (540, 870, 0);
glVertex3f (450, 870, 0);
glEnd();

//photo frame - inner
glColor3ub (178,235,242);
glBegin(GL_POLYGON);
glVertex3f (455,705, 0);
glVertex3f (535,705, 0);
glVertex3f (535, 865, 0);
glVertex3f (455, 865, 0);
glEnd();

//photo frame - man
glColor3ub (171,39,176);
glBegin(GL_POLYGON);
glVertex3f (455,705, 0);
glVertex3f (535,705, 0);
glVertex3f (535, 745, 0);
glVertex3f (525, 770, 0);
glVertex3f (465, 770, 0);
glVertex3f (455, 745, 0);
glEnd();


//photo frame - man color
glColor3ub (178,235,242);
glBegin(GL_POLYGON);
glVertex3f (485, 770, 0);
glVertex3f (495, 750, 0);
glVertex3f (505, 770, 0);
glEnd();

//photo frame - man head
glColor3ub (97,97,97);
glBegin(GL_POLYGON);
glVertex3f (485, 770, 0);
glVertex3f (495, 750, 0);
glVertex3f (505, 770, 0);
glVertex3f (505, 795, 0);
glVertex3f (485, 795, 0);
glEnd();

//roof  top
glColor3ub (155,142,126);
glBegin(GL_POLYGON);
glVertex3f (650, 1000, 0);
glVertex3f (390, 950, 0);
glVertex3f (180, 1000, 0);
glEnd();

//wall right-right
glColor3ub (46,139,87);
glBegin(GL_POLYGON);
glVertex3f (600, 300, 0);
glVertex3f (1000, 250, 0);
glVertex3f (1000, 1000, 0);
glVertex3f (600, 1000, 0);
glEnd();

//clock outer
glColor3ub (55,71,79);
glBegin(GL_POLYGON);
glVertex3f (680, 800, 0);
glVertex3f (630, 800, 0);
glVertex3f (630, 900, 0);
glVertex3f (680, 900, 0);
glEnd();
//clock inner
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (675, 805, 0);
glVertex3f (635, 805, 0);
glVertex3f (635, 895, 0);
glVertex3f (675, 895, 0);
glEnd();

//clock second
glColor3ub (0,0,0);
glBegin(GL_LINES);
//glBegin(GL_POINT_SIZE);
glVertex3f (655, 850, 0);
glVertex3f (655, 890, 0);
glEnd();


//clock minute
glColor3ub (0,0,0);
glBegin(GL_LINES);
//glBegin(GL_POINT_SIZE);
glVertex3f (655, 850, 0);
glVertex3f (670, 850, 0);
glEnd();


//clock hour
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex3f (655, 850, 0);
glVertex3f (645, 810, 0);
glEnd();

// left wall - right
glColor3ub(139 ,99 ,108);
glBegin(GL_POLYGON);
glVertex3f (200, 250, 0);
glVertex3f (0, 250, 0);
glVertex3f (0, 1000, 0);
glVertex3f (200, 1000, 0);
glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);
glVertex2f(61,623);
glVertex2f(61,655);
glVertex2f(177,655);
glVertex2f(177,623);
glEnd();

glColor3f(0,0,0);
renderbitmap1(63,627,GLUT_BITMAP_TIMES_ROMAN_24,"BEDROOM");

//FLOOR

//floor - white
glColor3ub (71,71,71);
glBegin(GL_POLYGON);
glVertex3f (0, 0, 0);
glVertex3f (0, 250, 0);
glVertex3f (390, 350, 0);
glVertex3f (1000, 250, 0);
glVertex3f (1000, 0, 0);
glEnd();

//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (0, 0, 0);
glVertex3f (0, 50, 0);
glVertex3f (50, 50, 0);
glVertex3f (50, 0, 0);
glEnd();

//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (0, 100, 0);
glVertex3f (0, 150, 0);
glVertex3f (50, 150, 0);
glVertex3f (50, 100, 0);
glEnd();

//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (0, 200, 0);
glVertex3f (0, 250, 0);
glVertex3f (50,250, 0);
glVertex3f (50,200, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (100, 0, 0);
glVertex3f (100, 50, 0);
glVertex3f (150, 50, 0);
glVertex3f (150, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (100, 100, 0);
glVertex3f (100, 150, 0);
glVertex3f (150,150, 0);
glVertex3f (150, 100, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (100, 200, 0);
glVertex3f (100, 250, 0);
glVertex3f (150, 250, 0);
glVertex3f (150, 200, 0);
glEnd();

//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (50, 250, 0);
glVertex3f (50, 262, 0);
glVertex3f (100, 275, 0);
glVertex3f (100, 250, 0);
glEnd();

//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (150, 250, 0);
glVertex3f (150, 290, 0);
glVertex3f (200, 300, 0);
glVertex3f (200, 250, 0);
glEnd();

//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (200, 0, 0);
glVertex3f (200, 50, 0);
glVertex3f (250, 50, 0);
glVertex3f (250, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (200, 100, 0);
glVertex3f (200, 150, 0);
glVertex3f (250, 150, 0);
glVertex3f (250, 100, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (200, 200, 0);
glVertex3f (200, 250, 0);
glVertex3f (250, 250, 0);
glVertex3f (250, 200, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (200, 300, 0);
glVertex3f (200, 300, 0);
glVertex3f (250, 315, 0);
glVertex3f (250, 300, 0);
glEnd();

//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (300, 0, 0);
glVertex3f (300, 50, 0);
glVertex3f (350, 50, 0);
glVertex3f (350, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (300, 300, 0);
glVertex3f (300, 328, 0);
glVertex3f (350, 340, 0);
glVertex3f (350, 300, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (400, 0, 0);
glVertex3f (400, 50, 0);
glVertex3f (450, 50, 0);
glVertex3f (450, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (500, 0, 0);
glVertex3f (500, 50, 0);
glVertex3f (550, 50, 0);
glVertex3f (550, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (600, 0, 0);
glVertex3f (600, 50, 0);
glVertex3f (650, 50, 0);
glVertex3f (650, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (600, 100, 0);
glVertex3f (600, 150, 0);
glVertex3f (650, 150, 0);
glVertex3f (650, 100, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (700, 0, 0);
glVertex3f (700, 50, 0);
glVertex3f (750, 50, 0);
glVertex3f (750, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (700, 100, 0);
glVertex3f (700, 150, 0);
glVertex3f (750, 150, 0);
glVertex3f (750, 100, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (800, 0, 0);
glVertex3f (800, 50, 0);
glVertex3f (850, 50, 0);
glVertex3f (850, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (800, 100, 0);
glVertex3f (800, 150, 0);
glVertex3f (850, 150, 0);
glVertex3f (850, 100, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (800, 200, 0);
glVertex3f (800, 250, 0);
glVertex3f (850, 250, 0);
glVertex3f (850, 200, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (900, 0, 0);
glVertex3f (900, 50, 0);
glVertex3f (950, 50, 0);
glVertex3f (950, 0, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (900, 100, 0);
glVertex3f (900, 150, 0);
glVertex3f (950, 150, 0);
glVertex3f (950, 100, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (50, 50, 0);
glVertex3f (50, 100, 0);
glVertex3f (100, 100, 0);
glVertex3f (100, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (50, 150, 0);
glVertex3f (50, 200, 0);
glVertex3f (100, 200, 0);
glVertex3f (100, 150, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (150, 50, 0);
glVertex3f (150, 100, 0);
glVertex3f (200, 100, 0);
glVertex3f (200, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (150, 150, 0);
glVertex3f (150, 200, 0);
glVertex3f (200, 200, 0);
glVertex3f (200, 150, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (250, 50, 0);
glVertex3f (250, 100, 0);
glVertex3f (300, 100, 0);
glVertex3f (300, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (250, 250, 0);
glVertex3f (250, 300, 0);
glVertex3f (300, 300, 0);
glVertex3f (300, 250, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (350, 50, 0);
glVertex3f (350, 100, 0);
glVertex3f (400, 100, 0);
glVertex3f (400, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (450, 50, 0);
glVertex3f (450, 100, 0);
glVertex3f (500, 100, 0);
glVertex3f (500, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (550, 50, 0);
glVertex3f (550, 100, 0);
glVertex3f (600, 100, 0);
glVertex3f (600, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (650, 50, 0);
glVertex3f (650, 100, 0);
glVertex3f (700, 100, 0);
glVertex3f (700, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (750, 50, 0);
glVertex3f (750, 100, 0);
glVertex3f (800, 100, 0);
glVertex3f (800, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (750, 150, 0);
glVertex3f (750, 200, 0);
glVertex3f (800, 200, 0);
glVertex3f (800, 150, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (850, 50, 0);
glVertex3f (850, 100, 0);
glVertex3f (900, 100, 0);
glVertex3f (900, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (950, 50, 0);
glVertex3f (950, 100, 0);
glVertex3f (1000, 100, 0);
glVertex3f (1000, 50, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (950,200, 0);
glVertex3f (950, 150, 0);
glVertex3f (1000, 150, 0);
glVertex3f (1000, 200, 0);
glEnd();
//floor - black
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (950,260, 0);
glVertex3f (950, 250, 0);
glVertex3f (1000, 250, 0);
glVertex3f (1000, 260, 0);
glEnd();

//window left
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (230, 500, 0);
glVertex3f (325, 520, 0);
glVertex3f (325, 900, 0);
glVertex3f (230, 900, 0);
glEnd();

//window left - right inner
glColor3ub (131,102,92);
glBegin(GL_POLYGON);
glVertex3f (310, 890, 0);
glVertex3f (325, 900, 0);
glVertex3f (325, 520, 0);
glVertex3f (310, 525, 0);
glEnd();

//window left - bottom
glColor3ub (195,182,166);
glBegin(GL_POLYGON);
glVertex3f (230, 500, 0);
glVertex3f (325, 520, 0);
glVertex3f (310, 525, 0);
glVertex3f (230, 510, 0);
glEnd();

//window left - top
glColor3ub (195,182,166);
glBegin(GL_POLYGON);
glVertex3f (230, 900, 0);
glVertex3f (325, 900, 0);
glVertex3f (310, 890, 0);
glVertex3f (230, 890, 0);
glEnd();

//window left grill-middle-vertical
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (275, 512, 0);
glVertex3f (280, 512, 0);
glVertex3f (280, 895, 0);
glVertex3f (275, 895, 0);
glEnd();

//window left grill-bottom
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (230, 600, 0);
glVertex3f (320, 615, 0);
glVertex3f (320, 625, 0);
glVertex3f (230, 610, 0);
glEnd();

//window left grill-middle
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (230, 700, 0);
glVertex3f (320, 715, 0);
glVertex3f (320, 725, 0);
glVertex3f (230, 710, 0);
glEnd();

//window left grill-top-horizontal
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (230, 800, 0);
glVertex3f (320, 810, 0);
glVertex3f (320, 820, 0);
glVertex3f (230, 810, 0);
glEnd();

//wear drop front
glColor3ub (89,39,25);
glBegin(GL_POLYGON);
glVertex3f (460, 660, 0);
glVertex3f (470, 670, 0);
glVertex3f (330, 670,0);
glVertex3f (340, 660, 0);
glVertex3f (340, 320, 0);
glVertex3f (460, 320, 0);
glEnd();

//wear drop front-drawer 1 - outer
glColor3ub (42,23,15);
glBegin(GL_POLYGON);
glVertex3f (455, 431, 0);
glVertex3f (345, 431, 0);
glVertex3f (345, 324, 0);
glVertex3f (455, 324, 0);
glEnd();

//wear drop front-drawer 1 - handel
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (410, 381, 0);
glVertex3f (390, 381, 0);
glVertex3f (390, 375, 0);
glVertex3f (410, 375, 0);
glEnd();

//wear drop front-drawer 2 - outer
glColor3ub (42,23,15);
glBegin(GL_POLYGON);
glVertex3f (455, 435, 0);
glVertex3f (345, 435, 0);
glVertex3f (345, 541, 0);
glVertex3f (455, 541, 0);
glEnd();

//wear drop front-drawer 2 - handel
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (410, 481, 0);
glVertex3f (390, 481, 0);
glVertex3f (390, 475, 0);
glVertex3f (410, 475, 0);
glEnd();
//wear drop front-drawer 3 - outer
glColor3ub (42,23,15);
glBegin(GL_POLYGON);
glVertex3f (455, 653, 0);
glVertex3f (345, 653, 0);
glVertex3f (345, 545, 0);
glVertex3f (455, 545, 0);
glEnd();

//wear drop front-drawer 3 - handel
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (410, 585, 0);
glVertex3f (390, 585, 0);
glVertex3f (390, 579, 0);
glVertex3f (410, 579, 0);
glEnd();

//wear drop side
glColor3ub (39,32,21);
glBegin(GL_POLYGON);
glVertex3f (470, 670, 0);
glVertex3f (500, 667, 0);
glVertex3f (492, 657, 0);
glVertex3f (492, 330, 0);
glVertex3f (460, 320, 0);
glVertex3f (460, 660, 0);
glEnd();

//bed
//bed head
glColor3ub (77,40,26);
glBegin(GL_POLYGON);
glVertex3f (550, 650, 0);
glVertex3f (850, 600, 0);
glVertex3f (850, 250, 0);
glVertex3f (550, 300, 0);
glEnd();

//bed leg
glColor3ub (88,40,19);
glBegin(GL_POLYGON);
glVertex3f (250, 200, 0);
glVertex3f (550, 150, 0);
glVertex3f (550, 50, 0);
glVertex3f (250, 100, 0);
glEnd();


//bed right side
glColor3ub (128,55,36);
glBegin(GL_POLYGON);
glVertex3f (850, 250, 0);
glVertex3f (550, 50, 0);
glVertex3f (550, 150, 0);
glVertex3f (850, 350, 0);
glEnd();

//bed right side - box left
glColor3ub (77,40,26);
glBegin(GL_POLYGON);
glVertex3f (695, 160, 0);
glVertex3f (555, 65, 0);
glVertex3f (555, 140, 0);
glVertex3f (695, 235, 0);
glEnd();

//bed right side - box left - handle

glColor3ub (128,55,36);
glBegin(GL_POLYGON);
glVertex3f (650, 160, 0);
glVertex3f (600, 125, 0);
glVertex3f (600, 140, 0);
glVertex3f (650, 175, 0);
glEnd();

//bed right side - 2nd box
glColor3ub (77,40,26);
glBegin(GL_POLYGON);
glVertex3f (845, 260, 0);
glVertex3f (705, 165, 0);
glVertex3f (705, 240, 0);
glVertex3f (845, 335, 0);
glEnd();

//bed right side - 2nd box - handle

glColor3ub (128,55,36);
glBegin(GL_POLYGON);
glVertex3f (800, 260, 0);
glVertex3f (750, 225, 0);
glVertex3f (750, 240, 0);
glVertex3f (800, 275, 0);
glEnd();

//bed rig
//bed top right
glColor3ub (32,178,170);
glBegin(GL_POLYGON);
glVertex3f (550, 150, 0);
glVertex3f (850, 350, 0);
glVertex3f (850, 400, 0);
glVertex3f (550, 200, 0);
glEnd();

//bed leg left
glColor3ub (177,160,140);
glBegin(GL_POLYGON);
glVertex3f (250, 200, 0);
glVertex3f (250, 250, 0);
glVertex3f (550, 450, 0);
glVertex3f (550, 400, 0);

glEnd();

//bed leg top
glColor3ub (32,178,170);
glBegin(GL_POLYGON);
glVertex3f (250, 200, 0);
glVertex3f (550, 150, 0);
glVertex3f (550, 200, 0);
glVertex3f (250, 250, 0);
glEnd();

//bed sheet
glColor3ub (132,112,255);
glBegin(GL_POLYGON);
glVertex3f (550, 200, 0.0);
glVertex3f (250, 250, 0.0);
glVertex3f (550, 450, 0.0);
glVertex3f (850, 400, 0.0);
glEnd();

//bed pillo

//bed pillo - left
glColor3ub (0,0,205);
glBegin(GL_POLYGON);
glVertex3f (604, 375, 0.0);
//glVertex3f (604, 375, 0.0);
glVertex3f (500, 395, 0.0);
glVertex3f (550, 435, 0.0);
glVertex3f (655, 415, 0.0);
glEnd();


//bed pillo - left - side
glColor3ub (176, 196, 222);
glBegin(GL_POLYGON);
glVertex3f (604, 375, 0.0);
glVertex3f (655, 415, 0.0);
glVertex3f (655, 405, 0.0);
glVertex3f (604, 365, 0.0);
glEnd();

//bed pillo - left - bottom
glColor3ub (176, 196, 222);
glBegin(GL_POLYGON);
glVertex3f (604, 375, 0.0);
glVertex3f (500, 395, 0.0);
glVertex3f (500, 385, 0.0);
glVertex3f (604, 365, 0.0);
glEnd();

//bed pillo right
glColor3ub (0,0,205);
glBegin(GL_POLYGON);
glVertex3f (737, 360, 0.0);
glVertex3f (624, 375, 0.0);
glVertex3f (675, 410, 0.0);
glVertex3f (790, 390, 0.0);
glEnd();

//bed pillo right-side
glColor3ub (176, 196, 222);
glBegin(GL_POLYGON);
glVertex3f (737, 360, 0.0);
glVertex3f (790, 390, 0.0);
glVertex3f (790, 380, 0.0);
glVertex3f (737, 350, 0.0);
glEnd();

//bed pillo bottom
glColor3ub (176, 196, 222);
glBegin(GL_POLYGON);
glVertex3f (737, 360, 0.0);
glVertex3f (624, 375, 0.0);
glVertex3f (624, 365, 0.0);
glVertex3f (737, 350, 0.0);
glEnd();

//window right
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (1000, 500, 0);
glVertex3f (900, 500, 0);
glVertex3f (900, 900,0);
glVertex3f (1000,900, 0);
glEnd();
//window right-inner bottom
glColor3ub (105,87,62);
glBegin(GL_POLYGON);
glVertex3f (1000, 500, 0);
glVertex3f (900, 500, 0);
glVertex3f (910, 510,0);
glVertex3f (1000,510, 0);
glEnd();
//window right-inner left
glColor3ub (131,102,92);
glBegin(GL_POLYGON);
glVertex3f (900, 900, 0);
glVertex3f (910, 890, 0);
glVertex3f (910, 510,0);
glVertex3f (900,500, 0);
glEnd();

//window right-inner top
glColor3ub (102,87,62);
glBegin(GL_POLYGON);
glVertex3f (900, 900, 0);
glVertex3f (910, 890, 0);
glVertex3f (1000, 890,0);
glVertex3f (1000,900, 0);
glEnd();

//window right grill bottom-vertical
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (905, 600, 0);
glVertex3f (1000, 600, 0);
glVertex3f (1000, 610,0);
glVertex3f (905,610, 0);
glEnd();

//window right grill middle-vertical
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (905, 700, 0);
glVertex3f (1000, 700, 0);
glVertex3f (1000, 710,0);
glVertex3f (905,710, 0);
glEnd();

//window right grill top-vertical
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (905, 800, 0);
glVertex3f (1000, 800, 0);
glVertex3f (1000, 810,0);
glVertex3f (905,810, 0);
glEnd();

//window right grill bottom-horizontal
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex3f (965, 505, 0);
glVertex3f (965, 895, 0);
glVertex3f (970, 895,0);
glVertex3f (970,505, 0);
glEnd();
//bed side box front
glColor3ub (60,23,9);
glBegin(GL_POLYGON);
glVertex3f (960, 410,0);
glVertex3f (960, 120,0);
glVertex3f (830, 135,0);
glVertex3f (830, 415, 0);
glVertex3f (820, 435,0);
glVertex3f (970, 435, 0);
glEnd();

//bed side box front - box bottom
glColor3ub (128,55,36);
glBegin(GL_POLYGON);
glVertex3f (955, 260,0);
glVertex3f (955, 130,0);
glVertex3f (835, 145,0);
glVertex3f (835, 270, 0);
glEnd();

//bed side box front - box bottom - handel
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (907, 200,0);
glVertex3f (907, 190,0);
glVertex3f (883, 190,0);
glVertex3f (883, 200, 0);
glEnd();

//bed side box front - box top
glColor3ub (128,55,36);
glBegin(GL_POLYGON);
glVertex3f (955, 265,0);
glVertex3f (955, 400,0);
glVertex3f (835, 405,0);
glVertex3f (835, 275, 0);
glEnd();

//bed side box front - box top - handel
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (907, 337.5,0);
glVertex3f (907, 327.5,0);
glVertex3f (883, 327.5,0);
glVertex3f (883, 337.5, 0);
glEnd();
//bed side box side
glColor3ub (113,55,34);
glBegin(GL_POLYGON);
glVertex3f (970, 435,0);
glVertex3f (960, 410, 0);
glVertex3f (960, 120,0);
glVertex3f (985, 140, 0);
glVertex3f (985, 430, 0);
glVertex3f (995, 460, 0);
glEnd();

//bed side box top
glColor3ub (192,99,82);
glBegin(GL_POLYGON);
glVertex3f (820, 435,0);
glVertex3f (970, 435,0);
glVertex3f (995, 460,0);
glVertex3f (845, 460,0);
glEnd();

//bed side box lamp base
glColor3ub (205,186,150);
glBegin(GL_POLYGON);
glVertex3f (875, 440,0);
glVertex3f (915, 440,0);
glVertex3f (910, 450,0);
glVertex3f (890, 450,0);
glEnd();

//bed side box lamp stand
//glColor3ub (77,49,26);
glColor3ub (165,42,42);
glBegin(GL_POLYGON);
glVertex3f (895, 445,0);
glVertex3f (905, 445,0);
glVertex3f (905, 550,0);
glVertex3f (895, 550,0);
glEnd();

//bed side box lamp
glColor3ub (238,173,14);
glBegin(GL_POLYGON);
glVertex3f (875, 650,0);
glVertex3f (925, 650,0);
glVertex3f (935, 550,0);
glVertex3f (865, 550,0);
glEnd();

//bed right papos - 1
glColor3ub (255,127,36);
glBegin(GL_POLYGON);
glVertex3f (705, 150, 0);
glVertex3f (570, 60, 0);
glVertex3f (680, 60, 0);
glVertex3f (815, 150, 0);
glEnd();


//bed right papos - 2
glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex3f (725, 150, 0);
glVertex3f (590, 60, 0);
glVertex3f (660, 60, 0);
glVertex3f (795, 150, 0);
glEnd();


//bed right papos - 2
glColor3ub (255,61,0);
glBegin(GL_POLYGON);
glVertex3f (725, 150, 0);
glVertex3f (590, 60, 0);
glVertex3f (660, 60, 0);
glVertex3f (795, 150, 0);
glEnd();

//bed right papos - 3
glColor3ub (57,73,171);
glBegin(GL_POLYGON);
glVertex3f (745, 150, 0);
glVertex3f (610, 60, 0);
glVertex3f (640, 60, 0);
glVertex3f (775, 150, 0);
glEnd();

//man sleeping
glColor3ub(255,148,148);
myCircle(30,700,400);

//body
glLineWidth(5);
glBegin(GL_LINES);
glVertex2f(700,400);
glVertex2f(610,310);
glEnd();

//bed blanket
glColor3ub (139,10,80);
glBegin(GL_POLYGON);
glVertex3f (550, 220, 0.0);
glVertex3f (280, 260, 0.0);
glVertex3f (460, 380, 0.0);
glVertex3f (720, 340, 0.0);
glEnd();
//hands
glLineWidth(4);
glColor3ub(255,148,148);
glBegin(GL_LINES);
glVertex2f (670, 370);
glVertex2f (590, 350);
glVertex2f (670, 370);
glVertex2f (650, 300);
glEnd();
myCircle(7,590, 350);
myCircle(7,650, 300);

glLineWidth(1);

 //start processing buffered OpenGL routines


   p = 1 - d;
    if (p<0)
    {
        gx = gx+1;
        hy = d;
        p = p + (2*gx)+1;
    }
    else
    {
        gx = gx + 1;
        hy = d - 1;
        p = p + (2*gx)+1-(2*hy) ;
    }
    ha = gx ;
       gb = hy ;
        glColor3f (1.0, 0.0, 0.0);

        glBegin(GL_POLYGON);
        glVertex2i (ha+hxc, gb+gyc);
        glVertex2i ( gb+hxc,ha+gyc);
        glVertex2i (ha+hxc,-1*gb+gyc);
        glVertex2i (-1*ha+hxc,gb+gyc);
        glVertex2i (-1*ha+hxc,-1*gb+gyc);
        glVertex2i ( gb+hxc,-1*ha+gyc);
        glVertex2i ( -1*gb+hxc,ha+gyc);
        glVertex2i ( -1*gb+hxc,-1*ha+gyc);
        glEnd();

        while(gx<hy)
     {

        if (p<0)
        {
            gx = gx+1;
            hy = hy;
            p = p + (2*gx)+1;
        }
        else
        {
            gx = gx + 1;
            hy = hy - 1;
            p = p + (2*gx)+1-(2*hy) ;
        }

        ha = gx ;
       gb = hy ;
        glColor3f (1.0, 0.0, 0.0);

        glBegin(GL_POLYGON);
        glVertex2i (ha+hxc, gb+gyc);
         glVertex2i ( gb+hxc,ha+gyc);
        glVertex2i (ha+hxc,-1*gb+gyc);
        glVertex2i (-1*ha+hxc,gb+gyc);
        glVertex2i (-1*ha+hxc,-1*gb+gyc);
        glVertex2i ( gb+hxc,-1*ha+gyc);
        glVertex2i ( -1*gb+hxc,ha+gyc);
        //glVertex2i ( -1*gb+hxc,-1*ha+gyc);
        glEnd();
     }

glFlush ();
glutPostRedisplay();
}
void init2(void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1000.0, 0.0, 1000.0, 0.0, 1000.0);
}
void drawDrawers(int y)
{
    glColor3ub(175,56,34);
    glBegin(GL_POLYGON);
    glVertex2f(82,y);
    glVertex2f(90.8,y);
    glVertex2f(90.8,y-7);
    glVertex2f(82,y-7);
    glEnd();

    glColor3ub(225,126,85);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(82,y-7);
    glVertex2f(82,y);
    glVertex2f(82,y);
    glVertex2f(90.8,y);
    glVertex2f(90.8,y);
    glVertex2f(90.8,y-7);
    glEnd();

    glColor3f(1,1,1);
    glPointSize(7);
    glBegin(GL_POINTS);
    glVertex2f(86.4,y-3.5);
    glEnd();

    //left side

}
void room()
{
    //top
    glColor3ub(128,128,128);
    glBegin(GL_POLYGON);
    glVertex2f(0,100);
    glVertex2f(100,100);
    glVertex2f(100,90);
    glVertex2f(0,90);
    glEnd();

    glColor3f(.25,.25,.25);
    glBegin(GL_POLYGON);
    glVertex2f(44,97);
    glVertex2f(55,97);
    glVertex2f(55,93);
    glVertex2f(44,93);
    glEnd();

    glColor3f(1,1,1);
    renderbitmap1(45,94.5,GLUT_BITMAP_9_BY_15,"LIVING ROOM");

    glColor3ub(224,164,176);
    glBegin(GL_POLYGON);
    glVertex2f(0,88);
    glVertex2f(100,87);
    glVertex2f(100,90);
    glVertex2f(0,90);
    glEnd();

    glColor3ub(250,199,208);
    glBegin(GL_POLYGON);
    glVertex2f(0,88);
    glVertex2f(100,87);
    glVertex2f(100,85);
    glVertex2f(0,85);
    glEnd();

    glColor3ub(188,88,38);
    glBegin(GL_POLYGON);
    glVertex2f(0,85);
    glVertex2f(100,85);
    glVertex2f(100,80);
    glVertex2f(0,83);
    glEnd();

    glColor3ub(219,116,58);
    glBegin(GL_POLYGON);
    glVertex2f(0,83);
    glVertex2f(100,80);
    glVertex2f(100,34);
    glVertex2f(0,34);
    glEnd();

    glColor3ub(233,229,192);
    glBegin(GL_POLYGON);
    glVertex2f(0,34);
    glVertex2f(100,34);
    glVertex2f(100,31);
    glVertex2f(0,31);
    glEnd();

    glColor3ub(207,187,141);
    glBegin(GL_POLYGON);
    glVertex2f(0,31);
    glVertex2f(100,31);
    glVertex2f(100,0);
    glVertex2f(0,0);
    glEnd();

    //window
    //upper stick
    glColor3ub(245,180,76);
    glBegin(GL_POLYGON);
    glVertex2f(35,80);
    glVertex2f(65,80);
    glVertex2f(65,79);
    glVertex2f(35,79);
    glEnd();

    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2f(35,79.5);
    glVertex2f(65,79.5);
    glEnd();

    //shadow
    glColor3ub(189,89,40);
    glBegin(GL_POLYGON);
    glVertex2f(40,79);
    glVertex2f(60,79);
    glVertex2f(60,78);
    glVertex2f(40,78);
    glEnd();

    //curtain-left
    glColor3ub(143,21,72);
    glBegin(GL_POLYGON);
    glVertex2f(36,79);
    glVertex2f(40,79);
    glVertex2f(39.5,34);
    glVertex2f(37,34);
    glEnd();

    //curtain shadow
    glLineWidth(6);
    glColor3ub(132,20,66);
    glBegin(GL_LINES);
    glVertex2f(39,79);
    glVertex2f(39,34);
    glVertex2f(37,79);
    glVertex2f(38,34);
    glEnd();

    //curtain-right
    glColor3ub(143,21,72);
    glBegin(GL_POLYGON);
    glVertex2f(60,79);
    glVertex2f(64,79);
    glVertex2f(63,34);
    glVertex2f(60.5,34);
    glEnd();

    //curtain shadow
    glLineWidth(6);
    glColor3ub(132,20,66);
    glBegin(GL_LINES);
    glVertex2f(63,79);
    glVertex2f(62,34);
    glVertex2f(61,79);
    glVertex2f(61,34);
    glEnd();

    //window glass
    //middle
    glColor3ub(161,217,244);
    glBegin(GL_POLYGON);
    glVertex2f(45,77.5);
    glVertex2f(55,77.5);
    glVertex2f(55,44);
    glVertex2f(45,44);
    glEnd();

    //left
    glColor3ub(161,217,244);
    glBegin(GL_POLYGON);
    glVertex2f(40,77.5);
    glVertex2f(44.5,77.5);
    glVertex2f(44.5,44);
    glVertex2f(39.5,44);
    glEnd();

    //right
    glColor3ub(161,217,244);
    glBegin(GL_POLYGON);
    glVertex2f(55.5,77.5);
    glVertex2f(60,77.5);
    glVertex2f(60.5,44);
    glVertex2f(55.5,44);
    glEnd();

    //glass shadow
    //middle
    glColor3ub(66,152,185);
    glBegin(GL_POLYGON);
    glVertex2f(45,77.5);
    glVertex2f(55,77.5);
    glVertex2f(55,73.5);
    glVertex2f(45,73.5);
    glEnd();

    //left
    glColor3ub(66,152,185);
    glBegin(GL_POLYGON);
    glVertex2f(40,77.5);
    glVertex2f(44.5,77.5);
    glVertex2f(44.5,73.5);
    glVertex2f(39.9,73.5);
    glEnd();

    //right
    glColor3ub(66,152,185);
    glBegin(GL_POLYGON);
    glVertex2f(55.5,77.5);
    glVertex2f(60,77.5);
    glVertex2f(60.1,73.5);
    glVertex2f(55.5,73.5);
    glEnd();

    //sofa
    //left legg
    glColor3ub(206,195,161);
    glBegin(GL_POLYGON);
    glVertex2f(37,44);
    glVertex2f(39,44);
    glVertex2f(39,29);
    glVertex2f(37,29);
    glEnd();

    glColor3ub(78,61,45);
    glBegin(GL_POLYGON);
    glVertex2f(37.5,29);
    glVertex2f(39,29);
    glVertex2f(39,28);
    glVertex2f(37.5,28);
    glEnd();

    //right leg
    glColor3ub(206,195,161);
    glBegin(GL_POLYGON);
    glVertex2f(61,44);
    glVertex2f(63,44);
    glVertex2f(63,29);
    glVertex2f(61,29);
    glEnd();

    glColor3ub(78,61,45);
    glBegin(GL_POLYGON);
    glVertex2f(61,29);
    glVertex2f(62.5,29);
    glVertex2f(62.5,28);
    glVertex2f(61,28);
    glEnd();

    //base
    //front
    glColor3ub(208,195,161);
    glBegin(GL_POLYGON);
    glVertex2f(39,30.5);
    glVertex2f(61,30.5);
    glVertex2f(61,33);
    glVertex2f(39,33);
    glEnd();

    glColor3ub(174,156,116);
    glBegin(GL_POLYGON);
    glVertex2f(39,33);
    glVertex2f(61,33);
    glVertex2f(61,34);
    glVertex2f(39,34);
    glEnd();

    glColor3ub(194,181,137);
    glBegin(GL_POLYGON);
    glVertex2f(39,34);
    glVertex2f(61,34);
    glVertex2f(61,37);
    glVertex2f(39,37);
    glEnd();

    //middle
    glColor3ub(242,235,219);
    glBegin(GL_POLYGON);
    glVertex2f(39,37);
    glVertex2f(61,37);
    glVertex2f(59,41);
    glVertex2f(41,41);
    glEnd();

    //middle back
    glColor3ub(205,195,160);
    glBegin(GL_POLYGON);
    glVertex2f(41,41);
    glVertex2f(59,41);
    glVertex2f(59,47);
    glVertex2f(41,47);
    glEnd();

    glColor3ub(243,236,220);
    glBegin(GL_POLYGON);
    glVertex2f(41,47);
    glVertex2f(41,49);
    glVertex2f(59,49);
    glVertex2f(59,47);
    glEnd();

    //left hand
    glColor3ub(155,133,92);
    glBegin(GL_POLYGON);
    glVertex2f(39,37);
    glVertex2f(41,41);
    glVertex2f(41,46);
    glVertex2f(39,44);
    glEnd();

    glColor3ub(243,236,220);
    glBegin(GL_POLYGON);
    glVertex2f(36,44);
    glVertex2f(39,44);
    glVertex2f(41,46);
    glVertex2f(41,49);
    glEnd();

    glColor3ub(232,220,194);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(36.6,44);
    glVertex2f(36.6,29);
    glEnd();

    //right hand
    glColor3ub(155,133,92);
    glBegin(GL_POLYGON);
    glVertex2f(61,37);
    glVertex2f(59,41);
    glVertex2f(59,46);
    glVertex2f(61,44);
    glEnd();

    glColor3ub(243,236,220);
    glBegin(GL_POLYGON);
    glVertex2f(61,44);
    glVertex2f(64,44);
    glVertex2f(59,49);
    glVertex2f(59,46);
    glEnd();

    glColor3ub(232,220,194);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(63.4,44);
    glVertex2f(63.4,29);
    glEnd();

    //man reading newspaper
    //newspapaer
    glColor3ub(212,212,212);
    glBegin(GL_POLYGON);
    glVertex2f(41.5,50);
    glVertex2f(44,48);
    glVertex2f(44,40);
    glVertex2f(41.5,42);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(44,48);
    glVertex2f(46.5,50);
    glVertex2f(46.5,42);
    glVertex2f(44,40);
    glEnd();

    glColor3ub(169,169,169);
    glLineWidth(1);
    for(float i=49.5;i>42;i-=1)
    {
        glBegin(GL_LINES);
        glVertex2f(41.5,i);
        glVertex2f(44,i-2);
        glEnd();
    }
     for(float i=49.5;i>42;i-=1)
    {
        glBegin(GL_LINES);
        glVertex2f(46.5,i);
        glVertex2f(44,i-2);
        glEnd();
    }

    //man
    //head
     glColor3ub(255,148,148);
     myCircle(2,44,51);
     //neck
     glLineWidth(3);
     glBegin(GL_LINES);
     glVertex2f(44,49);
     glVertex2f(44,48);
     glEnd();
     //hands
     myCircle(.5,41.5,46);
     myCircle(.5,46.5,46);
     //legs
     glLineWidth(3);
     //glColor3ub(0,0,139);
     glBegin(GL_LINES);
     glVertex2f(44,40);
     glVertex2f(45,37);
     glVertex2f(45,37);
     glVertex2f(45,32);
     glVertex2f(44,40);
     glVertex2f(43,37);
     glVertex2f(43,37);
     glVertex2f(43,32);
     glEnd();
     glColor3ub(255,148,148);
     myCircle(.5,43,32.5);
     myCircle(.5,45,32.5);

     //man drinking coffee
     myCircle(2,54,51);
     glBegin(GL_LINES);
     //body
     glVertex2f(54,49);
     glVertex2f(54,41);
     //left hand
     glVertex2f(54,48);
     glVertex2f(56.5,45);
     glVertex2f(56.5,45);
     glVertex2f(54,42);
     //right hand
     glVertex2f(54,48);
     glVertex2f(51.5,45);
     glVertex2f(51.5,45);
     glVertex2f(53.5,handposition);
     //legs
     glVertex2f(54,41);
     glVertex2f(55,37);
     glVertex2f(55,37);
     glVertex2f(55,32);
     glVertex2f(54,41);
     glVertex2f(53,37);
     glVertex2f(53,37);
     glVertex2f(53,32);
     glEnd();
     myCircle(.5,53,32.5);
     myCircle(.5,55,32.5);
     glColor3ub(227,184,50);
     DrawEllipse(54,42,1.5,.5,30);
     glColor3f(1,1,1);
     DrawEllipse(54,42,.75,.25,30);

     glColor3ub(246,246,154);
     glPointSize(15);
     glBegin(GL_POINTS);
     glVertex2f(54,handposition);
     glEnd();
     glPointSize(7);
     glColor3ub(255,148,148);
     glBegin(GL_POINTS);
     glVertex2f(53.5,handposition);
     glEnd();
     glPointSize(1);

     if(handposition>=49){
        handdir=-1;
        Sleep(500);
     }
     if(handposition<43){
        handdir=1;
        Sleep(500);
     }
     handposition+=.2*handdir;

    //right side of the room
    //shelf
    glColor3ub(172,60,38);
    glBegin(GL_POLYGON);
    glVertex2f(67,65);
    glVertex2f(79,65);
    glVertex2f(79,66);
    glVertex2f(67,66);
    glEnd();

    glColor3ub(55,19,23);
    glBegin(GL_POLYGON);
    glVertex2f(69,65);
    glVertex2f(70,65);
    glVertex2f(70,62);
    glVertex2f(69.5,62);
    glEnd();

    glColor3ub(55,19,23);
    glBegin(GL_POLYGON);
    glVertex2f(77,65);
    glVertex2f(76,65);
    glVertex2f(76,62);
    glVertex2f(76.5,62);
    glEnd();

    //books on the shelf
    glColor3ub(149,48,36);
    glBegin(GL_POLYGON);
    glVertex2f(70,66);
    glVertex2f(76,66);
    glVertex2f(76,71);
    glVertex2f(70,71);
    glEnd();

    glColor3ub(243,197,59);
    glBegin(GL_POLYGON);
    glVertex2f(70,70);
    glVertex2f(76,70);
    glVertex2f(76,69);
    glVertex2f(70,69);
    glEnd();

    glColor3ub(214,102,88);
    glLineWidth(2);
    for(int i=71;i<76; i++)
    {
        glBegin(GL_LINES);
        glVertex2f(i,71);
        glVertex2f(i,66);
        glEnd();
    }

    //photo
    glColor3ub(124,59,31);
    glLineWidth(7);
    glBegin(GL_LINE_LOOP);
    glVertex2f(70,58);
    glVertex2f(76,58);
    glVertex2f(76,50);
    glVertex2f(70,50);
    glEnd();

    glColor3ub(0,128,0);
    glBegin(GL_POLYGON);
    glVertex2f(70.25,50.45);
    glVertex2f(75.75,50.45);
    glVertex2f(75.75,53.5);
    glVertex2f(70.25,53);
    glEnd();

    glColor3ub(0,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(70.25,57.6);
    glVertex2f(75.75,57.6);
    glVertex2f(75.75,53.5);
    glVertex2f(70.25,53);
    glEnd();

    glColor3ub(255,255,0);
    myCircle(.75,73,56);



    //drawer
    glColor3ub(167,59,31);
    glBegin(GL_POLYGON);
    glVertex2f(80,57);
    glVertex2f(93,57);
    glVertex2f(93,55);
    glVertex2f(80,55);
    glEnd();

    glColor3ub(144,25,21);
    glBegin(GL_POLYGON);
    glVertex2f(80.7,55);
    glVertex2f(92.3,55);
    glVertex2f(91.1,29);
    glVertex2f(81.5,29);
    glEnd();

    glColor3ub(66,23,7);
    glBegin(GL_POLYGON);
    glVertex2f(82,29);
    glVertex2f(84,29);
    glVertex2f(84,28);
    glVertex2f(82,28);
    glEnd();

    glColor3ub(66,23,7);
    glBegin(GL_POLYGON);
    glVertex2f(90.8,29);
    glVertex2f(88.8,29);
    glVertex2f(88.8,28);
    glVertex2f(90.8,28);
    glEnd();

    drawDrawers(53);
    drawDrawers(45);
    drawDrawers(37);

    //left side
    //body
    glColor3ub(125,23,21);
    glBegin(GL_POLYGON);
    glVertex2f(12,29);
    glVertex2f(27,29);
    glVertex2f(27,75);
    glVertex2f(12,75);
    glEnd();

    //top
    glColor3ub(127,20,21);
    glBegin(GL_POLYGON);
    glVertex2f(11,75);
    glVertex2f(28,75);
    glVertex2f(28.5,76);
    glVertex2f(10.5,76);
    glEnd();

    glColor3ub(174,54,37);
    glBegin(GL_POLYGON);
    glVertex2f(10,76);
    glVertex2f(29,76);
    glVertex2f(29,78);
    glVertex2f(10,78);
    glEnd();

    //top shadow
    glColor3ub(104,18,21);
    glBegin(GL_POLYGON);
    glVertex2f(12,75);
    glVertex2f(27,75);
    glVertex2f(27,73);
    glVertex2f(12,73);
    glEnd();

    //bottom
    glColor3ub(175,56,36);
    glBegin(GL_POLYGON);
    glVertex2f(11.7,30);
    glVertex2f(27.3,30);
    glVertex2f(27.3,32);
    glVertex2f(11.7,32);
    glEnd();

    //left part
    glColor3ub(81,112,159);
    glBegin(GL_POLYGON);
    glVertex2f(13,72);
    glVertex2f(18.5,72);
    glVertex2f(18.5,41);
    glVertex2f(13,41);
    glEnd();

    //separator
    glColor3ub(164,42,41);
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(19.5,72);
    glVertex2f(19.5,41);
    glEnd();

    //right part
    glColor3ub(81,112,159);
    glBegin(GL_POLYGON);
    glVertex2f(20.5,72);
    glVertex2f(26,72);
    glVertex2f(26,41);
    glVertex2f(20.5,41);
    glEnd();

    glPointSize(5);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2f(18.8,56.5);
    glVertex2f(20.2,56.5);
    glEnd();


    //bottom part
    glColor3ub(164,42,44);
    glBegin(GL_POLYGON);
    glVertex2f(13,39);
    glVertex2f(26,39);
    glVertex2f(26,34);
    glVertex2f(13,34);
    glEnd();

    glLineWidth(5);
    glColor3ub(198,85,77);
    glBegin(GL_LINES);
    glVertex2f(13,39);
    glVertex2f(13,34);
    glVertex2f(13,39);
    glVertex2f(26,39);
    glVertex2f(26,39);
    glVertex2f(26,34);
    glEnd();

    glPointSize(7);
    glColor3f(1,1,1);
    glBegin(GL_POINTS);
    glVertex2f(19.5,36.5);
    glEnd();

    //floor mat
    glColor3ub(190,39,70);
    DrawEllipse(50,18,18,8,30);
    glColor3ub(163,26,56);
    DrawEllipse(50,18,14,6,30);
    glColor3ub(190,39,70);
    DrawEllipse(50,18,10,4,30);

    glFlush();
    glutPostRedisplay();
    delay();
}
int flag=0;
static float cloud1 = -20;
static float cloud2 = -60;
static float cloud3 = -80;
static float cloud4 = -110;
static float cloud5 = -130;
int door=1;
void renderbitmap(float x, float y, void *font, char *string);
void delay(){
    for(int i=0;i<100000000;i++);
}
void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}

void cloudMove()
{
    cloud1 += .7;
    if(cloud1 > 200){
        cloud1 = -20;
    }
    glutPostRedisplay();
    cloud2 += .5;
    if(cloud2 > 200){
        cloud2 = -60;
    }
    glutPostRedisplay();
    cloud3 += .5;
    if(cloud3 > 200){
        cloud3 = -80;
    }
    glutPostRedisplay();
    cloud4 += .4;
    if(cloud4 > 200){
        cloud4 = -110;
    }
    glutPostRedisplay();
    glutPostRedisplay();
    cloud5 += .5;
    if(cloud5 > 200){
        cloud4 = -130;
    }
    glutPostRedisplay();
}



static float orange1= 0;
static float orange2= 1;
static float orange3= 1;
static float orange4= 0;
static float orange5= 1;
static float orange6= 1;

void Orange()
{
    orange1 -= .5;
    if(orange1<-29){
        orange1=0;
    }
    orange2 -= .5;
    if(orange2<-30){
        orange2=0;
    }
    orange3 -= .5;
    if(orange3<-30){
        orange3=0;
    }orange4 -= .5;
    if(orange4<-30){
        orange4=0;
    }
    orange5 -= .3;
    if(orange5<-30){
        orange5=0;
    }
    orange6 -= .3;
    if(orange6<-30){
        orange6=0;
    }
    glutPostRedisplay();
}
void orangeFall()
{
    glColor3ub(255,69,0);
    Orange();
    glPushMatrix();
        glTranslated(0, orange1, 0);
        circle(.5,1,33,37);
            glPopMatrix();
    glPushMatrix();
        glTranslated(0, orange2, 0);
        circle(.5,1,35,39);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0, orange3, 0);
        circle(.5,1,38,41);
        //circle(.5,1,41,39);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0, orange4, 0);
        circle(.5,1,41,39);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0, orange5, 0);
        circle(.5,1,43,41);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0, orange6, 0);
        circle(.5,1,45,39);
    glPopMatrix();
}

void tree1(float x1, float y1)
{
    float x2 = x1+4,y2=y1, x3=x1+2,y3=y1+5;
    glColor3ub(11, 70, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+1.5, y1);
        glVertex2d(x1, y1-4);
        glVertex2d(x2, y1-4);
        glVertex2d(x2-1.5, y1);

        glVertex2d(x1+1.5, y1-4);
        glVertex2d(x1, y1-8);
        glVertex2d(x2, y1-8);
        glVertex2d(x2-1.5, y1-4);
        glColor3ub(68, 43, 2);
        glVertex2d(x1+1.5, y1-8);
        glVertex2d(x1+1, y1-14);
        glVertex2d(x2-1, y1-14);
        glVertex2d(x2-1.5, y1-8);
    glEnd();
}

void tree2(float x1, float y1)
{
    float x2 = x1+5,y2=y1, x3=x1+2.5,y3=y1+6;
    glColor3ub(11, 50, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+2, y1);
        glVertex2d(x1, y1-5);
        glVertex2d(x2, y1-5);
        glVertex2d(x2-2, y1);

        glVertex2d(x1+2, y1-5);
        glVertex2d(x1, y1-10);
        glVertex2d(x2, y1-10);
        glVertex2d(x2-2, y1-5);
        glColor3ub(68, 43, 2);
        glVertex2d(x1+2, y1-10);
        glVertex2d(x1+1.5, y1-18);
        glVertex2d(x2-1.5, y1-18);
        glVertex2d(x2-2, y1-10);
    glEnd();
}

void tree3(float x1, float y1)
{
    float x2 = x1+2,y2=y1, x3=x1+1,y3=y1+3;
    glColor3ub(11, 70, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+.5, y1);
        glVertex2d(x1, y1-3);
        glVertex2d(x2, y1-3);
        glVertex2d(x2-.5, y1);

        glVertex2d(x1+.5, y1-3);
        glVertex2d(x1, y1-6);
        glVertex2d(x2, y1-6);
        glVertex2d(x2-.5, y1-3);

        glVertex2d(x1+.5, y1-6);
        glVertex2d(x1, y1-9);
        glVertex2d(x2, y1-9);
        glVertex2d(x2-.5, y1-6);

        glVertex2d(x1+.5, y1-9);
        glVertex2d(x1, y1-12);
        glVertex2d(x2, y1-12);
        glVertex2d(x2-.5, y1-9);

        glColor3ub(68, 43, 2);
        glColor3ub(68, 43, 2);
        glVertex2d(x1+.7, y1-12);
        glVertex2d(x1+.4, y1-20);
        glVertex2d(x2-.4, y1-20);
        glVertex2d(x2-.7, y1-12);
    glEnd();
}


void tree4(float x1, float y1)
{
    float x2 = x1+2,y2=y1, x3=x1+1,y3=y1+2;
    glColor3ub(11, 70, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+.5, y1);
        glVertex2d(x1, y1-2);
        glVertex2d(x2, y1-2);
        glVertex2d(x2-.5, y1);

        glVertex2d(x1+.5, y1-2);
        glVertex2d(x1, y1-4);
        glVertex2d(x2, y1-4);
        glVertex2d(x2-.5, y1-2);

        glVertex2d(x1+.5, y1-4);
        glVertex2d(x1, y1-6);
        glVertex2d(x2, y1-6);
        glVertex2d(x2-.5, y1-4);

        glVertex2d(x1+.5, y1-6);
        glVertex2d(x1, y1-8);
        glVertex2d(x2, y1-8);
        glVertex2d(x2-.5, y1-6);

        glVertex2d(x1+.5, y1-8);
        glVertex2d(x1, y1-10);
        glVertex2d(x2, y1-10);
        glVertex2d(x2-.5, y1-8);

        glColor3ub(68, 43, 2);
        glVertex2d(x1+.7, y1-10);
        glVertex2d(x1+.5, y1-17);
        glVertex2d(x2-.5, y1-17);
        glVertex2d(x2-.7, y1-10);
    glEnd();
}
void house1(int x, int y)
{
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(x, y);//2.60
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+4,y-2);//6,58
    glEnd();

    glColor3f(1,0.7,.11);
    glBegin(GL_QUADS);
        //wall right
        glColor3f(.19,0.3,.30);
        glVertex2f(x+3.5, y-7);//55,53
        glVertex2f(x+7.3, y-4.5);//9.3,55.5
        glVertex2f(x+7.3, y-1);//9.3,59
        glVertex2f(x+3.5, y-1.5);//5.5,58.5
        //door
        glColor3f(.9,0.9,0.90);
        glVertex2f(x+5.5,y-5.5);//7.5,54.5
        glVertex2f(x+6.25,y-5);//8.25,55
        glVertex2f(x+6.25,y-2.5);//8.25,57.5
        glVertex2f(x+5.5,y-2.5);//7.5,57.5

        //right roof
        glColor3f(1,0.7,.11);
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+6,y+5);//8,65
        glVertex2d(x+8,y-1);//10,59
        glVertex2d(x+4,y-2);//6,58

        //wall left
        glColor3f(.91,0.3,.31);
        glVertex2f(x +0.3, y-5);//2.3,55
        glVertex2f(x + 3.5, y-7);//5.5,53
        glVertex2f(x + 3.5, y-1.5);//5.5,58.5
        glVertex2f(x+0.5, y);//2.5,60

        //window left
        glColor3f(1,1,1);
        glVertex2f(x+1.5,y-3.5); //3.5,56.5
        glVertex2f(x+2.2,y-4);//4.2,56
        glVertex2f(x+2.2,y-1.7);//4.2,58.3
        glVertex2f(x+1.5,y-1.3);//3.5,58.7

        //strip
        glColor3f(0,0,0);
        glVertex2f(x+1.8,y-3.8); //3.5,56.5
        glVertex2f(x+1.85,y-4);//4.2,56
        glVertex2f(x+1.85,y-1.8);//4.2,58.3
        glVertex2f(x+1.8,y-1.4);//3.5,58.7

        //horizontal
        glVertex2f(x+1.5,y-2.8); //3.5,56.5
        glVertex2f(x+2.2,y-2.8);//4.2,56
        glVertex2f(x+2.2,y-2.7);//4.2,58.3
        glVertex2f(x+1.5,y-2.7);//3.5,58.7

        //door strip
        glVertex2f(x+5.85,y-5.5);//7.5,54.5
        glVertex2f(x+5.9,y-5);//8.25,55
        glVertex2f(x+5.9,y-2.5);//8.25,57.5
        glVertex2f(x+5.85,y-2.5);//7.5,57.5

    glEnd();
}

void house2(int x, int y)
{
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(x, y);//2.60
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+4,y-2);//6,58
    glEnd();

    glColor3f(1,0.7,.11);
    glBegin(GL_QUADS);
        //wall right
        glColor3f(.3,0.1,.30);
        glVertex2f(x+3.5, y-7);//55,53
        glVertex2f(x+7.3, y-4.5);//9.3,55.5
        glVertex2f(x+7.3, y-1);//9.3,59
        glVertex2f(x+3.5, y-1.5);//5.5,58.5
        //door
        glColor3f(1,0.44,0.40);
        glVertex2f(x+5.5,y-5.5);//7.5,54.5
        glVertex2f(x+6.25,y-5);//8.25,55
        glVertex2f(x+6.25,y-2.5);//8.25,57.5
        glVertex2f(x+5.5,y-2.5);//7.5,57.5
        //right roof
        glColor3f(1,0.4,.31);
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+6,y+5);//8,65
        glVertex2d(x+8,y-1);//10,59
        glVertex2d(x+4,y-2);//6,58
        //wall left
        glColor3f(.41,0.5,.31);
        glVertex2f(x +0.3, y-5);//2.3,55
        glVertex2f(x + 3.5, y-7);//5.5,53
        glVertex2f(x + 3.5, y-1.5);//5.5,58.5
        glVertex2f(x+0.5, y);//2.5,60

        //window left
        glColor3f(1,.0,.1);
        glVertex2f(x+1.5,y-3.5); //3.5,56.5
        glVertex2f(x+2.2,y-4);//4.2,56
        glVertex2f(x+2.2,y-1.7);//4.2,58.3
        glVertex2f(x+1.5,y-1.3);//3.5,58.7

         //strip
        glColor3f(0,0,0);
        glVertex2f(x+1.8,y-3.8); //3.5,56.5
        glVertex2f(x+1.85,y-4);//4.2,56
        glVertex2f(x+1.85,y-1.8);//4.2,58.3
        glVertex2f(x+1.8,y-1.4);//3.5,58.7


        //horizontal
        glVertex2f(x+1.5,y-2.8); //3.5,56.5
        glVertex2f(x+2.2,y-2.8);//4.2,56
        glVertex2f(x+2.2,y-2.7);//4.2,58.3
        glVertex2f(x+1.5,y-2.7);//3.5,58.7

        //door strip
        glVertex2f(x+5.85,y-5.5);//7.5,54.5
        glVertex2f(x+5.9,y-5);//8.25,55
        glVertex2f(x+5.9,y-2.5);//8.25,57.5
        glVertex2f(x+5.85,y-2.5);//7.5,57.5

    glEnd();
}

void house3(int x, int y)
{
        glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(x, y);//2.60
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+4,y-2);//6,58
    glEnd();

    glColor3f(1,0.7,.11);
    glBegin(GL_QUADS);
        //wall right
        glColor3f(.19,0.3,.30);
        glVertex2f(x+3.5, y-7);//55,53
        glVertex2f(x+7.3, y-4.5);//9.3,55.5
        glVertex2f(x+7.3, y-1);//9.3,59
        glVertex2f(x+3.5, y-1.5);//5.5,58.5

        //door
        if(door==1){
        glColor3f(1,0,0);
        }
        else
        {
            glColor3f(1,1,1);
        }
        glVertex2f(x+5.5,y-5.5);//7.5,54.5
        glVertex2f(x+6.25,y-5);//8.25,55
        glVertex2f(x+6.25,y-2.5);//8.25,57.5
        glVertex2f(x+5.5,y-2.5);//7.5,57.5

        //right roof
        glColor3f(1,0.7,.11);
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+6,y+5);//8,65
        glVertex2d(x+8,y-1);//10,59
        glVertex2d(x+4,y-2);//6,58

        //wall left
        glColor3f(.91,0.3,.31);
        glVertex2f(x +0.3, y-5);//2.3,55
        glVertex2f(x + 3.5, y-7);//5.5,53
        glVertex2f(x + 3.5, y-1.5);//5.5,58.5
        glVertex2f(x+0.5, y);//2.5,60

        //window left
        glColor3f(1,1,1);
        glVertex2f(x+1.5,y-3.5); //3.5,56.5
        glVertex2f(x+2.2,y-4);//4.2,56
        glVertex2f(x+2.2,y-1.7);//4.2,58.3
        glVertex2f(x+1.5,y-1.3);//3.5,58.7

        //strip
        glColor3f(0,0,0);
        glVertex2f(x+1.8,y-3.8); //3.5,56.5
        glVertex2f(x+1.85,y-4);//4.2,56
        glVertex2f(x+1.85,y-1.8);//4.2,58.3
        glVertex2f(x+1.8,y-1.4);//3.5,58.7

        //horizontal
        glVertex2f(x+1.5,y-2.8); //3.5,56.5
        glVertex2f(x+2.2,y-2.8);//4.2,56
        glVertex2f(x+2.2,y-2.7);//4.2,58.3
        glVertex2f(x+1.5,y-2.7);//3.5,58.7

        //door strip
        if(door==1){
        glColor3f(0,0,0);
        }
        else{
            glColor3f(1,1,1);
        }
        glVertex2f(x+5.85,y-5.5);//7.5,54.5
        glVertex2f(x+5.9,y-5);//8.25,55
        glVertex2f(x+5.9,y-2.5);//8.25,57.5
        glVertex2f(x+5.85,y-2.5);//7.5,57.5

    glEnd();
}

void river()
{
    if(night==0)
        glColor3ub(1, 42, 104);
    else
        glColor3ub(36, 51, 94);

    circle(3,5,77.5,50);
    circle(3,5,78,42);
    circle(3,5,78.5,35);
    circle(3,5,79.5,27);
    circle(3,5,80,20);
    circle(3,5,80.5,14);
    circle(3,5,80.5,7);


    glBegin(GL_QUADS);
        glVertex2d(75, 55);
        glVertex2d(80, 0);
        glVertex2d(100, 0);
        glVertex2d(100, 55);

    glEnd();

}

void rightTriangle(float x, float y, float distance,float height)
{
    glBegin(GL_TRIANGLES);
        glVertex2d(x,y);
        glVertex2d(x+.5,y-distance);
        glVertex2d(x-height,(y+y-distance)/2);
    glEnd();
}

void leftTriangle(float x, float y, float distance,float height)
{
    glBegin(GL_TRIANGLES);
        glVertex2d(x,y);
        glVertex2d(x,y-distance);
        glVertex2d(x+height,(y+y-distance)/2);
    glEnd();
}
void road()
{
    glColor3f(1, 1, 1);
    glColor3ub(132,129,129);
    glBegin(GL_QUADS);
        glVertex2d(75, 0);
        glVertex2d(70, 60);
        glVertex2d(60, 60);
        glVertex2d(60, 0);
    glEnd();

    // right side footpath
    glBegin(GL_POLYGON);
     glColor3ub(22, 58, 21);
        glVertex2d(70, 60);
        glVertex2d(75, 55);
        glVertex2d(80, 0);
        glVertex2d(75, 0);
    glEnd();

    //left side marking
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
        glVertex2d(60.85, 0);
        glVertex2d(60.85, 60);
        glVertex2d(60.7, 60);
        glVertex2d(60.7, 0);
    glEnd();

    //right side marking
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
        glVertex2d(74.35, 0);
        glVertex2d(69.3, 60);
        glVertex2d(69.2, 60);
        glVertex2d(74.15, 0);
    glEnd();


    //middle marking
     glBegin(GL_QUADS);
        glVertex2d(67.3, 0);
        glVertex2d(65.2, 60);
        glVertex2d(65.1, 60);
        glVertex2d(67.15, 0);
    glEnd();

}

void movingCloud()
{
    glColor3f(1,1,1);
    cloudMove();
    glPushMatrix();
        glTranslatef(cloud1,1,0);
        circle(3,5,5,88);
        circle(3,5,8,91);
        circle(3,5,12,92);
        circle(3,5,12,87);
        circle(3,5,7,85);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(cloud2,-2,0);
        circle(3,5,30,88);
        circle(3,5,33,91);
        circle(3,5,37,92);
        circle(3,5,37,87);
        circle(3,5,32,85);

    glPopMatrix();

    glPushMatrix();
        glTranslatef(cloud3,-3,0);
        circle(3,5,5,88);
        circle(3,5,8,91);
        circle(3,5,12,92);
        circle(3,5,12,87);
        circle(3,5,7,85);

    glPopMatrix();
    glPushMatrix();
        glTranslatef(cloud4,1,0);
        circle(3,5,30,88);
        circle(3,5,33,91);
        circle(3,5,37,92);
        circle(3,5,37,87);
        circle(3,5,32,85);

    glPopMatrix();

    glPushMatrix();
        glTranslatef(cloud5,1,0);
        circle(3,5,5,88);
        circle(3,5,8,91);
        circle(3,5,12,92);
        circle(3,5,12,87);
        circle(3,5,7,85);
    glPopMatrix();

}
void sky()
{
    glColor3ub(14, 138, 239);
    glBegin(GL_POLYGON);
        glVertex2d(0,60);
        glVertex2d(0, 100);
        glVertex2d(100, 100);
        glVertex2d(100, 60);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(70,60);
        glVertex2d(75,55);
        glVertex2d(100,55);
        glVertex2d(100,60);
    glEnd();

    glColor3ub(255, 0, 0);
    circle(4,9,75,85);
    //cloud left to right
    glColor3f(1, 1, 1);

    //horizontal flying cloud
    movingCloud();

}
void homes()
{
    if(night==0)
        glColor3ub(22, 49, 22);
    else
        glColor3ub(0,30, 0);
    glBegin(GL_POLYGON);
        glVertex2d(0,60);
        glVertex2d(60,60);
        glVertex2d(60,0);
        glVertex2d(0,0);
    glEnd();

    if(night==0)
        glColor3ub(22, 49, 22);
    else
        glColor3ub(22, 49, 22);
    circle(2,3,8,60);
    circle(2,3,11,60);
    circle(1,2,13,60);


    circle(1,2,28,60);
    circle(2,3,30.5,60);
    circle(2,3,33.5,60);

    circle(1,2,51,60);
    circle(2,3,53.5,60);
    circle(2,3,56.5,60);


    //footpath in the village #1
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(0,46);
    glVertex2d(0,42);
    glColor3ub(40, 40, 39);
    glVertex2d(60,42);
    glVertex2d(60,46);

    glVertex2d(60,42);
    glVertex2d(60,41.6);
    glVertex2d(60,41.6);
    glVertex2d(60,42);

    glColor3ub(33, 32, 30);
    glVertex2d(0,42);
    glVertex2d(0,41);
    glVertex2d(60,41);
    glVertex2d(60,42);
    glEnd();

    //footpath in the village #2
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(0,26);
    glVertex2d(0,22);
    glColor3ub(40, 40, 39);
    glVertex2d(60,22);
    glVertex2d(60,26);

    glVertex2d(60,22);
    glVertex2d(60,21.6);
    glVertex2d(60,21.6);
    glVertex2d(60,22);

    glColor3ub(33, 32, 30);
    glVertex2d(0,22);
    glVertex2d(0,21);
    glVertex2d(60,21);
    glVertex2d(60,22);
    glEnd();

    //footpath in the village #3
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(0,7);
    glVertex2d(0,4);
    glColor3ub(40, 40, 39);
    glVertex2d(60,4);
    glVertex2d(60,7);

    glVertex2d(60,4);
    glVertex2d(60,3.6);
    glVertex2d(60,3.6);
    glVertex2d(60,4);
    glColor3ub(33, 32, 30);
    glBegin(GL_QUADS);
    glVertex2d(0,4);
    glVertex2d(0,3);
    glVertex2d(60,3);
    glVertex2d(60,4);
    glEnd();


    house1(7,55);
    house2(27,55);
    house1(50,55);
    house1(4,35);
    house2(23,35);
    house1(47,35);
    house1(1.5,15);
    house2(21,15);
    house3(44,15);
    //house1(44,15);

    //2
    glColor3ub(68, 83, 2);
    circle(1,1,6,55);
    tree3(5,75);


    //trees 1
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,4,49);
    tree1(2,63);


    //3
    glColor3ub(68, 83, 2);
    circle(1,1,16,55);
    tree3(15,75);

    //4
    glColor3ub(68, 83, 2);
    circle(0,1.5,18.5,49);
    tree2(16,67);
    //5
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,24,49);
    tree1(22,63);
    //6
    glColor3ub(68, 83, 2);
    circle(1,1,27,57);
    tree3(26,77);

    //7
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,37.5,49);
    tree2(35,67);
    //8
    glColor3ub(68, 83, 2);
    circle(1,1,41,55);
    tree3(40,75);
    //9
    glColor3ub(68, 83, 2);
    circle(1,1,45,55);
    tree3(44,75);

    //10
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,48.5,49);
    tree2(46,67);
    //11
    glColor3ub(68, 83, 2);
    circle(1,1,59,50);
    tree3(58,70);

    //12 other side of rail
    glColor3ub(68, 83, 2);
    circle(1,1,72,54);
    tree4(71,71);

    //second row 12
    glColor3ub(68, 83, 2);
    circle(1,1,2.5,35);
    tree3(1.5,55);

    //13
    glColor3ub(68, 83, 2);
    circle(1,1,7,40.5);
    tree4(6,57);
    //14
    glColor3ub(68, 83, 2);
    circle(1,1,12,37.5);
    tree4(11,54);
    //15
    glColor3ub(68, 83, 2);
    circle(1,1,17,32);
    tree3(16,52);
    //16
    glColor3ub(68, 83, 2);
    circle(1,1,20.5,38);
    tree3(19.5,58);


    //16
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,14.5,27.5);
    tree2(12,45);
    //17
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,22.5,27.5);
    tree2(20,45);
    //18
    glColor3ub(68, 83, 2);
    circle(1,1,31,37);
    tree4(30,54);

    //##
    glColor3ub(68, 83, 2);
    tree4(35,54);
    //#
    glColor3ub(68, 83, 2);
    tree4(42,54);

    //19
    glColor3ub(68, 83, 2);
    circle(1,1,47,38);
    tree3(46,58);

    //20
    glColor3ub(68, 83, 2);
    circle(1,1,56,33);
    tree3(55,53);

    //21
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,58,27.5);
    tree2(55.5,45);
    //third row

    //22
    glColor3ub(68, 83, 2);
    circle(1,1,3.8,20.5);
    tree4(2.8,37);

    //23
    glColor3ub(68, 83, 2);
    circle(1,1,10,13.5);
    tree4(9,30);

    //24
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,13,9);
    tree1(11,23);
    //25
    glColor3ub(68, 83, 2);
    circle(1,1,16,15);
    tree3(15,35);

    //26
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,19.5,8.5);
    tree2(17,26);

    //27
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,30,9);
    tree1(28,23);

    //28
    glColor3ub(68, 83, 2);
    circle(1,1,34,9);
    tree3(33,29);

    //28
    glColor3ub(68, 83, 2);
    circle(1,1,44,19);
    tree3(43,39);

    //29
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,53.5,8.5);
    tree2(51,26);

    //30
    glColor3ub(68, 83, 2);
    circle(1,1,59,10);
    tree3(58,30);
    //

    //big tree
    //root
    glColor3ub(68, 83, 2);
    circle(3.5,3,40,12);

    //body
    glColor3ub(68, 43, 2);
    glBegin(GL_QUADS);
        glVertex2d(39,36);
        glVertex2d(41,36);
        glVertex2d(42,11);
        glVertex2d(38,11);
    glEnd();

    //leaves
    glColor3ub(11, 70, 11);
    circle(3,4,35,37);
    circle(3,4,38,39);
    circle(3,4,40,37);
    circle(3,4,43,39);
    circle(3,4,44,35);
    circle(3,4,44,31);
    circle(3,4,40,33);
    circle(3,4,37,32);
    circle(3,4,35,34);

    //fruits
    glColor3ub(255, 69, 0);
    circle(.5,1,33,37);
    circle(.5,1,35,39);
    circle(.5,1,38,41);
    circle(.5,1,41,39);
    circle(.5,1,43,41);
    circle(.5,1,45,39);
    circle(.5,1,46,35);
    circle(.5,1,45,31);
    circle(.5,1,43,35);
    circle(.5,1,40,35);
    circle(.5,1,37,36);
    circle(.5,1,34,33);
    circle(.5,1,36,32);

}
void myCircle(float r,float x, int y)
{
    glBegin(GL_POLYGON);
    for(int i=0;i<=360;i++)
    {
        float theta = i * 3.1428/180;
        glVertex2f(x+cos(theta)*r,y+sin(theta)*r);
    }
    glEnd();
}

void DrawEllipse(float cx, float cy, float rx, float ry, int num_segments)
{
    float theta = 2 * 3.1415926 / float(num_segments);
    float c = cosf(theta);//precalculate the sine and cosine
    float s = sinf(theta);
    float t;

    float x = 1;//we start at angle = 0
    float y = 0;

    glBegin(GL_POLYGON);
    for(int ii = 0; ii < num_segments; ii++)
    {
        //apply radius and offset
        glVertex2f(x * rx + cx, y * ry + cy);//output vertex

        //apply the rotation matrix
        t = x;
        x = c * x - s * y;
        y = s * t + c * y;
    }
    glEnd();
}
void drawbucket(int x, int y, int water)
{
    glColor3ub(202,202,202);
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glVertex2f(x+5,y);
    glVertex2f(x+7,y+10);
    glVertex2f(x-2,y+10);
    glEnd();
    DrawEllipse(x+2.5,y,2.5,1.5,30);

    glColor3ub(153,153,153);
    DrawEllipse(x+2.5,y+10,4.5,2,30);

    //water
    if(water==1){
    glColor3ub(212,241,249);
    DrawEllipse(x+2.5,y+9.5,4.45,1.5,30);
    }

}
float wx=41.9,wy=40,y=10,ax=35,ay=38,showbucket=1;
void surroundings()
{


    //grass
    glColor3f(0.0,0.3,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0,30);
    glVertex2f(0,0);
    glVertex2f(100,0);
    glVertex2f(100,30);
    glEnd();

    //Hill
    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(18,30);
    glVertex2f(0,30);
    glVertex2f(0,75);
    glEnd();

    glColor3ub(169,169,169);
    glBegin(GL_POLYGON);
    glVertex2f(30,30);
    glVertex2f(55,30);
    glVertex2f(45,55);
    glEnd();

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(15,30);
    glVertex2f(45,30);
    glVertex2f(30,75);
    glEnd();

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(45,30);
    glVertex2f(75,30);
    glVertex2f(60,65);
    glEnd();


    tree3(5,50);
    tree3(50,50);
    tree2(60,48);
    tree3(78,50);
    tree2(85,48);
    tree2(95,48);

        //tree
    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(15,25);
    glVertex2f(15,45);
    glVertex2f(18,45);
    glVertex2f(18,25);
    glEnd();

    glColor3f(0.0,0.5,0.0);
    myCircle(5,15,45);
    myCircle(5,18,45);
    myCircle(5,13,48);
    myCircle(5,21,48);
    myCircle(7,13,52);
    myCircle(7,20,52);
    myCircle(5,15,58);
    myCircle(5,18,58);
    myCircle(4,17,60);

    //well
    //body
    glColor3ub(254,212,42);
    glBegin(GL_POLYGON);
    glVertex2f(30,23);
    glVertex2f(40,23);
    glVertex2f(40,35);
    glVertex2f(30,35);
    glEnd();

    //bottom
    glColor3ub(254,212,42);
    DrawEllipse(35,23,5,3,30);

    //top
    glColor3ub(254,231,119);
    DrawEllipse(35,35,5,3,30);

    glColor3ub(212,169,4);
    DrawEllipse(35,35,4.5,2.5,30);

    //left stick
    glColor3ub(191,115,61);
    glBegin(GL_POLYGON);
    glVertex2f(30.15,35);
    glVertex2f(30.55,35);
    glVertex2f(30.55,42);
    glVertex2f(30.15,42);
    glEnd();


    //right stick
    glBegin(GL_POLYGON);
    glVertex2f(39.85,35);
    glVertex2f(39.45,35);
    glVertex2f(39.45,42);
    glVertex2f(39.85,42);
    glEnd();

    //top
    glColor3ub(181,81,13);
    glBegin(GL_POLYGON);
    glVertex2f(28,42);
    glVertex2f(42,42);
    glVertex2f(39,48);
    glVertex2f(31,48);
    glEnd();

    //middle stick
    glColor3ub(191,115,61);
    glBegin(GL_POLYGON);
    glVertex2f(30.5,40);
    glVertex2f(39.45,40);
    glVertex2f(39.45,40.5);
    glVertex2f(30.5,40.5);
    glEnd();

    //above bucket
    glColor3ub(255,221,87);
    glBegin(GL_POLYGON);
    glVertex2f(34.5,39.75);
    glVertex2f(35.5,39.75);
    glVertex2f(35.5,40.75);
    glVertex2f(34.5,40.75);
    glEnd();

    //rope
    glColor3ub(254,212,42);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(35,40);
    glVertex2f(ax,ay);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(35,40);
    glVertex2f(32,33);
    glEnd();
    glLineWidth(1);

    if(showbucket==1){
    //Bucket
    //left part
    glColor3ub(195,114,61);
    glBegin(GL_POLYGON);
    glVertex2f(ax-1.2,ay-4);
    glVertex2f(ax-.5,ay-4);
    glVertex2f(ax-.5,ay+.5);
    glVertex2f(ax-1.2,ay+.5);
    glEnd();
    //middle part
    glColor3ub(163,91,43);
    glBegin(GL_POLYGON);
    glVertex2f(ax-.5,ay-4.5);
    glVertex2f(ax+.5,ay-4.5);
    glVertex2f(ax+.5,ay);
    glVertex2f(ax-.5,ay);
    glEnd();
    //right part
    glColor3ub(195,114,61);
    glBegin(GL_POLYGON);
    glVertex2f(ax+.5,ay-4);
    glVertex2f(ax+1.2,ay-4);
    glVertex2f(ax+1.2,ay+.5);
    glVertex2f(ax+.5,ay+.5);
    glEnd();
    }

}

void star(float x1, float y1,float distance, float height)
{
    float x2 = x1 + distance, y2 = y1, x3 = x2, y3 = y2 + distance, x4 = x1, y4 = y3;


    glBegin(GL_QUADS);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);

        glVertex2f(x3, y3);
        glVertex2f(x4, y4);
    glEnd();
   glBegin(GL_TRIANGLES);
    //bottom
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x1+(distance/2) , y2-height);
    //right
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
        glVertex2f(x2+height,y2+(distance/2));
    //top
        glVertex2f(x3,y3);
        glVertex2f(x4,y4);
        glVertex2f(x1+(distance/2), y4+height);
    //left
        glVertex2f(x4,y4);
        glVertex2f(x1,y1);
        glVertex2f(x1-height,y1+(distance/2));
    glEnd();

}
void nightsky()
{
    glColor3ub(6, 0, 45);
    glBegin(GL_POLYGON);
        glVertex2d(0,60);
        glVertex2d(0, 100);
        glVertex2d(100, 100);
        glVertex2d(100, 60);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(70,60);
        glVertex2d(75,55);
        glVertex2d(100,55);
        glVertex2d(100,60);
    glEnd();

    glColor3ub(251, 252, 234);
    //moon
    circle(4,9,75,85);

    //stars
    star(5,97,0.4,0.8);
    star(10,66,0.4,0.8);
    star(25,90,0.4,0.8);
    star(30,71,0.4,0.8);
    star(45,95,0.4,0.8);
    star(60,75,0.4,0.8);
    star(76,65,0.4,0.8);
    star(86,85,0.4,0.8);
    //circle star
    circle(.2,.3,2,88);
    circle(.2,.3,3,68);
    circle(.2,.3,12,78);
    circle(.2,.3,24,69);
    circle(.2,.3,19,97);
    circle(.2,.3,35,98);
    circle(.2,.3,32,82);
    circle(.2,.3,50,73);
    circle(.2,.3,55,91);
    circle(.2,.3,68,96);
    circle(.2,.3,62,66);
    circle(.2,.3,80,61);
    circle(.2,.3,81,81);
    circle(.2,.3,95,98);
    circle(.2,.3,98,75);
    circle(.2,.3,96,58);

    //reflected star int the water
    star(78,53,0.4,0.8);
    star(85,50,0.4,0.8);
    star(95,48,0.4,0.8);
    circle(.2,.3,98,52);
    circle(.2,.3,83,53);
    circle(.2,.3,88,54);

}

class StickMan{
public:
    float l,r,leg=1,lh,rh,ry,ly, angle1=-50, angle2=-130, theta, dec1=1, dec2=0,y,dir,flag=0,mov=1,cur=1,handmove=1,bucket=0,water=0,handflag=0;
     StickMan(float x, float y, int dir){
            l=x-5;
            r=x+5;
            lh=x-10;
            rh=x+10;
            leg=dir;
            this->y=y;
            this->dir = dir;
        }
     void drawStickman(float x)
        {

            theta = angle1 * 3.1428/180;
            rh = x+cos(theta)*10;
            ry = y+20+sin(theta)*10;
            if(handmove==0)
                angle2=-30;
            theta = angle2* 3.1428/180;
            lh = x+cos(theta)*10;
            ly = y+20+sin(theta)*10;

            //legs
            glColor3ub(42,64,255);
            glBegin(GL_LINES);
            glVertex2f(x,y);
            glVertex2f(l,y-20);
            glVertex2f(r,y-20);
            glVertex2f(x,y);
            glEnd();

            glColor3ub(102,0,102);
            if(bucket==0)
                glPointSize(4);
            else
                glPointSize(7);
            glBegin(GL_POINTS);
            glVertex2f(l,y-20);
            glColor3ub(76,0,153);
            glVertex2f(r,y-20);
            glEnd();


            //body
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y);
            glEnd();

            //head
            glColor3ub(255,148,148);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y+23);
            glEnd();

            myCircle(5,x,y+28);//y+body height+neck+radius 40+20+3+5

            //hands
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(lh,ly);
            glEnd();

            glColor3ub(255,148,148);
            myCircle(2,lh,ly);

            if(bucket==1)
                drawbucket(lh,ly,water);

            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(rh,ry);
            glEnd();

            glColor3ub(255,148,148);
            myCircle(2,rh,ry);


            if(mov==1){

            if(leg==1)
                l = l+dir*4;
            else
                r=r+dir*4;
            if(l-r==(dir*10))
                leg=-1;
            if(r-l == (dir*10))
                leg=1;
            if(handmove==1){

            if(dec1==1)
                angle1-=20;
            else
                angle1+=20;

            if(dec2==1)
                angle2-=20;
            else
                angle2+=20;

            if(-130>angle1)
                dec1=0;
            if(-50<angle1)
                dec1=1;

            if(-130>angle2)
                dec2=0;
            if(-50<angle2)
                dec2=1;
            }
            }
            }
        void raiseHand(float x)
        {
            //legs
            glColor3ub(42,64,255);
            glBegin(GL_LINES);
            glVertex2f(x,y);
            glVertex2f(l,y-20);
            glVertex2f(r,y-20);
            glVertex2f(x,y);
            glEnd();

            glColor3ub(102,0,102);
            glPointSize(4);
            glBegin(GL_POINTS);
            glVertex2f(l,y-20);
            glColor3ub(76,0,153);
            glVertex2f(r,y-20);
            glEnd();


            //body
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y);
            glEnd();

            //head
            glColor3ub(255,148,148);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y+23);
            glEnd();

            myCircle(5,x,y+28);//y+body height+neck+radius 40+20+3+5

            //hands
            theta = 70 * 3.1428/180;
            rh = x+cos(theta)*10;
            ry = y+20+sin(theta)*10;
            if(handmove==0)
                 theta = -30 * 3.1428/180;
            else
                theta = -130 * 3.1428/180;
            lh = x+cos(theta)*10;
            ly = y+20+sin(theta)*10;

            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(rh,ry+10);
            glEnd();

            glColor3ub(255,148,148);
            myCircle(2,lh,ly);

            if(bucket==1)
                drawbucket(lh,ly,water);

            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(lh,ly);
            glEnd();

            glColor3ub(255,148,148);
            myCircle(2,rh,ry+10);
        }

        void moveVertical(float x,float dir)
        {
            if(flag==0){
            l=x-5;
            r=x+5;
            lh=x-10;
            rh=x+10;
            flag=1;
            leg = dir;
            }

            theta = angle1 * 3.1428/180;
            rh = x+cos(theta)*10;
            ry = y+20+sin(theta)*10;

            theta = angle2* 3.1428/180;
            lh = x+cos(theta)*10;
            ly = y+20+sin(theta)*10;

            //legs
            glLineWidth(3);
            glColor3ub(42,64,255);
            glBegin(GL_LINES);
            glVertex2f(x,y);
            glVertex2f(l,y-20);
            glVertex2f(r,y-20);
            glVertex2f(x,y);
            glEnd();

            glColor3ub(102,0,102);
            glPointSize(4);
            glBegin(GL_POINTS);
            glVertex2f(l,y-20);
            glColor3ub(76,0,153);
            glVertex2f(r,y-20);
            glEnd();


            //body
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y);
            glEnd();

            //head
            glColor3ub(255,148,148);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y+23);
            glEnd();

            myCircle(5,x,y+28);//y+body height+neck+radius 40+20+3+5

            //hands
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(rh,ry);
            glVertex2f(x,y+20);
            glVertex2f(lh,ly);
            glEnd();

            glColor3ub(255,148,148);
            myCircle(2,rh,ry);
            myCircle(2,lh,ly);

            if(leg==1)
                l = l+dir*4;
            else
                r=r+dir*4;
            if(l-r==(dir*10))
                leg=-1;
            if(r-l == (dir*10))
                leg=1;

            if(dec1==1)
                angle1-=20;
            else
                angle1+=20;

            if(dec2==1)
                angle2-=20;
            else
                angle2+=20;

            if(-130>angle1)
                dec1=0;
            if(-50<angle1)
                dec1=1;

            if(-130>angle2)
                dec2=0;
            if(-50<angle2)
                dec2=1;
            y+=1;

        }
        void moveStraight(float x, float y, float dir)
        {
            if(flag==0)
            {
                ry=y-25;
                ly=y-25;
                flag=1;
            }
            glLineWidth(3);

            //head
            glColor3ub(255,148,148);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y+23);
            glEnd();

             myCircle(5,x,y+28);//y+body height+neck+radius 40+20+3+5

            //legs
            glColor3ub(42,64,255);
            glBegin(GL_LINES);
            glVertex2f(x,y);
            glVertex2f(x-3,ly);
            glVertex2f(x,y);
            glVertex2f(x+3,ry);
            glEnd();

            glColor3ub(102,0,102);
            glPointSize(3);
            glBegin(GL_POINTS);
            glVertex2f(x-3,ly);
            glColor3ub(76,0,153);
            glVertex2f(x+3,ry);
            glEnd();

            //body
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y);
            glVertex2f(x,y+20);
            glEnd();

            //hands
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x+6,ly+25);
            glVertex2f(x,y+20);
            glVertex2f(x-6,ry+25);
            glEnd();

             glColor3ub(255,148,148);
             myCircle(2,x+6,ly+25);
             myCircle(2,x-6,ry+25);

            if(cur==1){
                ly-=2*dir;
                }
            else{
                ry-=2*dir;
            }
            if(ly-ry==4*dir)
                cur=1;
            if(ry-ly==4*dir)
                cur=0;

        }
        void handmovement(float x)
        {
            if(handflag==0){
                angle2=-30;
                angle1=50;
                handflag=1;
            }

            theta = angle1 * 3.1428/180;
            rh = x+cos(theta)*10;
            ry = y+20+sin(theta)*10;

            theta = angle2* 3.1428/180;
            lh = x+cos(theta)*10;
            ly = y+20+sin(theta)*10;

            //legs
            glColor3ub(42,64,255);
            glBegin(GL_LINES);
            glVertex2f(x,y);
            glVertex2f(l,y-20);
            glVertex2f(r,y-20);
            glVertex2f(x,y);
            glEnd();

            glColor3ub(102,0,102);
            if(bucket==0)
                glPointSize(4);
            else
                glPointSize(7);
            glBegin(GL_POINTS);
            glVertex2f(l,y-20);
            glColor3ub(76,0,153);
            glVertex2f(r,y-20);
            glEnd();


            //body
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y);
            glEnd();

            //head
            glColor3ub(255,148,148);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(x,y+23);
            glEnd();

            myCircle(5,x,y+28);//y+body height+neck+radius 40+20+3+5

            //hands
            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(lh,ly);
            glEnd();

            glColor3ub(255,148,148);
            myCircle(2,lh,ly);

            if(bucket==1)
                drawbucket(lh,ly,water);

            glColor3ub(240,255,42);
            glBegin(GL_LINES);
            glVertex2f(x,y+20);
            glVertex2f(rh,ry);
            glEnd();

            glColor3ub(255,148,148);
            myCircle(2,rh,ry);

            if(dec1==1)
                angle1-=20;
            else
                angle1+=20;

            if(dec2==1)
                angle2-=20;
            else
                angle2+=20;

            if(-30>angle1)
                dec1=0;
            if(30<angle1)
                dec1=1;

            if(-50>angle2)
                dec2=0;
            if(50<angle2)
                dec2=1;
        }


};
float sy=98, sx=292;
void throwStone()
{
    glColor3ub(54.2,54.2,54.2);
    myCircle(4,sx,sy);
}

float x1=200,x2=300,x3=80,rais=0,vertical=0,hori=1,ones=0,stop=0,x4=40,orange=50,times=0,show=1,stone=0,reached=0,one=0,y6=390;
StickMan s1(x1,63,1), s2(x2,383,-1), s3(x3,223,1),s4(310,383,1),s5(160,223,1),s6(500,390,1);

void timer3(int)
{
    door=1;
    house3(44,15);
}
void timer2(int)
{
    show=0;
    glutTimerFunc(750,timer3,0);
}
void timer(int)
{
    door=0;
    house3(44,15);
    glutTimerFunc(500,timer2,0);
}
void sky2()
{
    glColor3f(0.0,0.9,0.9);
    glBegin(GL_POLYGON);
        glVertex2d(0,30);
        glVertex2d(0, 100);
        glVertex2d(100, 100);
        glVertex2d(100, 30);
    glEnd();

    glColor3ub(255,140,0);
    circle(4,9,55,85);
    //cloud left to right
    glColor3f(1, 1, 1);

    //horizontal flying cloud
    movingCloud();

}

float x10=10,comp1=0,handup1=0,x11=-200,comp2=0,handup2=0;
StickMan s10(x10,63,1),s11(x11,63,1);
void movewell(StickMan s, int x)
{
    float dir1=1;
    wx=41.9;wy=40;y=10;ax=35;ay=38;showbucket=1;
    while(ay>25)
    {
    delay();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    sky2();
    surroundings();
    glPushMatrix();
    s.bucket=0;
    glScalef(.4,.4,1);
    glLineWidth(5);
    s.raiseHand(x);
    //s.drawStickman(x);
    drawbucket(75,43,0);
    glPopMatrix();
    ay-=1;
    wy+=1*dir1;
    if(wy>=44)
        dir1=-1;
    if(wy<=40)
        dir1=1;
    if(ay<=32)
        showbucket=0;
    glFlush();
    }
    while(ay<38)
    {
    if(ay>32)
        showbucket=1;
    delay();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    sky2();
    surroundings();
    glPushMatrix();
    glScalef(.4,.4,1);
    glLineWidth(5);
    s.handmovement(x);
    drawbucket(75,43,0);
    glPopMatrix();
    ay+=1;
    wy+=1*dir1;
    if(wy>=44)
        dir1=-1;
    if(wy<=40)
        dir1=1;
    glFlush();
    }
}
void display2()
{
    delay();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    sky2();
    surroundings();
    glPushMatrix();
    glScalef(.4,.4,1);
    glLineWidth(5);
    if(handup1==0)
    s10.drawStickman(x10);
    else{
        s10.raiseHand(73);
        glFlush();
        Sleep(1000);
        s10.water=1;
    }
    if((x10<=73||comp1==1)&&handup1==0)
    x10+=2;
    glFlush();
    glPopMatrix();
    if(s10.water==1)
        handup1=0;
    if(x10>=73&&comp1==0){
        s10.mov=0;
        movewell(s10,x10);
        Sleep(150);
        comp1=1;
        s10.mov=1;
        handup1=1;
    }
    glPushMatrix();
    glScalef(.4,.4,1);
    glLineWidth(5);
    if(handup2==0)
    s11.drawStickman(x11);
    else{
        s11.raiseHand(73);
        glFlush();
        Sleep(1000);
        s11.water=1;
    }

    if((x11<=73||comp2==1)&&handup2==0)
    x11+=2;
    if(s11.water==1)
        handup2=0;
    glFlush();
    glPopMatrix();
    if(x11>=73&&comp2==0){
        s11.mov=0;
        movewell(s11,x11);
        Sleep(150);
        comp2=1;
        s11.mov=1;
        handup2=1;
    }
}
void renderbitmap1(float x, float y, void *font, string s)
{
    glRasterPos2f(x,y);
    for(int i=0;i<s.size();i++)
        glutBitmapCharacter(font,s[i]);
}
string p1[10],p2[10];
int c=1,a=0,b=0,started1=0,started2=0,finished=0;
void startConversation()
{

    glColor3f(1,1,1);
    if(c>=11)
        started1=1;
    if(b>6)
    {
        started1=started2=0;
        finished=1;
    }
    if(c>=21)
        started2=1;
    if(started1==1&&finished==0){
        DrawEllipse(110,270,40,15,30);
        myCircle(3,125,250);
    }
    if(started2==1&&finished==0){
        DrawEllipse(210,270,45,15,30);
        myCircle(3,175,250);
    }
    glColor3f(0,0,0);
    renderbitmap1(75,265,GLUT_BITMAP_HELVETICA_10,p1[a]);
    renderbitmap1(170,265,GLUT_BITMAP_HELVETICA_10,p2[b]);
    if(c%11==0)
        a++;
    else if(c%21==0){
        b++;
        c=1;
    }
    c++;
}
void dayMode()
{
    delay();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    sky();
    road();
    homes();
    river();
    glColor3ub(255,148,148);
    if(x4<=58)
        x4+=.25;
    if((rais||orange<40)&&reached==1)
        orangeFall();
    glPushMatrix();
    glScalef(.125,.125,1);
    glLineWidth(3);
    s4.drawStickman(310);
    s5.drawStickman(160);
    if(hori&&show==1)
        s1.drawStickman(x1);
    else if(rais){
        s1.raiseHand(284);
        stone=1;
        throwStone();
    }
    else if(vertical)
        s1.moveVertical(x1,1);
    s2.drawStickman(x2);
    s3.drawStickman(x3);
    if(stop==0)
        x1+=2;
    //if(x2>10)
        x2-=2;
   // else
        //s2.mov=0;
    if(x3<140)
        x3+=2;
    else{
        s3.mov=0;
        startConversation();
    }
    if(stone==1)
    {
        if(reached==0)
        {
            sy+=10;
            sx+=2;
        }
        if(sy>=253)
            reached=1;
        if(reached==1)
        {
            sy-=10;
            sx+=1;
            if(sy<=90){
                stone=0;
                one=1;
            }
        }
    }
    s6.moveStraight(500,y6,1);
    glPopMatrix();
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(79,8);
    glVertex2f(99,8);
    glVertex2f(99,30);
    glVertex2f(79,30);
    glEnd();
    glColor3f(1.f,1.f,1.f);
    char buf[100]={0};
    sprintf(buf,"enter - Home screen");
    renderbitmap(80,27,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"w - Well scene");
    renderbitmap(80,23,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"1 - Room 1");
    renderbitmap(80,19,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"2 - Room 2");
    renderbitmap(80,15,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"n - Night Mode");
    renderbitmap(80,11,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    if(x1==284&&vertical==0)
    {
        hori=0;
        rais=1;
    }
    if(x1==358&&vertical==0&&ones==0)
    {
        x1=284;
        rais=0;
        hori=1;
        ones=1;
        orange=0;
    }
    if(x1==360)
    {
        hori=0;
        vertical=1;
    }
    if(s1.y>=85 && times==0){
        vertical=0;
        hori=1;
        s1.mov=0;
        stop=1;
        glutTimerFunc(1500,timer,0);
        times=1;
    }
    orange+=1;
    y6-=1;
    glLineWidth(1);
    glFlush();

}
void nightmode()
{
    delay();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f);
    road();
    nightsky();
    homes();
    river();
    glutPostRedisplay();
    glFlush();
}
void init()
{
    glClearColor(0, 0, 0, 10);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100.0, 0, 100.0 , 0, 100.0);
}
void renderbitmap(float x, float y, void *font, char *string)
{
    char *c;
    glRasterPos2f(x,y);
    for(c=string;*c!='\0';c++)
        glutBitmapCharacter(font,*c);
}

void introscreen()
{
    glColor3f(1.f,1.f,1.f);
    char buf[100]={0};
    sprintf(buf,"SIMPLE VILLAGE");
    renderbitmap(40,90,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"4NM18CS064");
    renderbitmap(25,80,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"H VIGNESH");
    renderbitmap(60,80,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"4NM18CS058");
    renderbitmap(25,70,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"GANESH WAGLE");
    renderbitmap(60,70,GLUT_BITMAP_TIMES_ROMAN_24,buf);
    sprintf(buf,"PRESS ENTER TO CONTINUE");
    renderbitmap(35,60,GLUT_BITMAP_TIMES_ROMAN_24,buf);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    introscreen();
    glFlush();
    glutPostRedisplay();
}
void changeSize(int w, int h) {
	glViewport(0, 0, w, h);
    init();
}
void changeSize2(int w, int h) {
	glViewport(0, 0, w, h);
    init2();
}
void keyboardFunc( unsigned char key, int x, int y )
{
    if(key==13)
    {
        night=0;
        init();
        glutDisplayFunc(dayMode);
        glutReshapeFunc(changeSize);
    }
    if(key=='w')
    {
        init();
        glutDisplayFunc(display2);
        glutReshapeFunc(changeSize);
    }
     if(key=='1')
    {
        init();
        glutDisplayFunc(room);
        glutReshapeFunc(changeSize);
    }
    if(key=='2')
    {
        init2();
        glutDisplayFunc(display3);
        glutReshapeFunc(changeSize2);
    }
    if(key=='n')
    {
        night=1;
        glutDisplayFunc(nightmode);
        glutReshapeFunc(changeSize);
    }
}
int who=1;

void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_UP)
    {
        if(who==1){
            init();
            glutDisplayFunc(dayMode);
            glutReshapeFunc(changeSize);
            who=2;
        }
        else if(who==2)
        {
            init();
            glutDisplayFunc(room);
            glutReshapeFunc(changeSize);
            who=3;
        }
        else if(who==3)
        {
            init2();
            glutDisplayFunc(display3);
            glutReshapeFunc(changeSize2);
            who=1;
        }
    }
}
int main(int argc, char** argv)
{
    p1[1]="hello how are you?";
    p2[1]="I am fine, thank you.";
    p2[2]="How about you?";
    p1[2]="hello how are you?";
    p1[3]="I am fine, thank you.";
    p2[3]="How about you?";
    p1[4]="How is urban life?";
    p2[4]="Good,but high pollution.";
    p2[5]="What are you doing now?";
    p1[5]="How is urban life?";
    p1[6]="Helping dad in the farm.";
    p2[6]="Its too hot today.";
    p1[7]="Yeah!!";
    p2[7]="";
    glutInit(&argc, argv);
    s10.handmove=0;
    s10.bucket=1;
    s11.handmove=0;
    s11.bucket=1;
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1100, 700);
	glutInitWindowPosition (0, -90);
	glutCreateWindow ("Simple Village");
	s4.mov=0;
	s5.mov=0;
	init();
	glutReshapeFunc(changeSize);
	glutKeyboardFunc(keyboardFunc);
	glutMouseFunc(mouse);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
