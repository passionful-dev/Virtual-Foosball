// Foosball.c
// OpenGL Project
// Demonstrates the playing of foosball
// Program by Mr. Krishna Pantha

#include <windows.h>
#include <stdio.h>
#include <gl/gl.h>
#include <gl/glu.h>
#include <gl/glut.h>
#include <math.h>
#include <time.h>

int i,j=0;
int BallMoved=0,ManisMoving=0;
int RodisMoving = 0;

int MouseCheck=0,RodtoMove=1,MoveRedMenof1stRod=0,MoveRedMenof2ndRod=0;
int	MoveRedMenof3rdRod=1,MoveRedMenof4thRod=0;

static GLfloat MouseRotateBeforeNormalize,MouseRotate;
static GLfloat MouseTranslateBeforeNormalize,MouseTranslate;

static GLfloat Force,Time,MaxAng,distance;

static GLfloat MoveY1st=0.0,MoveY2nd=0.0,MoveY3rd=0.0,MoveY4th=0.0;
static GLfloat Move1st,Move2nd,Move3rd,Move4th;
int RodMoved=0;

static GLfloat UpMaxYTransof1stRed=0.6465-0.1,NowChangeRod=1;
static GLfloat DownMaxYTransof1stRed=-4.89650;

static GLfloat UpMaxYTransof2ndRed=-0.6465-0.6465+11.125;
static GLfloat DownMaxYTransof2ndRed=-4.89650+0.8125+0.1;

static GLfloat UpMaxYTransof3rdRed=-0.166+0.6465+0.6465-0.125-0.1;
static GLfloat DownMaxYTransof3rdRed=-4.89650-0.125+0.1;

static GLfloat UpMaxYTransof4thRed=0.6465+0.6465+0.6465+0.6465+2.6875-0.166-0.1;
static GLfloat DownMaxYTransof4thRed=-4.89650+2.6875+0.1;

static GLfloat Move1stMenofY=0.0,Move2ndMenofY=0.0,Move3rdMenofY=0.0,Move4thMenofY=0.0;


//////////////Variables For Blue
static GLfloat Blueang=0.0;

int BlueManisMoving=0;
int BlueManMoveUp=0,BlueManMoveDown=1,BlueManMoveStop=1;

static GLfloat BlueMoveY1st=0.0,BlueMoveY2nd=0.0;
static GLfloat BlueMoveY3rd=0.0,BlueMoveY4th=0.0;

//UpMaxYTransofBlue
static GLfloat UpMaxYTransof1stBlue=12.9660-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465;
static GLfloat UpMaxYTransof2ndBlue=12.9660-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.1;
static GLfloat UpMaxYTransof3rdBlue=12.9660-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465+.1;
static GLfloat UpMaxYTransof4thBlue=12.9660-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465-.6465+.1+.1+.1+.1;

//DownMaxYTransofBlue
static GLfloat DownMaxYTransof1stBlue=-14.0340+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465+.6465-.45;
static GLfloat DownMaxYTransof2ndBlue=-14.0340+7.0340-.6465-.2465;
static GLfloat DownMaxYTransof3rdBlue=-14.0340+12.0340;
static GLfloat DownMaxYTransof4thBlue=-14.0340+11.0340+.1465;


#include "CalcForce.h"
#include "SketchGround.h"
#include "Wall.h"
#include "BlueMen&Rod.h"
#include "RedMen&Rod.h"
#include "Ball.h"
#include "DistanceCalculate.h"
//#include "HitToThe1stRedRod1stMan.h"
//#include "HitToThe2ndRedRod1stMan.h"
/*#include "HittotheFirstRod1stRedMan.h"
#include "HittotheFirstRod2ndRedMan.h"
#include "HittotheFirstRod3rdRedMan.h"
#include "HittotheSecondRod1stRedMan.h"
#include "HittotheSecondRod2ndRedMan.h"
#include "HittotheThirdRod1stRedMan.h"
#include "HittotheThirdRod2ndRedMan.h"
#include "HittotheThirdRod3rdRedMan.h"
#include "HittotheThirdRod4thRedMan.h"
#include "HittotheThirdRod5thRedMan.h"
#include "HittotheFourthRod1stRedMan.h"
#include "HittotheFourthRod2ndRedMan.h"
#include "HittotheFourthRod3rdRedMan.h"*/


static GLfloat ang=0,ang1=0;
static GLfloat ManMoveUp = 0.0f,ManMoveDown = 1.0f,ManMoveStop = 1.0;

float x1=0,x2=0,y11=0,y2=0;

int MouseMoved=0;

//int BallTouchingRedManonSurface=0,BallTouchingRedManonEdge=0;

char ch;
clock_t s,e;

// Rotation amounts
static GLfloat xRot = 0.0f;//-1200.0f;//0.0f;
static GLfloat yRot = 0.0f;//70.0f;//0.0f;
static GLfloat zRot = 0.0f;//75.0f;//0.0f;

float xAng=0.0;
float yAng=0.0;
float zAng=0.0;

////////////
//Ground points
/*GLfloat GroundPoints[13][3]={
		{-38.2922,-14.0340,0.0000},//TWIU2
		{-38.2922,-4.7215,0.0000},//TWI4
		{-42.0422,-4.7215,0.0000},//PU1
		{-42.0422,3.6535,0.0000},//PU4
		{-38.2922,3.65350,0.0000},//TWIU7
		{-38.2922,12.9660,0.0000},//TWIU9

		{9.7078,12.9660,0.0000},//WID9
		{9.7078,3.65350,0.0000},//WID7
		{13.4578,3.6535,0.0000},//PD4
		{13.4578,-4.7215,0.0000},//PD1
		{9.7078,-4.7215,0.0000},//WID4
		{9.7078,-14.0340,0.0000},//WID2

		{-38.2922,-14.0340,0.0000},//TWIU2
					};
*/
GLfloat GroundPoints[4][3]={
		{-42.0422,-15.5340,0.0000},//TWU1
		{-42.0422,14.4660,0.0000},//TWU8
		{13.4578,14.4660,0.0000},//WD6
		{13.4578,-15.5340,0.0000},//WD2
					};
/*
GLfloat GroundPoints[13][3]={
		{-38.2922,-14.0340,0.0000},//TWIU2
		{-38.2922,12.9660,0.0000},//TWIU9
		{9.7078,12.9660,0.0000},//WID9
		{9.7078,-14.0340,0.0000},//WID2
};
		{-38.2922,-4.7215,0.0000},//TWI4
		{-42.0422,-4.7215,0.0000},//PU1
		{-42.0422,3.6535,0.0000},//PU4
		{-38.2922,3.65350,0.0000},//TWIU7
	

	
		{9.7078,3.65350,0.0000},//WID7
		{13.4578,3.6535,0.0000},//PD4
		{13.4578,-4.7215,0.0000},//PD1
		{9.7078,-4.7215,0.0000},//WID4
	

	
					};
*/
void ColorGround(void)
{
	//Color of ground- Green
	glColor3ub(0,127,127);
	/*glBegin(GL_POLYGON);
		//Ground lines
		for(i=0;i<=2;i++)
		{
			glVertex3f(GroundPoints[i][j],GroundPoints[i][j+1],GroundPoints[i][j+2]);
			glVertex3f(GroundPoints[i+1][j],GroundPoints[i+1][j+1],GroundPoints[i+1][j+2]);
		}
	glEnd();*/
	//glRectf(-42.0422,-15.5340,13.4578,14.4660);
}


////////////Blue Men of 4th Rod in Motion 
void BlueMenof4thRodinMotion(void)
{
	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY4th,0.0f);
		glRotatef(Blueang, -32.7229+26.5625, -12.034+1.875, 3.1250+0.125);//A
		//glVertex3f(Blue1stManCDKL[i][j]+26.5625,Blue1stManCDKL[i][j+1]+1.875,Blue1stManCDKL[i][j+2]+0.125);
		Blue4thRod1stMenModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY4th,0.0f);
		glRotatef(Blueang, -32.7229+26.5625, -12.034+1.875+8.875, 3.1250+0.125);//A
		//glVertex3f(Blue1stManAtoD[i][j]+26.5625,Blue1stManAtoD[i][j+1]+1.875+8.875,Blue1stManAtoD[i][j+2]+0.125);
		Blue4thRod2ndMenModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY4th,0.0f);
		glRotatef(Blueang, -32.7229+26.5625, -12.034+1.875+8.875+8.875, 3.1250+0.125);//A
		//glVertex3f(Blue1stManCDKL[i][j]+26.5625,Blue1stManCDKL[i][j+1]+1.875+8.875+8.875,Blue1stManCDKL[i][j+2]+0.125);
		Blue4thRod3rdMenModel();
	glPopMatrix();
}

/////Blue Men of 4th Rod
void BlueMenof4thRod(void)
{
	Blue4thRod1stMenModel();
	Blue4thRod2ndMenModel();
	Blue4thRod3rdMenModel();
}

////////////Blue Men of 3rd Rod in Motion 
void BlueMenof3rdRodinMotion(void)
{
	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY3rd,0.0f);
		glRotatef(Blueang, -32.7229+15.6875, -12.034+0.9375, 3.1250+0.0316);//A
		//glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375,Blue1stManAtoD[i][j+2]+0.0316);
		Blue3rdRod1stMenModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY3rd,0.0f);
		glRotatef(Blueang, -32.7229+15.6875, -12.034+0.9375+4.75, 3.1250+0.0316);//A
		//glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75,Blue1stManAtoD[i][j+2]+0.0316);
		Blue3rdRod2ndMenModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY3rd,0.0f);
		glRotatef(Blueang, -32.7229+15.6875, -12.034+0.9375+4.75+4.75, 3.1250+0.0316);//A
		//glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75+4.75,Blue1stManAtoD[i][j+2]+0.0316);
		Blue3rdRod3rdMenModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY3rd,0.0f);
		glRotatef(Blueang, -32.7229+15.6875, -12.034+0.9375+4.75+4.75+4.75, 3.1250+0.0316);//A
		//glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75+4.75+4.75,Blue1stManAtoD[i][j+2]+0.0316);
		Blue3rdRod4thMenModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY3rd,0.0f);
		glRotatef(Blueang, -32.7229+15.6875, -12.034+0.9375+4.75+4.75+4.75+4.75, 3.1250+0.0316);//A
		//glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManAtoD[i][j+2]+0.0316);
		Blue3rdRod5thMenModel();
	glPopMatrix();
}

/////Blue Men of 3rd Rod
void BlueMenof3rdRod(void)	
{
	Blue3rdRod1stMenModel();
	Blue3rdRod2ndMenModel();
	Blue3rdRod3rdMenModel();
	Blue3rdRod4thMenModel();
	Blue3rdRod5thMenModel();
}

////////////Blue Men of 2nd Rod in Motion 
void BlueMenof2ndRodinMotion(void)
{
	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY2nd,0.0f);
		glRotatef(Blueang, -32.7229+5.1875, -12.034+6.875, 3.1250);//A
		//glVertex3f(Blue1stManAtoD[i][j]+5.1875,Blue1stManAtoD[i][j+1]+6.875,Blue1stManAtoD[i][j+2]);
		Blue2ndRod1stMenModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY2nd,0.0f);
		glRotatef(Blueang, -32.7229+5.1875, -12.034+6.875+9.5, 3.1250);//A
		//glVertex3f(Blue1stManAtoD[i][j]+5.1875,Blue1stManAtoD[i][j+1]+6.875+9.5,Blue1stManAtoD[i][j+2]);
		Blue2ndRod2ndMenModel();
	glPopMatrix();
}

/////Blue Men of 2nd Rod
void BlueMenof2ndRod(void)
{
	Blue2ndRod1stMenModel();
	Blue2ndRod2ndMenModel();
}

////////////Blue Men of 1st Rod in Motion 
void BlueMenof1stRodinMotion(void)
{
	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY1st,0.0f);
		glRotatef(Blueang, -32.7229, -12.034, 3.1250);//A
		//glVertex3f(Blue1stManIJLK[i+1][j],Blue1stManIJLK[i+1][j+1],Blue1stManIJLK[i+1][j+2]);
		Blue1stRod1stManModel();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY1st,0.0f);
		glRotatef(Blueang, -32.7229, -12.034+8.125, 3.1250);//A
		//glVertex3f(Blue1stManAtoD[i][j],Blue1stManAtoD[i][j+1]+8.125,Blue1stManAtoD[i][j+2]);
		Blue1stRod2ndManModel();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0f,BlueMoveY1st,0.0f);
		glRotatef(Blueang, -32.7229, -12.034+16.25, 3.1250);//A
		//glVertex3f(Blue1stManAtoD[i][j],Blue1stManAtoD[i][j+1]+16.25,Blue1stManAtoD[i][j+2]);
		Blue1stRod3rdManModel();
	glPopMatrix();
}

/////Blue Men of 1st Rod
void BlueMenof1stRod(void)
{	
	Blue1stRod1stManModel();
	Blue1stRod2ndManModel();
	Blue1stRod3rdManModel();
}

static GLfloat a=0.0,a1,b=0.0,b1,c=0.0,c1;

void Rotate()
{
	ang1=(180*ang)/(22*7);
	c1=(c-3.1250)*cos(ang1)-(a-4.3006)*sin(ang1);
	a1=(c-3.1250)*sin(ang1)+(a+4.3006)*cos(ang1);
	b1=(b+8.159);
	c=c1;
	b=b1;
	a=a1;
	printf("a1= %f, b1= %f, c1= %f",a1,b1,c1);
}

////////////Red Men of 1st Rod in motion
void RedMenof1stRodinMotion(void)
{
	//Rotate();
	//glPushMatrix();
	//	glRotatef(ang,0.0,1.0,0.0);
	//glPopMatrix();
	glPushMatrix();
		glTranslatef(0.0f,MoveY1st,0.0f);
		if ( RodtoMove == 1 )
		{
			//glTranslatef(a1,b1+MoveY1st,c1);
			glRotatef(ang, 4.3006f,-8.159f,3.1250f);//A	
			RodMoved = 1;
		}
		
		Red1stRod1stMan();
	glPopMatrix();
		
	glPushMatrix();
		glTranslatef(0.0f,MoveY1st,0.0f);
		if ( RodtoMove == 1 )
		{
			glRotatef(ang, 4.3006f,-8.159f+9.75,3.1250f);//A
		}
		Red1stRod2ndMan();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0f,MoveY1st,0.0f);
		if ( RodtoMove == 1 )
		{
			glRotatef(ang, 4.3006f,-8.159f+9.75+9.75,3.1250f);//A
			//glVertex3f(Red1stRod1stManAtoD[i][j],Red1stRod1stManAtoD[i][j+1]+9.75+9.75,Red1stRod1stManAtoD[i][j+2]);
		}
		Red1stRod3rdMan();
	glPopMatrix();

}

////////////Red Men of 1st Rod 
void RedMenof1stRod(void)
{
	Red1stRod1stMan();
	Red1stRod2ndMan();
	Red1stRod3rdMan();
}

////////////Red Men of 2nd Rod in motion 
void RedMenof2ndRodinMotion(void)
{
	glPushMatrix();
		glTranslatef(0.0f,MoveY2nd,0.0f);
		if ( RodtoMove == 2 )
		{
			glRotatef(ang, 4.3006f-5.125,-8.159f-0.8125,3.1250f);//A
			//glVertex3f(Red1stRod1stManIJKL[i][j]-5.125,Red1stRod1stManIJKL[i][j+1]-0.8125,Red1stRod1stManIJKL[i][j+2]);
		}
		Red2ndRod1stMan();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0f,MoveY2nd,0.0f);
		if ( RodtoMove == 2 )
		{
			glRotatef(ang, 4.3006f-5.125,-8.159f-0.8125+11.125,3.1250f);//A
			//glVertex3f(Red1stRod1stManAtoD[i][j]-5.125,Red1stRod1stManAtoD[i][j+1]-0.8125+11.125,Red1stRod1stManAtoD[i][j+2]);
		}
		Red2ndRod2ndMan();
	glPopMatrix();
}

////////////Red Men of 2nd Rod
void RedMenof2ndRod(void)
{
	Red2ndRod1stMan();
	Red2ndRod2ndMan();
}

////////////Red Men of 3rd Rod in Motion
void RedMenof3rdRodinMotion(void)
{
	glPushMatrix();
		glTranslatef(0.0f,MoveY3rd,0.0f);
		if ( RodtoMove == 3 )
		{
			glRotatef(ang, 4.3006f-15.858,-8.159f+0.125,3.1250f+0.0625);//A
			//glVertex3f(Red1stRod1stManGHIJ[i][j]-15.858,Red1stRod1stManGHIJ[i][j+1]+0.125,Red1stRod1stManGHIJ[i][j+2]+0.0625);
		}
		Red3rdRod1stMan();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0f,MoveY3rd,0.0f);
		if ( RodtoMove == 3 )
		{
			glRotatef(ang, 4.3006f-15.858,-8.159f+0.125+4.75,3.1250f+0.0625);//A
			//glVertex3f(Red1stRod1stManAtoD[i][j]-15.858,Red1stRod1stManAtoD[i][j+1]+0.125+4.75,Red1stRod1stManAtoD[i][j+2]+0.0625);
		}
		Red3rdRod2ndMan();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0f,MoveY3rd,0.0f);
		if ( RodtoMove == 3 )
		{
			glRotatef(ang, 4.3006f-15.858,-8.159f+0.125+4.75+4.75,3.1250f+0.0625);//A
			//glVertex3f(Red1stRod1stManIJKL[i][j]-15.858,Red1stRod1stManIJKL[i][j+1]+0.125+4.75+4.75,Red1stRod1stManIJKL[i][j+2]+0.0625);
		}
		Red3rdRod3rdMan();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0f,MoveY3rd,0.0f);
		if ( RodtoMove == 3 )
		{
			glRotatef(ang, 4.3006f-15.858,-8.159f+0.125+4.75+4.75+4.75,3.1250f+0.0625);//A
			//glVertex3f(Red1stRod1stManIJKL[i][j]-15.858,Red1stRod1stManIJKL[i][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManIJKL[i][j+2]+0.0625);
		}
		Red3rdRod4thMan();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,MoveY3rd,0.0f);
		if ( RodtoMove == 3 )
		{
			glRotatef(ang, 4.3006f-15.858,-8.159f+0.125+4.75+4.75+4.75+4.75,3.1250f+0.0625);//A
			//glVertex3f(Red1stRod1stManAtoD[i][j]-15.858,Red1stRod1stManAtoD[i][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManAtoD[i][j+2]+0.0625);
		}
		Red3rdRod5thMan();
	glPopMatrix();
}

////////////Red Men of 3rd Rod
void RedMenof3rdRod(void)
{
	Red3rdRod1stMan();
	Red3rdRod2ndMan();
	Red3rdRod3rdMan();
	Red3rdRod4thMan();
	Red3rdRod5thMan();
}

////////////Red Men of 4th Rod in Motion
void RedMenof4thRodinMotion(void)
{
	glPushMatrix();
		glTranslatef(0.0f,MoveY4th,0.0f);
		if ( RodtoMove == 4 )
		{
			glRotatef(ang, 4.3006f-26.5235,-8.159f-2.6875,3.1250f-0.0218);//A
			//glVertex3f(Red1stRod1stManAtoD[i][j]-26.5235,Red1stRod1stManAtoD[i][j+1]-2.6875,Red1stRod1stManAtoD[i][j+2]-0.0218);
		}
		Red4thRod1stMan();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0f,MoveY4th,0.0f);
		if ( RodtoMove == 4 )
		{
			glRotatef(ang, 4.3006f-26.5235,-8.159f-2.6875+8.875,3.1250f-0.0218);//A
			//glVertex3f(Red1stRod1stManAtoD[i][j]-26.5235,Red1stRod1stManAtoD[i][j+1]-2.6875+8.875,Red1stRod1stManAtoD[i][j+2]-0.0218);
		}
		Red4thRod2ndMan();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0f,MoveY4th,0.0f);
		if ( RodtoMove == 4 )
		{
			glRotatef(ang, 4.3006f-26.5235,-8.159f-2.6875+8.875+8.875,3.1250f-0.0218);//A
			//glVertex3f(Red1stRod1stManAtoD[i][j]-26.5235,Red1stRod1stManAtoD[i][j+1]-2.6875+8.875+8.875,Red1stRod1stManAtoD[i][j+2]-0.0218);
		}
		Red4thRod3rdMan();
	glPopMatrix();
}

////////////Red Men of 4th Rod
void RedMenof4thRod(void)
{
	Red4thRod1stMan();
	Red4thRod2ndMan();
	Red4thRod3rdMan();
}

void RedMen_RodAnimation()
{
	////////////Red Men and Rod Animaiton
	//Color of Red men
	glColor3ub(204,0,0);

	//Rotate the Men
	RedMenof1stRodinMotion();
	RedMenof2ndRodinMotion();
	RedMenof3rdRodinMotion();
	RedMenof4thRodinMotion();

	//Draw Red Men's Rods
	//Rod colour= Red(Changed color= Almost white)
	glColor3ub(221,221,221);

	//Move the Rod
	glPushMatrix();
		glTranslatef(0.0,MoveY1st,0.0);
		FirstRodofRedMen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0,MoveY2nd,0.0);
		SecondRodofRedMen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0,MoveY3rd,0.0);
		ThirdRodofRedMen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0,MoveY4th,0.0);
		FourthRodofRedMen();
	glPopMatrix();
}

void BlueMen_RodAnimation()
{		
	//Color of Blue Men
	glColor3ub(0,0,102);
	//Called to rotate men
	BlueMenof1stRodinMotion();
	BlueMenof2ndRodinMotion();
	BlueMenof3rdRodinMotion();
	BlueMenof4thRodinMotion();

	//Draw Blue Men's Rods
	//Rod colour= Blue(Changed color= Almost white)
	glColor3ub(221,221,221);
	
	//Called to move rods
	glPushMatrix();
		glTranslatef(0.0,BlueMoveY1st,0.0);
		FirstRodofBlueMen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0,BlueMoveY2nd,0.0);
		SecondRodofBlueMen();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0.0,BlueMoveY3rd,0.0);
		ThirdRodofBlueMen();
	glPopMatrix();
	
	glPushMatrix();
		glTranslatef(0.0,BlueMoveY4th,0.0);
		FourthRodofBlueMen();
	glPopMatrix();
}

////////////Model of Foosball
void FoosballModel()
{
	GLUquadricObj *quadric;

	glRotatef(xRot, 1.0f, 0.0f, 0.0f);
	glRotatef(yRot, 0.0f, 1.0f, 0.0f);
	glRotatef(zRot, 1.0f, 0.0f, 0.0f);
	
	glTranslatef(20.0,20.0,20.0);
	glScalef(2.5,2.5,2.5);
	
	quadric = gluNewQuadric();
	
	//Curves sketched in ground
	//Color of sketch in ground- White
	glColor3ub(255,255,255);
	//Called to draw middle curve
	MiddleCurve();
	//Called to draw up curve
	UpCurve();
	//Called to draw down curve
	DownCurve();
	
	//Called to color ground
	ColorGround();

	//Sketch Ground Color- White
	glColor3ub(255,255,255);
	//Called to sketch ground
	SketchGround();

	//Line Colour of wall- Black
	glColor3ub(0,0,0);
	//Called to draw walls
	WallUpModel();
	WallDownModel();
	SideWallModel();

	
	
	//At first, when mouse is not moved
	if ( MouseMoved == 0 )
	{
		//Color of Red men
		glColor3ub(204,0,0);

		RedMenof1stRod();
		RedMenof2ndRod();
		RedMenof3rdRod();
		RedMenof4thRod();

		//Draw Red Men's Rods
		//Rod colour= Red(Changed color= Almost white)
		glColor3ub(221,221,221);
		
		//Called to draw 1st rod
		FirstRodofRedMen();
		//Called to draw 2nd rod
		SecondRodofRedMen();
		//Called to draw 3rd rod
		ThirdRodofRedMen();
		//Called to draw 4th rod
		FourthRodofRedMen();

		//Color of Blue 1st man
		glColor3ub(0,0,102);
		//Called to draw blue men of the rods
		BlueMenof1stRod();
		BlueMenof2ndRod();
		BlueMenof3rdRod();
		BlueMenof4thRod();

		//Draw Blue Men's Rods
		//Rod colour= Blue(Changed color= Almost white)
		glColor3ub(221,221,221);
		//Called to draw 1st rod
		FirstRodofBlueMen();
		//Called to draw 2nd rod
		SecondRodofBlueMen();
		//Called to draw 3rd rod
		ThirdRodofBlueMen();
		//Called to draw 4th rod
		FourthRodofBlueMen();
	}

	//When mouse is clicked and released
	else
	{
		RedMen_RodAnimation();

		BlueMen_RodAnimation();
	}

	//Color of ball- Yellow
	glColor3ub(255,255,0);
	//Called to draw the ball
	glPushMatrix();
		//glTranslatef(-14.3922,-0.5098,1.0);
		//glTranslatef(xBallMotion,yBallMotion,zBallMotion);
		//glTranslatef(CentreX,CentreY,CentreZ);
		Ball();
	//printf("\nCentreX= %f,CentreY= %f,CentreZ= %f",CentreX,CentreY,CentreZ);
	glPopMatrix();
}

int ManisForward=0; 
int ManisBackward=0;
int ManisUp=0;
int ManisDown=0;

//////////Man Motion to Rotate
void ManMotiontoRotate()
{
	if ( MouseMoved == 1 )
	{
		if (MouseRotate < 0)
		{ 
			//Man in motion in upward
			if(ManMoveUp==0 && ManMoveDown==1 && ManMoveStop==1)
			{
				ang=ang-5;
				ManisMoving=1;
				if ( ang == 360 || ang == -360 )
				{
					ang = 0;
				}
				NowChangeRod=0;
				//printf("Angle= %f\n",ang);
				if(ang < MaxAng)
				{	
					ManMoveUp=1;
					ManMoveDown=0;
					ManMoveStop=1;
				}
				else
				{
					ManMoveUp=0;
					ManMoveDown=1;
					ManMoveStop=1;
				}
			}
			/*else
			{
				ang=ang+5;
				ang=ang-5;
			}*/
			//Man in motion in downward direction
			else if(ManMoveUp==1 && ManMoveDown==0 && ManMoveStop==1)
			{
				ang=ang+5;
				ManisMoving=1;
				if ( ang == 360 || ang == -360 )
				{
					ang = 0;
				}
				NowChangeRod=0;
				//printf("Angle= %f\n",ang);
				if(ang==0)
				{
					ManMoveStop=0;
				}	
				else
				{
					ManMoveUp=1;
					ManMoveDown=0;
					ManMoveStop=1;
				}
			}
			//Man motion to stop
			else if(ManMoveStop==0)
			{
				ang=0;
				ManisMoving=0;
				//printf("Angle= %f\n",ang);
				ManMoveUp=0;
				ManMoveDown=1;
				ManMoveStop=1;
				//printf("MouseMoved= %d",MouseMoved);
				MouseMoved=2;
				NowChangeRod=1;
			}
		}
		else if (MouseRotate > 0)
		{
		
			//Man in motion in upward
			if(ManMoveUp==0 && ManMoveDown==1 && ManMoveStop==1)
			{
				ang=ang+5;
				ManisMoving=1;
				if ( ang == 360 || ang == -360 )
				{
					ang = 0;
				}
				NowChangeRod=0;
				//printf("Angle= %f\n",ang);
				if(ang > MaxAng)
				{	
					ManMoveUp=1;
					ManMoveDown=0;
					ManMoveStop=1;
				}
				else
				{
					ManMoveUp=0;
					ManMoveDown=1;
					ManMoveStop=1;
				}
			}
			//Man in motion in downward direction
			else if(ManMoveUp==1 && ManMoveDown==0 && ManMoveStop==1)
			{
				ang=ang-5;
				ManisMoving=1;
				if ( ang == 360 || ang == -360 )
				{
					ang = 0;
				}
				//printf("Angle= %f\n",ang);
				NowChangeRod=0;
				if(ang==0)
				{
					ManMoveStop=0;
				}	
				else
				{
					ManMoveUp=1;
					ManMoveDown=0;
					ManMoveStop=1;
				}
			}
			//Man motion to stop
			else if(ManMoveStop==0)
			{
				ang=0;
				ManisMoving=0;
				//printf("Angle= %f\n",ang);
				ManMoveUp=0;
				ManMoveDown=1;
				ManMoveStop=1;
				//printf("MouseMoved= %d",MouseMoved);
				MouseMoved=2;
				NowChangeRod=1;
			}
		}

		else if (MouseRotate == 0)
		{
			//printf("Angle= %f\n",ang);
			if ( ang < 0 )
			{
				ang += 5;
				ManisMoving=1;
				if ( ang == 360 || ang == -360 )
				{
					ang = 0;
				}
				//printf("Angle= %f\n",ang);
				NowChangeRod=0;
				if ( ang == 0 )
				{
					ang=0;
					ManisMoving=0;
					ManMoveUp=0;
					ManMoveDown=1;
					ManMoveStop=1;
					//printf("MouseMoved= %d",MouseMoved);
					MouseMoved=2;
					NowChangeRod=1;
				}
			}

			else if ( ang > 0 )
			{
				ang -= 5;
				ManisMoving=1;
				if ( ang == 360 || ang == -360 )
				{
					ang = 0;
				}
				//printf("Angle= %f\n",ang);
				NowChangeRod=0;
				if ( ang == 0 )
				{
					ang=0;
					ManisMoving=0;
					ManMoveUp=0;
					ManMoveDown=1;
					ManMoveStop=1;
					//printf("MouseMoved= %d",MouseMoved);
					MouseMoved=2;
					NowChangeRod=1;
				}
			}

			else if ( ang == 0 )
			{
				ang=0;
				ManisMoving=0;
				//printf("Angle= %f\n",ang);
				ManMoveUp=0;
				ManMoveDown=1;
				ManMoveStop=1;
				//printf("MouseMoved= %d",MouseMoved);
				MouseMoved=2;
				NowChangeRod=1;
			}
		}
	}
}



//////////Man Motion to Translate
void Man_RodMotiontoTranslate()
{
	////////If 1st rod is moved
	if (RodtoMove==1)
	{
		if (MouseTranslate < 0)
		{
			
			if (MoveY1st <= UpMaxYTransof1stRed)
			{
				Move1st=(MouseTranslate+1)/10;
				//printf("MouseMove= %f,", Move1st);
				if (MoveY1st < -Move1st)
				{	
					//printf("MouseMoveY= %f", MoveY1st);
					MoveY1st += 0.1;
					
				}
				else
				{	
					//printf("MouseMoveY= %f", MoveY1st);
					MoveY1st -= 0.1;
					
				}
				
			}
		
		}
		else
		{
			if (MoveY1st >= DownMaxYTransof1stRed)
			{
				Move1st=(MouseTranslate)/10;
				//printf("MouseMove= %f,", Move1st);
				if (MoveY1st > -Move1st)
				{	
					//printf("MouseMoveY= %f", MoveY1st);
					MoveY1st -= 0.1;
					RodisMoving = 1;
					
				}
				else
				{	
					//printf("MouseMoveY= %f", MoveY1st);
					MoveY1st += 0.1;
					
				}
				
			}
			
		}
	}

	////////If 2nd rod is moved
	else if (RodtoMove==2)
	{
		if (MouseTranslate < 0)
		{
			
			if (MoveY2nd < UpMaxYTransof2ndRed)
			{
				//printf("UpMaxYTransof2ndRed= %f",MoveY2nd);
				Move2nd=(MouseTranslate+1)/10;//+0.6465;
				if (MoveY2nd < (-Move2nd))//+0.6465))
				{					
					MoveY2nd += 0.08;
					//printf("11111115555555");
				}
				else
				{					
					MoveY2nd -= 0.08;
					//printf("11111115555555");
				}
			}
		}
		else
		{
			if (MoveY2nd >= DownMaxYTransof2ndRed)
			{
				Move2nd=(MouseTranslate)/10;
				//printf("MouseMove= %f", Move);
				if (MoveY2nd > -Move2nd)
				{	
					MoveY2nd -= 0.08;
					//printf("22222220000000");
				}
				else
				{	
					MoveY2nd += 0.08;
					//printf("22222220000000");
				}
			}
		}
	}

	////////If 3rd rod is moved
	else if (RodtoMove==3)
	{
		if (MouseTranslate < 0)
		{
			
			if (MoveY3rd <= UpMaxYTransof3rdRed)
			{
				Move3rd=(MouseTranslate+1)/10;
				if (MoveY3rd < -Move3rd)
				{					
					MoveY3rd += 0.1;
					//printf("11111115555555");
				}
				else
				{					
					MoveY3rd -= 0.1;
					//printf("11111115555555");
				}
			}
		}
		else
		{
			if (MoveY3rd >= DownMaxYTransof3rdRed)
			{
				Move3rd=(MouseTranslate)/10;
				//printf("MouseMove= %f", Move);
				if (MoveY3rd > -Move3rd)
				{	
					MoveY3rd -= 0.1;
					//printf("22222220000000");
				}
				else
				{	
					MoveY3rd += 0.1;
					//printf("22222220000000");
				}
			}
		}
	}

	////////If 4th rod is moved
	else if (RodtoMove==4)
	{
		if (MouseTranslate < 0)
		{
			if (MoveY4th <= UpMaxYTransof4thRed)
			{
				Move4th=(MouseTranslate+1)/10;
				if (MoveY4th < -Move4th)
				{					
					MoveY4th += 0.1;
					//printf("11111115555555");
				}
				else
				{					
					MoveY4th -= 0.1;
					//printf("11111115555555");
				}
			}
		}
		else
		{
			if (MoveY4th >= DownMaxYTransof4thRed)
			{
				Move4th=(MouseTranslate)/10;
				//printf("MouseMove= %f", Move);
				if (MoveY4th > -Move4th)
				{	
					MoveY4th -= 0.1;
					//printf("22222220000000");
				}
				else
				{	
					MoveY4th += 0.1;
					//printf("22222220000000");
				}
			}
		}
	}
}


int Checkcount=1;
int Counter;

static GLfloat count,X,Y,Distance;

int Forward=0;
int Backward=0;
int Upward=0;
int Downward=0;
int BalltouchedMan=0;
int BallisHit=0;

int TouchedLeftWall = 0;
int TouchedRightWall = 0;
int	TouchedDownWall = 0;
int	TouchedUpWall = 0;

static GLfloat k=0.0,ks=0.0;

void MoveTouchedLeftWall()
{
	if ( ks > 0 )
	{
		ks -= .5 ;
		printf(",ks:%f",ks);
		CentreX += .2;
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		TouchedLeftWall = 1;
	}
	else if ( ks <= 0 )
	{
		TouchedLeftWall = 0;
	}
}

void MoveTouchedRightWall()
{
	if ( ks > 0 )
	{
		ks -= .5 ;
		printf(",ks:%f",ks);
		CentreX -= .2;
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		TouchedRightWall = 1;
	}
	else if ( ks <= 0 )
	{
		TouchedRightWall = 0;
	}
}

void MoveTouchedUpWall()
{
	if ( ks > 0 )
	{
		ks -= .5 ;
		printf(",ks:%f",ks);
		CentreY -= .2;
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		TouchedUpWall = 1;
	}
	else if ( ks <= 0 )
	{
		TouchedUpWall = 0;
	}
}

void MoveTouchedDownWall()
{
	if ( ks > 0 )
	{
		ks -= .5 ;
		printf(",ks:%f",ks);
		CentreY += .2;
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		TouchedDownWall = 1;
	}
	else if ( ks <= 0 )
	{
		TouchedDownWall = 0;
	}
}

void MotionA()
{
	/*if ( Checkcount == 1 )
	{
		//printf(",d1:%f", d);
		count = (CentreX-d);
		printf(",Count:%f", count);
		if ( count == 0 )
		{
			Counter = 0;
		}

		else if ( count < 0 )
		{
			Counter = (-1)*count;
		}

		else if ( count > 0 )
		{
			Counter = count;
		}

		printf(",Counter:%d", Counter);
	}
	if (Counter > 0) 
	{
		Counter --;
		printf(",Counter:%d",Counter);
		CentreX -= .2;
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		Counter = 0;
		Checkcount=1;
	}*/

	
	if ( Checkcount == 1 )
	{
		Distance = d;
	}

	if ( Distance > 0 )
	{
		Distance -= .5 ;
		printf(",Distance:%f",Distance);
		CentreX -= .2;
		k += .2;
		ks = d-k;
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount = 0;
	}
	else if ( Distance <= 0 )
	{
		Checkcount = 1;
		printf("Checks again now");
	}
}


void BallMotion()
{
	/*Variable define for color checking*/
	//GLint viewport[4];
	//GLubyte pixel[3];

	GLint viewport[4];
	GLubyte PixForward[3];
	GLubyte PixBackward[3];
	GLubyte PixUpward[3];
	GLubyte PixDownward[3];

	GLdouble Centrex,Centrey,Centrez;
	GLdouble UnprojectingX[100],UnprojectingY[100],UnprojectingZ[100];

	GLdouble modelMatrix[16]; 
	GLdouble projMatrix[16]; 
	//GLint viewport[4]; 


	/*unsigned char *PixForward=malloc(3);
	unsigned char *PixBackward=malloc(3);
	unsigned char *PixUpward=malloc(3);
	unsigned char *PixDownward=malloc(3);*/

	/*Reading pixels*/
	//glGetIntegerv(GL_VIEWPORT,viewport);
	//glReadPixels(x,viewport[3]-y,1,1,GL_RGB,GL_UNSIGNED_BYTE,(void *)pixel);

	Forward = 1;
	glGetIntegerv(GL_VIEWPORT,viewport);

	//int APIENTRY gluProject (
    //GLdouble        objx, 
    //GLdouble        objy, 
    //GLdouble        objz,  
    //const GLdouble  modelMatrix[16], 
    //const GLdouble  projMatrix[16], 
    //const GLint     viewport[4], 
    //GLdouble        *winx, 
    //GLdouble        *winy, 
    //GLdouble        *winz);

	

	Centrex=(double)CentreX;
	Centrey=(double)CentreY;
	Centrez=(double)CentreZ;
	printf("Centrex:%lf,Centrey:%lf,Centrez:%lf\n",
		Centrex,Centrey,Centrez);
	printf("CentreX:%f,CentreY:%f,CentreZ:%f\n",
		CentreX,CentreY,CentreZ);

	
	glGetDoublev(GL_MODELVIEW_MATRIX,modelMatrix); 
	glGetDoublev(GL_PROJECTION_MATRIX,projMatrix); 
	glGetIntegerv(GL_VIEWPORT,viewport);

	gluProject(Centrex,Centrey,Centrez,modelMatrix,projMatrix,viewport,
			&UnprojectingX,&UnprojectingY,&UnprojectingZ);
	printf("UnprojectingX:%lf,UnprojectingY:%lf,UnprojectingZ:%lf\n",
		UnprojectingX[0],UnprojectingY[0],UnprojectingZ[0]);
//	printf("UnprojectingX:%lf,UnprojectingY:%lf,UnprojectingZ:%lf\n",
		//UnprojectingX[1],UnprojectingY[1],UnprojectingZ[1]);

	
	//glReadPixels(&(UnprojectingX),viewport[3]-&(UnprojectingY),1,1,GL_RGB,GL_UNSIGNED_BYTE,(void *)PixForward);

	//glReadPixels(CentreX,viewport[3]-CentreY,1,1,GL_RGB,GL_UNSIGNED_BYTE,(void *)PixForward);
	//glReadPixels(CentreX+1.0,viewport[3]-CentreY,1,1,GL_RGB,GL_UNSIGNED_BYTE,(void *)PixBackward);
	//glReadPixels(CentreX,viewport[3]-(CentreY-1.0),1,1,GL_RGB,GL_UNSIGNED_BYTE,(void *)PixUpward);
	//glReadPixels(CentreX,viewport[3]-(CentreY+1.0),1,1,GL_RGB,GL_UNSIGNED_BYTE,(void *)PixDownward);

	//printf("Rf:%d\tGf:%d\tBf:%d\n",PixForward[0],PixForward[1],PixForward[2]);

	//printf("\nRb:%d\tGb:%d\tBb:%d\n",PixBackward[0],PixBackward[1],PixBackward[2]);
	//printf("Ru:%d\tGu:%d\tBu:%d\n",PixUpward[0],PixUpward[1],PixUpward[2]);
	//printf("Rd:%d\tGd:%d\tBd:%d\n",PixDownward[0],PixDownward[1],PixDownward[2]);
	//printf("R:%d\tG:%d\tB:%d\n",pixel[0],pixel[1],pixel[2]);

	/*glReadPixels(CentreX-1.0,CentreY,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixForward);
	glReadPixels(CentreX+25.4,CentreY,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixBackward);
	glReadPixels(CentreX,CentreY-25.4,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixUpward);
	glReadPixels(CentreX,CentreY+7.4,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixDownward);
	//printf("Rf:%d\tGf:%d\tBf:%d\n",*(PixForward+0),*(PixForward+1),*(PixForward+2));
	//printf("\nRb:%d\tGb:%d\tBb:%d\n",*(PixBackward+0),*(PixBackward+1),*(PixBackward+2));
	//printf("Ru:%d\tGu:%d\tBu:%d\n",*(PixUpward+0),*(PixUpward+1),*(PixUpward+2));
	//printf("Rd:%d\tGd:%d\tBd:%d\n",*(PixDownward+0),*(PixDownward+1),*(PixDownward+2));*/
	
		
    if ((PixDownward[0]==(204) && PixDownward[1]==(0) && PixDownward[2]==(0))) 
	{
		BallisHit = 1;
		BalltouchedMan = 1;
		Forward = 1;
		Backward = 0;
		Upward = 0;
		Downward = 0;
		//printf("\nForward:%d",Forward);
		//printf("Balltouchedman");
	}

	else if ((*(PixForward+0)>=(204) && *(PixForward+1)==(000) && *(PixForward+2)==(000))) 
	{
		BallisHit = 1;
		BalltouchedMan = 1;
		Forward = 0;
		Backward = 1;
		Upward = 0;
		Downward = 0;
		//printf("\nBackward:%d",Backward);
		//printf("Balltouchedman");
	}

	else if ((*(PixUpward+0)>=(204) && *(PixUpward+1)==(000) && *(PixUpward+2)==(000))) 
	{
		BallisHit = 1;
		BalltouchedMan = 1;
		Forward = 0;
		Backward = 0;
		Upward = 1;
		Downward = 0;
		//printf("\nUpward:%d",Upward);
		//printf("Balltouchedman");
	}

	else if ((*(PixDownward+0)>=(204) && *(PixDownward+1)==(000) && *(PixDownward+2)==(000))) 
	{
		BallisHit = 1;
		BalltouchedMan = 1;
		Forward = 0;
		Backward = 0;
		Upward = 0;
		Downward = 1;
		//printf("\nDownward:%d",Downward);
		//printf("Balltouchedman");
	}

	else //if ((*(PixForward+0)!=(205) && *(PixForward+1)!=(205) && *(PixForward+2)!=(205))
		//&& (*(PixBackward+0)!=(205) && *(PixBackward+1)!=(205) && *(PixBackward+2)!=(205))
		//&& (*(PixUpward+0)!=(205) && *(PixUpward+1)!=(205) && *(PixUpward+2)!=(205))
		//&& (*(PixDownward+0)!=(205) && *(PixDownward+1)!=(205) && *(PixDownward+2)!=(205))) 
	{
		BallisHit = 0;
		BalltouchedMan = 0;
		Forward = 0;
		Backward = 0;
		Upward = 0;
		Downward = 0;
		//printf("BallDIDN'Ttouchedman");
	}

	if ( CentreX <= -38.2922+1.0 )
	{
		TouchedLeftWall = 1;
		TouchedRightWall = 0;
		TouchedDownWall = 0;
		TouchedUpWall = 0;
	}
	else if ( CentreX >= 9.7078-1.0 )
	{
		TouchedLeftWall = 0;
		TouchedRightWall = 1;
		TouchedDownWall = 0;
		TouchedUpWall = 0;
	}
	else if ( CentreY <= -14.0340+1.0 )
	{
		TouchedLeftWall = 0;
		TouchedRightWall = 0;
		TouchedDownWall = 1;
		TouchedUpWall = 0;
	}
	else if ( CentreY >= 12.9660-1.0 )
	{
		TouchedLeftWall = 0;
		TouchedRightWall = 0;
		TouchedDownWall = 0;
		TouchedUpWall = 1;
	}
		
	if ( Forward == 1 && (TouchedLeftWall == 0 && 
		TouchedRightWall == 0 && TouchedDownWall == 0
		&& TouchedUpWall == 0) )
	{
		dCalculate();
		MotionA();
	}

	if ( TouchedLeftWall == 1 && 
		TouchedRightWall == 0 && TouchedDownWall == 0
		&& TouchedUpWall == 0 )
	{
		MoveTouchedLeftWall();
		printf("BalltouchedLeft");
	}

	else if ( TouchedLeftWall == 0 && 
		TouchedRightWall == 1 && TouchedDownWall == 0
		&& TouchedUpWall == 0 )
	{
		MoveTouchedRightWall();
		printf("BalltouchedRight");
	}

	else if ( TouchedLeftWall == 0 && 
		TouchedRightWall == 0 && TouchedDownWall == 0
		&& TouchedUpWall == 1 )
	{
		MoveTouchedUpWall();
	}

	else if ( TouchedLeftWall == 0 && 
		TouchedRightWall == 0 && TouchedDownWall == 1
		&& TouchedUpWall == 0 )
	{
		MoveTouchedDownWall();
	}

}

//static GLfloat Blueang=0.0;
//int BlueManisMoving=0;
//int BlueManMoveUp=0,BlueManMoveDown=1,BlueManMoveStop=1;

void BlueManMotiontoRotate()
{
	//Man in motion in upward
	if(BlueManMoveUp==0 && BlueManMoveDown==1 && BlueManMoveStop==1)
	{
		Blueang += 5;
		BlueManisMoving=1;
		if ( Blueang == 360 || Blueang == -360 )
		{
			Blueang = 0;
		}
		//NowChangeRod=0;
		//printf("Angle= %f\n",ang);
		if(Blueang > 250)
		{	
			BlueManMoveUp=1;
			BlueManMoveDown=0;
			BlueManMoveStop=1;
		}
		else
		{
			BlueManMoveUp=0;
			BlueManMoveDown=1;
			BlueManMoveStop=1;
		}
	}
	//Man in motion in downward direction
	else if(BlueManMoveUp==1 && BlueManMoveDown==0
		&& BlueManMoveStop==1)
	{
		Blueang -= 5;
		BlueManisMoving=1;
		if ( Blueang == 360 || Blueang == -360 )
		{
			Blueang = 0;
		}
		//NowChangeRod=0;
		//printf("Angle= %f\n",ang);
		if(Blueang==0)
		{
			BlueManMoveStop=0;
		}	
		else
		{
			BlueManMoveUp=1;
			BlueManMoveDown=0;
			BlueManMoveStop=1;
		}
	}
	
	//Man motion to stop
	else if(BlueManMoveStop==0)
	{
		Blueang=0;
		BlueManisMoving=0;
		//printf("Angle= %f\n",ang);
		//BlueManMoveUp=0;
		//BlueManMoveDown=1;
		//BlueManMoveStop=1;
		//NowChangeRod=1;
	}
}

static GLfloat XCoord,DistBetweenRod1_Ball;
static GLfloat DistBetweenRod2_Ball;
static GLfloat DistBetweenRod3_Ball;
static GLfloat DistBetweenRod4_Ball;

int RodUp1st = 0, RodDown1st = 0, RodStop1st = 1;
int RodUp2nd = 0, RodDown2nd = 0, RodStop2nd = 1;
int RodUp3rd = 0, RodDown3rd = 0, RodStop3rd = 1;
int RodUp4th = 0, RodDown4th = 0, RodStop4th = 1;

void BlueMan_RodMotiontoTranslate()
{
	if ( CentreX < 0 )
	{
		XCoord = (-1)*CentreX;
	}

	else
	{
		XCoord = CentreX;
	}

	DistBetweenRod1_Ball = sqrt((XCoord-32.7922)*(XCoord-32.7922));
	DistBetweenRod2_Ball = sqrt((XCoord-27.6672)*(XCoord-27.6672));
	DistBetweenRod3_Ball = sqrt((XCoord-16.8743)*(XCoord-16.8743));
	DistBetweenRod4_Ball = sqrt((XCoord-6.1556)*(XCoord-6.1556));

	/*printf("DistBetweenRod1_Ball:%f",DistBetweenRod1_Ball);
	printf("DistBetweenRod2_Ball:%f",DistBetweenRod2_Ball);
	printf("DistBetweenRod3_Ball:%f",DistBetweenRod3_Ball);
	printf("DistBetweenRod4_Ball:%f",DistBetweenRod4_Ball);*/

	if ( DistBetweenRod1_Ball < DistBetweenRod2_Ball )
	{
		if ( DistBetweenRod1_Ball < DistBetweenRod3_Ball )
		{
			if ( DistBetweenRod1_Ball < DistBetweenRod4_Ball )
			{
				////////1
				//printf("\nDistBetweenRod1_Ball");
				if ( RodUp1st == 0 && RodDown1st == 0 && 
					RodStop1st == 1 )
				{
					RodUp1st = 1;
					RodDown1st = 0;
					RodStop1st = 0;
				}

				if ( RodUp1st == 1 && RodDown1st == 0 &&
					RodStop1st == 0 )
				{
					BlueMoveY1st += 0.1;
					if ( BlueMoveY1st < UpMaxYTransof1stBlue )
					{
						RodUp1st = 1;
						RodDown1st = 0;
						RodStop1st = 0;
					}
					else
					{
						RodUp1st = 0;
						RodDown1st = 1;
						RodStop1st = 0;
					}
				}

				if ( RodUp1st == 0 && RodDown1st == 1 && RodStop1st == 0 )
				{
					BlueMoveY1st -= 0.1;
					if ( BlueMoveY1st > DownMaxYTransof1stBlue )
					{
						RodUp1st = 0;
						RodDown1st = 1;
						RodStop1st = 0;
					}
					else
					{
						RodUp1st = 1;
						RodDown1st = 0;
						RodStop1st = 0;
					}
				}
			}
			else
			{
				////////4
				//printf("\nDistBetweenRod4_Ball");
				if ( RodUp4th == 0 && RodDown4th == 0 && 
					RodStop4th == 1 )
				{
					RodUp4th = 1;
					RodDown4th = 0;
					RodStop4th = 0;
				}

				if ( RodUp4th == 1 && RodDown4th == 0 &&
					RodStop4th == 0 )
				{
					BlueMoveY4th += 0.1;
					if ( BlueMoveY4th < UpMaxYTransof4thBlue )
					{
						RodUp4th = 1;
						RodDown4th = 0;
						RodStop4th = 0;
					}
					else
					{
						RodUp4th = 0;
						RodDown4th = 1;
						RodStop4th = 0;
					}
				}

				if ( RodUp4th == 0 && RodDown4th == 1 && RodStop4th == 0 )
				{
					BlueMoveY4th -= 0.1;
					if ( BlueMoveY4th > DownMaxYTransof4thBlue )
					{
						RodUp4th = 0;
						RodDown4th = 1;
						RodStop4th = 0;
					}
					else
					{
						RodUp4th = 1;
						RodDown4th = 0;
						RodStop4th = 0;
					}
				}
			}
		}
		else
		{
			if ( DistBetweenRod3_Ball < DistBetweenRod4_Ball )
			{
				///////3
				//printf("\nDistBetweenRod3_Ball");
				if ( RodUp3rd == 0 && RodDown3rd == 0 && 
					RodStop3rd == 1 )
				{
					RodUp3rd = 1;
					RodDown3rd = 0;
					RodStop3rd = 0;
				}

				if ( RodUp3rd == 1 && RodDown3rd == 0 &&
					RodStop3rd == 0 )
				{
					BlueMoveY3rd += 0.1;
					if ( BlueMoveY3rd < UpMaxYTransof3rdBlue )
					{
						RodUp3rd = 1;
						RodDown3rd = 0;
						RodStop3rd = 0;
					}
					else
					{
						RodUp3rd = 0;
						RodDown3rd = 1;
						RodStop3rd = 0;
					}
				}

				if ( RodUp3rd == 0 && RodDown3rd == 1 && RodStop3rd == 0 )
				{
					BlueMoveY3rd -= 0.1;
					if ( BlueMoveY3rd > DownMaxYTransof3rdBlue )
					{
						RodUp3rd = 0;
						RodDown3rd = 1;
						RodStop3rd = 0;
					}
					else
					{
						RodUp3rd = 1;
						RodDown3rd = 0;
						RodStop3rd = 0;
					}
				}
			}
			else
			{
				///////4
				//printf("\nDistBetweenRod4_Ball");
				if ( RodUp4th == 0 && RodDown4th == 0 && 
					RodStop4th == 1 )
				{
					RodUp4th = 1;
					RodDown4th = 0;
					RodStop4th = 0;
				}

				if ( RodUp4th == 1 && RodDown4th == 0 &&
					RodStop4th == 0 )
				{
					BlueMoveY4th += 0.1;
					if ( BlueMoveY4th < UpMaxYTransof4thBlue )
					{
						RodUp4th = 1;
						RodDown4th = 0;
						RodStop4th = 0;
					}
					else
					{
						RodUp4th = 0;
						RodDown4th = 1;
						RodStop4th = 0;
					}
				}

				if ( RodUp4th == 0 && RodDown4th == 1 && RodStop4th == 0 )
				{
					BlueMoveY4th -= 0.1;
					if ( BlueMoveY4th > DownMaxYTransof4thBlue )
					{
						RodUp4th = 0;
						RodDown4th = 1;
						RodStop4th = 0;
					}
					else
					{
						RodUp4th = 1;
						RodDown4th = 0;
						RodStop4th = 0;
					}
				}
			}
		}
	}
	else if ( DistBetweenRod2_Ball < DistBetweenRod3_Ball )
	{
		if ( DistBetweenRod2_Ball < DistBetweenRod4_Ball )
		{
			///////2
			//printf("\nDistBetweenRod2_Ball");
			if ( RodUp2nd == 0 && RodDown2nd == 0 && RodStop2nd == 1 )
			{
				RodUp2nd = 1;
				RodDown2nd = 0;
				RodStop2nd = 0;
			}

			if ( RodUp2nd == 1 && RodDown2nd == 0 && RodStop2nd == 0 )
			{
				BlueMoveY2nd += 0.1;
				if ( BlueMoveY2nd < UpMaxYTransof2ndBlue )
				{
					RodUp2nd = 1;
					RodDown2nd = 0;
					RodStop2nd = 0;
				}
				else
				{
					RodUp2nd = 0;
					RodDown2nd = 1;
					RodStop2nd = 0;
				}
			}

			if ( RodUp2nd == 0 && RodDown2nd == 1 && RodStop2nd == 0 )
			{
				BlueMoveY2nd -= 0.1;
				if ( BlueMoveY2nd > DownMaxYTransof2ndBlue )
				{
					RodUp2nd = 0;
					RodDown2nd = 1;
					RodStop2nd = 0;
				}
				else
				{
					RodUp2nd = 1;
					RodDown2nd = 0;
					RodStop2nd = 0;
				}
			}
		}
		else
		{
			///////4
			//printf("\nDistBetweenRod4_Ball");
			if ( RodUp4th == 0 && RodDown4th == 0 && 
					RodStop4th == 1 )
			{
				RodUp4th = 1;
				RodDown4th = 0;
				RodStop4th = 0;
			}

			if ( RodUp4th == 1 && RodDown4th == 0 &&
				RodStop4th == 0 )
			{
				BlueMoveY4th += 0.1;
				if ( BlueMoveY4th < UpMaxYTransof4thBlue )
				{
					RodUp4th = 1;
					RodDown4th = 0;
					RodStop4th = 0;
				}
				else
				{
					RodUp4th = 0;
					RodDown4th = 1;
					RodStop4th = 0;
				}
			}

			if ( RodUp4th == 0 && RodDown4th == 1 && RodStop4th == 0 )
			{
				BlueMoveY4th -= 0.1;
				if ( BlueMoveY4th > DownMaxYTransof4thBlue )
				{
					RodUp4th = 0;
					RodDown4th = 1;
					RodStop4th = 0;
				}
				else
				{
					RodUp4th = 1;
					RodDown4th = 0;
					RodStop4th = 0;
				}
			}
		}
	}
	else if ( DistBetweenRod3_Ball < DistBetweenRod4_Ball )
	{
		///////3
		//printf("\nDistBetweenRod3_Ball");
		if ( RodUp3rd == 0 && RodDown3rd == 0 && 
			RodStop3rd == 1 )
		{
			RodUp3rd = 1;
			RodDown3rd = 0;
			RodStop3rd = 0;
		}

		if ( RodUp3rd == 1 && RodDown3rd == 0 &&
			RodStop3rd == 0 )
		{
			BlueMoveY3rd += 0.1;
			if ( BlueMoveY3rd < UpMaxYTransof3rdBlue )
			{
				RodUp3rd = 1;
				RodDown3rd = 0;
				RodStop3rd = 0;
			}
			else
			{
				RodUp3rd = 0;
				RodDown3rd = 1;
				RodStop3rd = 0;
			}
		}

		if ( RodUp3rd == 0 && RodDown3rd == 1 && RodStop3rd == 0 )
		{
			BlueMoveY3rd -= 0.1;
			if ( BlueMoveY3rd > DownMaxYTransof3rdBlue )
			{
				RodUp3rd = 0;
				RodDown3rd = 1;
				RodStop3rd = 0;
			}
			else
			{
				RodUp3rd = 1;
				RodDown3rd = 0;
				RodStop3rd = 0;
			}
		}
	}
	else //if ( DistBetweenRod3_Ball >= DistBetweenRod4_Ball )
	{
		///////4
		//printf("\nDistBetweenRod4_Ball");
		if ( RodUp4th == 0 && RodDown4th == 0 && 
			RodStop4th == 1 )
		{
			RodUp4th = 1;
			RodDown4th = 0;
			RodStop4th = 0;
		}

		if ( RodUp4th == 1 && RodDown4th == 0 &&
			RodStop4th == 0 )
		{
			BlueMoveY4th += 0.1;
			if ( BlueMoveY4th < UpMaxYTransof4thBlue )
			{
				RodUp4th = 1;
				RodDown4th = 0;
				RodStop4th = 0;
			}
			else
			{
				RodUp4th = 0;
				RodDown4th = 1;
				RodStop4th = 0;
			}
		}

		if ( RodUp4th == 0 && RodDown4th == 1 && RodStop4th == 0 )
		{
			BlueMoveY4th -= 0.1;
			if ( BlueMoveY4th > DownMaxYTransof4thBlue )
			{
				RodUp4th = 0;
				RodDown4th = 1;
				RodStop4th = 0;
			}
			else
			{
				RodUp4th = 1;
				RodDown4th = 0;
				RodStop4th = 0;
			}
		}
	}
}

void motionfn(int x,int y)
{
	
	//////////Perform motion only if mouse is clicked
	if (MouseMoved == 1 || Distance > 0)
	{
		
		//////////Call Man Motion to Rotate
		ManMotiontoRotate();
	 
		//////////Call Man Motion to Translate
		Man_RodMotiontoTranslate();
	

		//////////Motion of the ball
		BallMotion();
	}

	if (MouseMoved == 1 || MouseMoved == 2 )
	{
		//////////Call Blue Man Motion to Rotate
		BlueManMotiontoRotate();

		//////////Call Man Motion to Translate
		BlueMan_RodMotiontoTranslate();
	}

		BallMoved = 1;
	

	glutPostRedisplay();
}


////////////
// Called to draw scene
void RenderScene(void)
{	
	// Clear the window with current clearing color
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	  
	glPushMatrix();
		//Called to make the Foosball model
		FoosballModel();
	glPopMatrix();

	// Show the graphics
	glutSwapBuffers();

	// Flush drawing commands
	glFlush();
}

// This function does any needed initialization on the rendering
// context. 
void SetupRC()
{
	// Blue & Green mix background
	glClearColor(0.0f, 0.5019607f, 0.5019607f, 1.0f );
	//glClearColor(0, 1, 1, 1 );
	
	//Almost khairo background
	//glClearColor(0.8117647f, 0.8509803f, 0.8509803,1.0f);
	
	glEnable(GL_DEPTH_TEST);	
//	glEnable(GL_DITHER);
	glShadeModel(GL_SMOOTH);
}

void SpecialKeys(int key, int x, int y)
{
	////Press Left arrow key to rotate the left direction rod
	if(key == GLUT_KEY_LEFT)
	{
		if ( NowChangeRod == 1)
		{
			RodtoMove += 1;
			if (RodtoMove > 4)
			{
				RodtoMove -= 1;
			}
			RodMoved=1;
		}
	}

	////Press Right arrow key to rotate the right direction rod
	if(key == GLUT_KEY_RIGHT)
	{
		if ( NowChangeRod == 1)
		{
			RodtoMove -= 1;
			if (RodtoMove < 1)
			{
				RodtoMove += 1;
			}
			RodMoved=1;
		}
	}

	////Press Insert key to rotate Negative x-axis
	if(key == GLUT_KEY_INSERT)
	{
		xRot-= 5.0f;
		xAng=xRot;
		printf("X= %f\n",xAng);
	}

	////Press Home key to rotate Negative y-axis
	if(key == GLUT_KEY_HOME)
	{
		yRot -= 5.0f;
		yAng=yRot;
		printf("Y= %f\n",yAng);
	}

	////Press End key to rotate Positive y-axis
	if(key == GLUT_KEY_END)
	{
		yRot += 5.0f;
		yAng=yRot;
		printf("Y= %f\n",yAng);
	}

	////Press Page Up key to rotate Negative z-axis
	if(key == GLUT_KEY_PAGE_UP)
	{
		zRot -= 5.0f;
		zAng=zRot;
		printf("Z= %f\n",zAng);
	}

	////Press Page Down key to rotate Positive z-axis
	if(key == GLUT_KEY_PAGE_DOWN)
	{
		zRot += 5.0f;
		zAng=zRot;
		printf("Z= %f\n",zAng);
	}

	////If x-axis rotated is greater than 356 degree, then make ang=0
	if(key > 356.0f)
		xRot = 0.0f;

	////If x-axis rotated is less than -1 degree, then make ang=355
	if(key < -1.0f)
		xRot = 355.0f;

	////If y-axis rotated is greater than 356 degree, then make ang=0
	if(key > 356.0f)
		yRot = 0.0f;

	////If y-axis rotated is less than -1 degree, then make ang=355
	if(key < -1.0f)
		yRot = 355.0f;

	////If z-axis rotated is greater than 356 degree, then make ang=0
	if(key > 356.0f)
		zRot = 0.0f;

	////If z-axis rotated is less than -1 degree, then make ang=355
	if(key < -1.0f)
		zRot = 355.0f;

	// Refresh the Window
	glutPostRedisplay();
}



void Mouse(int button, int state, int x, int y)	       
{
	/*Variable define for color checking*/
	GLint viewport[4];
	GLubyte pixel[3];

	if (state==GLUT_DOWN)
	{
		
	/*Way of checking color*/
	glGetIntegerv(GL_VIEWPORT,viewport);
	glReadPixels(x,viewport[3]-y,1,1,GL_RGB,GL_UNSIGNED_BYTE,(void *)pixel);
	printf("R:%d\tG:%d\tB:%d\n",pixel[0],pixel[1],pixel[2]);
	printf("MousePosition= %d %d\n",x, y);

		MouseMoved=2;
		if (MouseCheck==0)
		{
			s=clock();
			x1=x;
			y11=y;
			//printf("MousePosition= %f %f\n",x1, y11);
			MouseCheck++;
		}
	}

	else if (state==GLUT_UP)
	{	
		if (MouseCheck!=0)
		{
			x2=x;
			y2=y;
			//printf("MousePosition= %f %f\n",x2, y2);
			
			////Calculate Mouse Rotate distance
			distance=sqrt(((x2-x1)*(x2-x1))+((y2-y11)*(y2-y11)));
			//printf("\ndistance= %f",distance);
			MouseRotateBeforeNormalize = x2-x1;
			//printf("\nMouseRotateBeforeNormalize= %f",MouseRotateBeforeNormalize);

			MouseTranslateBeforeNormalize = y2-y11;
			//printf("\nMouseTranslateBeforeNormalize= %f",MouseTranslateBeforeNormalize);
			
			MouseCheck=0;
			e=clock();
			Time=(float)(e-s)/CLK_TCK;
//			printf("Time:%f\n",Time);

			//MouseRotate=Velocity Factor*Maximizing Factor
			//      =(Obtained Velocity/Maximum Velocity)*10000
			//      =(((x2-x1)/Time)/(Max.Distance/LeastTime))*10000
			//      =(((x2-x1)/Time)/(791/0.015))*10000
			//      =(((x2-x1)/Time)/52733.3333))*10000
			MouseRotate=((MouseRotateBeforeNormalize/Time)/52733.3333)*10000;
//			printf("MouseRotate= %f,",MouseRotate);

			//MouseTranslate=Velocity Factor*Maximizing Factor
			//      =(Obtained Velocity/Maximum Velocity)*10000
			//      =(((y2-y11)/Time)/(Max.Distance/LeastTime))*10000
			//      =(((y2-y11)/Time)/(538/0.015))*10000
			//      =(((y2-y11)/Time)/35866.66667))*10000
			MouseTranslate=((MouseTranslateBeforeNormalize/Time)/35866.66667)*10000;
//			printf("MouseTranslate= %f\n",MouseTranslate);

			if ( RodtoMove == 1 )
			{
			}

			if ( RodtoMove == 2 )
			{
			}

			if ( RodtoMove == 3 )
			{
			}

			if ( RodtoMove == 4 )
			{
			}

			CalcForceMaxAng();
			//printf("RodMovedNo.= % d\n",RodtoMove);			
		}
		if (MouseMoved=2)
		{
			MouseMoved=1;
		}
	}
	glutPostRedisplay();
}


void ChangeSize(int w, int h)
{
	GLfloat nRange = 100.0f;

	// Prevent a divide by zero
	if(h == 0)
		h = 1;

	// Set Viewport to window dimensions
    glViewport(0, 0, w, h);

	// Reset coordinate system
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	// Establish clipping volume (left, right, bottom, top, near, far)
    if (w <= h) 
		glOrtho (-nRange, nRange, -nRange*h/w, nRange*h/w, -nRange, nRange);
    else 
		glOrtho (-nRange*w/h, nRange*w/h, -nRange, nRange, -nRange, nRange);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("RGB Cube");
	glutReshapeFunc(ChangeSize);
	glutSpecialFunc(SpecialKeys);
	glutMouseFunc(Mouse);
	glutDisplayFunc(RenderScene);
	glutIdleFunc(motionfn);
			
	glutReshapeWindow(794,600);

	SetupRC();
	glutMainLoop();

	return 0;
}
