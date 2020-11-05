#include "BlueRod.h"

////////////
//Points for Blue1stman
//Man points from AtoD
GLfloat Blue1stManAtoD[5][3]={
		{-33.4729,-12.8456,3.4938},//A
		{-33.4729,-11.2215,3.4938},//B
		{-31.9729,-11.2215,3.4938},//C
		{-31.9729,-12.8456,3.4938},//D
		{-33.4729,-12.8456,3.4938}//A
				};
//Man points ABFE
GLfloat Blue1stManABFE[5][3]={
		{-33.4729,-12.8456,3.4938},//A
		{-33.4729,-11.2215,3.4938},//B
		{-33.4729,-11.2215,0.8897},//F
		{-33.4729,-12.8456,0.8897},//E
		{-33.4729,-12.8456,3.4938}//A
				};
//Man points CDKL
GLfloat Blue1stManCDKL[5][3]={
		{-31.9729,-11.2215,3.4938},//C
		{-31.9729,-12.8456,3.4938},//D
		{-31.9729,-12.8456,1.8073},//K
		{-31.9729,-11.2215,1.8073},//L
		{-31.9729,-11.2215,3.4938}//C
				};
//Man points EFGH
GLfloat Blue1stManEFGH[5][3]={
		{-33.4729,-12.8456,0.8897},//E
		{-33.4729,-11.2215,0.8897},//F
		{-32.7600,-11.2215,0.1766},//G
		{-32.7600,-12.8456,0.1766},//H
		{-33.4729,-12.8456,0.8897}//E
				};
//Man points GHIJ
GLfloat Blue1stManGHIJ[5][3]={
		{-32.7600,-11.2215,0.1766},//G
		{-32.7600,-12.8456,0.1766},//H
		{-32.6576,-12.8456,0.3336},//I
		{-32.6576,-11.2215,0.3336},//J
		{-32.7600,-11.2215,0.1766}//G
				};
//Man points IJLK
GLfloat Blue1stManIJLK[5][3]={
		{-32.6576,-12.8456,0.3336},//I
		{-32.6576,-11.2215,0.3336},//J
		{-31.9729,-11.2215,1.8073},//L
		{-31.9729,-12.8456,1.8073},//K
		{-32.6576,-12.8456,0.3336},//I
				};

/////Blue 1st Man Model
void Blue1stRod1stManModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 1st man
	//glColor3f(0.0,0.0,0.4);
	
	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j],Blue1stManAtoD[i][j+1],Blue1stManAtoD[i][j+2]);
			glVertex3f(Blue1stManAtoD[i+1][j],Blue1stManAtoD[i+1][j+1],Blue1stManAtoD[i+1][j+2]);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j],Blue1stManABFE[i][j+1],Blue1stManABFE[i][j+2]);
			glVertex3f(Blue1stManABFE[i+1][j],Blue1stManABFE[i+1][j+1],Blue1stManABFE[i+1][j+2]);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j],Blue1stManCDKL[i][j+1],Blue1stManCDKL[i][j+2]);
			glVertex3f(Blue1stManCDKL[i+1][j],Blue1stManCDKL[i+1][j+1],Blue1stManCDKL[i+1][j+2]);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j],Blue1stManEFGH[i][j+1],Blue1stManEFGH[i][j+2]);
			glVertex3f(Blue1stManEFGH[i+1][j],Blue1stManEFGH[i+1][j+1],Blue1stManEFGH[i+1][j+2]);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j],Blue1stManGHIJ[i][j+1],Blue1stManGHIJ[i][j+2]);
			glVertex3f(Blue1stManGHIJ[i+1][j],Blue1stManGHIJ[i+1][j+1],Blue1stManGHIJ[i+1][j+2]);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j],Blue1stManIJLK[i][j+1],Blue1stManIJLK[i][j+2]);
			glVertex3f(Blue1stManIJLK[i+1][j],Blue1stManIJLK[i+1][j+1],Blue1stManIJLK[i+1][j+2]);
		}
	glEnd();

	//1st Blue rod 1st Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229,-12.034,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////
//For Blue 2nd Man Model
void Blue1stRod2ndManModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 2nd man
	//glColor3f(0.0,0.0,0.4);
	//Lines for man
	glBegin(GL_POLYGON);
		//Blue2ndManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j],Blue1stManAtoD[i][j+1]+8.125,Blue1stManAtoD[i][j+2]);
			glVertex3f(Blue1stManAtoD[i+1][j],Blue1stManAtoD[i+1][j+1]+8.125,Blue1stManAtoD[i+1][j+2]);
		}
		//Blue2ndManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j],Blue1stManABFE[i][j+1]+8.125,Blue1stManABFE[i][j+2]);
			glVertex3f(Blue1stManABFE[i+1][j],Blue1stManABFE[i+1][j+1]+8.125,Blue1stManABFE[i+1][j+2]);
		}
		//Blue2ndManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j],Blue1stManCDKL[i][j+1]+8.125,Blue1stManCDKL[i][j+2]);
			glVertex3f(Blue1stManCDKL[i+1][j],Blue1stManCDKL[i+1][j+1]+8.125,Blue1stManCDKL[i+1][j+2]);
		}
		//Blue2ndManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j],Blue1stManEFGH[i][j+1]+8.125,Blue1stManEFGH[i][j+2]);
			glVertex3f(Blue1stManEFGH[i+1][j],Blue1stManEFGH[i+1][j+1]+8.125,Blue1stManEFGH[i+1][j+2]);
		}
		//Blue2ndManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j],Blue1stManGHIJ[i][j+1]+8.125,Blue1stManGHIJ[i][j+2]);
			glVertex3f(Blue1stManGHIJ[i+1][j],Blue1stManGHIJ[i+1][j+1]+8.125,Blue1stManGHIJ[i+1][j+2]);
		}
		//Blue2ndManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j],Blue1stManIJLK[i][j+1]+8.125,Blue1stManIJLK[i][j+2]);
			glVertex3f(Blue1stManIJLK[i+1][j],Blue1stManIJLK[i+1][j+1]+8.125,Blue1stManIJLK[i+1][j+2]);
		}
	glEnd();

	//1st Blue rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229,-12.034+8.125,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

//For Blue 3rd Man Model
void Blue1stRod3rdManModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 3rd man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue3rdManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j],Blue1stManAtoD[i][j+1]+16.25,Blue1stManAtoD[i][j+2]);
			glVertex3f(Blue1stManAtoD[i+1][j],Blue1stManAtoD[i+1][j+1]+16.25,Blue1stManAtoD[i+1][j+2]);
		}
		//Blue3rdManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j],Blue1stManABFE[i][j+1]+16.25,Blue1stManABFE[i][j+2]);
			glVertex3f(Blue1stManABFE[i+1][j],Blue1stManABFE[i+1][j+1]+16.25,Blue1stManABFE[i+1][j+2]);
		}
		//Blue3rdManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j],Blue1stManCDKL[i][j+1]+16.25,Blue1stManCDKL[i][j+2]);
			glVertex3f(Blue1stManCDKL[i+1][j],Blue1stManCDKL[i+1][j+1]+16.25,Blue1stManCDKL[i+1][j+2]);
		}
		//Blue3rdManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j],Blue1stManEFGH[i][j+1]+16.25,Blue1stManEFGH[i][j+2]);
			glVertex3f(Blue1stManEFGH[i+1][j],Blue1stManEFGH[i+1][j+1]+16.25,Blue1stManEFGH[i+1][j+2]);
		}
		//Blue3rdManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j],Blue1stManGHIJ[i][j+1]+16.25,Blue1stManGHIJ[i][j+2]);
			glVertex3f(Blue1stManGHIJ[i+1][j],Blue1stManGHIJ[i+1][j+1]+16.25,Blue1stManGHIJ[i+1][j+2]);
		}
		//Blue3rdManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j],Blue1stManIJLK[i][j+1]+16.25,Blue1stManIJLK[i][j+2]);
			glVertex3f(Blue1stManIJLK[i+1][j],Blue1stManIJLK[i+1][j+1]+16.25,Blue1stManIJLK[i+1][j+2]);
		}
	glEnd();

	//1st Blue rod 3rd Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229,-12.034+8.125+8.125,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

//For Blue 2nd Rod 1st Man Model
void Blue2ndRod1stMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 1st man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+5.1875,Blue1stManAtoD[i][j+1]+6.875,Blue1stManAtoD[i][j+2]);
			glVertex3f(Blue1stManAtoD[i+1][j]+5.1875,Blue1stManAtoD[i+1][j+1]+6.875,Blue1stManAtoD[i+1][j+2]);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+5.1875,Blue1stManABFE[i][j+1]+6.875,Blue1stManABFE[i][j+2]);
			glVertex3f(Blue1stManABFE[i+1][j]+5.1875,Blue1stManABFE[i+1][j+1]+6.875,Blue1stManABFE[i+1][j+2]);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+5.1875,Blue1stManCDKL[i][j+1]+6.875,Blue1stManCDKL[i][j+2]);
			glVertex3f(Blue1stManCDKL[i+1][j]+5.1875,Blue1stManCDKL[i+1][j+1]+6.875,Blue1stManCDKL[i+1][j+2]);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+5.1875,Blue1stManEFGH[i][j+1]+6.875,Blue1stManEFGH[i][j+2]);
			glVertex3f(Blue1stManEFGH[i+1][j]+5.1875,Blue1stManEFGH[i+1][j+1]+6.875,Blue1stManEFGH[i+1][j+2]);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+5.1875,Blue1stManGHIJ[i][j+1]+6.875,Blue1stManGHIJ[i][j+2]);
			glVertex3f(Blue1stManGHIJ[i+1][j]+5.1875,Blue1stManGHIJ[i+1][j+1]+6.875,Blue1stManGHIJ[i+1][j+2]);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+5.1875,Blue1stManIJLK[i][j+1]+6.875,Blue1stManIJLK[i][j+2]);
			glVertex3f(Blue1stManIJLK[i+1][j]+5.1875,Blue1stManIJLK[i+1][j+1]+6.875,Blue1stManIJLK[i+1][j+2]);
		}
	glEnd();

	//2nd Blue rod 1st Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+5.1875,-12.034+6.875,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}
	
/////Blue 2nd Rod 2nd Man Model
void Blue2ndRod2ndMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 2nd man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+5.1875,Blue1stManAtoD[i][j+1]+6.875+9.5,Blue1stManAtoD[i][j+2]);
			glVertex3f(Blue1stManAtoD[i+1][j]+5.1875,Blue1stManAtoD[i+1][j+1]+6.875+9.5,Blue1stManAtoD[i+1][j+2]);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+5.1875,Blue1stManABFE[i][j+1]+6.875+9.5,Blue1stManABFE[i][j+2]);
			glVertex3f(Blue1stManABFE[i+1][j]+5.1875,Blue1stManABFE[i+1][j+1]+6.875+9.5,Blue1stManABFE[i+1][j+2]);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+5.1875,Blue1stManCDKL[i][j+1]+6.875+9.5,Blue1stManCDKL[i][j+2]);
			glVertex3f(Blue1stManCDKL[i+1][j]+5.1875,Blue1stManCDKL[i+1][j+1]+6.875+9.5,Blue1stManCDKL[i+1][j+2]);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+5.1875,Blue1stManEFGH[i][j+1]+6.875+9.5,Blue1stManEFGH[i][j+2]);
			glVertex3f(Blue1stManEFGH[i+1][j]+5.1875,Blue1stManEFGH[i+1][j+1]+6.875+9.5,Blue1stManEFGH[i+1][j+2]);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+5.1875,Blue1stManGHIJ[i][j+1]+6.875+9.5,Blue1stManGHIJ[i][j+2]);
			glVertex3f(Blue1stManGHIJ[i+1][j]+5.1875,Blue1stManGHIJ[i+1][j+1]+6.875+9.5,Blue1stManGHIJ[i+1][j+2]);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+5.1875,Blue1stManIJLK[i][j+1]+6.875+9.5,Blue1stManIJLK[i][j+2]);
			glVertex3f(Blue1stManIJLK[i+1][j]+5.1875,Blue1stManIJLK[i+1][j+1]+6.875+9.5,Blue1stManIJLK[i+1][j+2]);
		}
	glEnd();

	//2nd Blue rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+5.1875,-12.034+6.875+9.5,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

/////Blue 3rd Rod 1st Man Model
void Blue3rdRod1stMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 1st man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375,Blue1stManAtoD[i][j+2]+0.0316);
			glVertex3f(Blue1stManAtoD[i+1][j]+15.6875,Blue1stManAtoD[i+1][j+1]+0.9375,Blue1stManAtoD[i+1][j+2]+0.0316);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+15.6875,Blue1stManABFE[i][j+1]+0.9375,Blue1stManABFE[i][j+2]+0.0316);
			glVertex3f(Blue1stManABFE[i+1][j]+15.6875,Blue1stManABFE[i+1][j+1]+0.9375,Blue1stManABFE[i+1][j+2]+0.0316);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+15.6875,Blue1stManCDKL[i][j+1]+0.9375,Blue1stManCDKL[i][j+2]+0.0316);
			glVertex3f(Blue1stManCDKL[i+1][j]+15.6875,Blue1stManCDKL[i+1][j+1]+0.9375,Blue1stManCDKL[i+1][j+2]+0.0316);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+15.6875,Blue1stManEFGH[i][j+1]+0.9375,Blue1stManEFGH[i][j+2]+0.0316);
			glVertex3f(Blue1stManEFGH[i+1][j]+15.6875,Blue1stManEFGH[i+1][j+1]+0.9375,Blue1stManEFGH[i+1][j+2]+0.0316);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+15.6875,Blue1stManGHIJ[i][j+1]+0.9375,Blue1stManGHIJ[i][j+2]+0.0316);
			glVertex3f(Blue1stManGHIJ[i+1][j]+15.6875,Blue1stManGHIJ[i+1][j+1]+0.9375,Blue1stManGHIJ[i+1][j+2]+0.0316);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+15.6875,Blue1stManIJLK[i][j+1]+0.9375,Blue1stManIJLK[i][j+2]+0.0316);
			glVertex3f(Blue1stManIJLK[i+1][j]+15.6875,Blue1stManIJLK[i+1][j+1]+0.9375,Blue1stManIJLK[i+1][j+2]+0.0316);
		}
	glEnd();

	//3rd Blue rod 1st Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+15.6875,-12.034+0.9375,3.4938+0.73235+0.0316);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

///// Blue 3rd Rod 2nd Man Model
void Blue3rdRod2ndMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 2nd man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75,Blue1stManAtoD[i][j+2]+0.0316);
			glVertex3f(Blue1stManAtoD[i+1][j]+15.6875,Blue1stManAtoD[i+1][j+1]+0.9375+4.75,Blue1stManAtoD[i+1][j+2]+0.0316);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+15.6875,Blue1stManABFE[i][j+1]+0.9375+4.75,Blue1stManABFE[i][j+2]+0.0316);
			glVertex3f(Blue1stManABFE[i+1][j]+15.6875,Blue1stManABFE[i+1][j+1]+0.9375+4.75,Blue1stManABFE[i+1][j+2]+0.0316);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+15.6875,Blue1stManCDKL[i][j+1]+0.9375+4.75,Blue1stManCDKL[i][j+2]+0.0316);
			glVertex3f(Blue1stManCDKL[i+1][j]+15.6875,Blue1stManCDKL[i+1][j+1]+0.9375+4.75,Blue1stManCDKL[i+1][j+2]+0.0316);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+15.6875,Blue1stManEFGH[i][j+1]+0.9375+4.75,Blue1stManEFGH[i][j+2]+0.0316);
			glVertex3f(Blue1stManEFGH[i+1][j]+15.6875,Blue1stManEFGH[i+1][j+1]+0.9375+4.75,Blue1stManEFGH[i+1][j+2]+0.0316);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+15.6875,Blue1stManGHIJ[i][j+1]+0.9375+4.75,Blue1stManGHIJ[i][j+2]+0.0316);
			glVertex3f(Blue1stManGHIJ[i+1][j]+15.6875,Blue1stManGHIJ[i+1][j+1]+0.9375+4.75,Blue1stManGHIJ[i+1][j+2]+0.0316);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+15.6875,Blue1stManIJLK[i][j+1]+0.9375+4.75,Blue1stManIJLK[i][j+2]+0.0316);
			glVertex3f(Blue1stManIJLK[i+1][j]+15.6875,Blue1stManIJLK[i+1][j+1]+0.9375+4.75,Blue1stManIJLK[i+1][j+2]+0.0316);
		}
	glEnd();

	//3rd Blue rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+15.6875,-12.034+0.9375+4.75,3.4938+0.73235+0.0316);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

/////Blue 3rd Rod 3rd Man Model
void Blue3rdRod3rdMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 3rd man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75+4.75,Blue1stManAtoD[i][j+2]+0.0316);
			glVertex3f(Blue1stManAtoD[i+1][j]+15.6875,Blue1stManAtoD[i+1][j+1]+0.9375+4.75+4.75,Blue1stManAtoD[i+1][j+2]+0.0316);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+15.6875,Blue1stManABFE[i][j+1]+0.9375+4.75+4.75,Blue1stManABFE[i][j+2]+0.0316);
			glVertex3f(Blue1stManABFE[i+1][j]+15.6875,Blue1stManABFE[i+1][j+1]+0.9375+4.75+4.75,Blue1stManABFE[i+1][j+2]+0.0316);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+15.6875,Blue1stManCDKL[i][j+1]+0.9375+4.75+4.75,Blue1stManCDKL[i][j+2]+0.0316);
			glVertex3f(Blue1stManCDKL[i+1][j]+15.6875,Blue1stManCDKL[i+1][j+1]+0.9375+4.75+4.75,Blue1stManCDKL[i+1][j+2]+0.0316);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+15.6875,Blue1stManEFGH[i][j+1]+0.9375+4.75+4.75,Blue1stManEFGH[i][j+2]+0.0316);
			glVertex3f(Blue1stManEFGH[i+1][j]+15.6875,Blue1stManEFGH[i+1][j+1]+0.9375+4.75+4.75,Blue1stManEFGH[i+1][j+2]+0.0316);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+15.6875,Blue1stManGHIJ[i][j+1]+0.9375+4.75+4.75,Blue1stManGHIJ[i][j+2]+0.0316);
			glVertex3f(Blue1stManGHIJ[i+1][j]+15.6875,Blue1stManGHIJ[i+1][j+1]+0.9375+4.75+4.75,Blue1stManGHIJ[i+1][j+2]+0.0316);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+15.6875,Blue1stManIJLK[i][j+1]+0.9375+4.75+4.75,Blue1stManIJLK[i][j+2]+0.0316);
			glVertex3f(Blue1stManIJLK[i+1][j]+15.6875,Blue1stManIJLK[i+1][j+1]+0.9375+4.75+4.75,Blue1stManIJLK[i+1][j+2]+0.0316);
		}
	glEnd();

	//3rd Blue rod 3rd Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+15.6875,-12.034+0.9375+4.75+4.75,3.4938+0.73235+0.0316);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

/////Blue 3rd Rod 4th Man Model
void Blue3rdRod4thMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 4th man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75+4.75+4.75,Blue1stManAtoD[i][j+2]+0.0316);
			glVertex3f(Blue1stManAtoD[i+1][j]+15.6875,Blue1stManAtoD[i+1][j+1]+0.9375+4.75+4.75+4.75,Blue1stManAtoD[i+1][j+2]+0.0316);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+15.6875,Blue1stManABFE[i][j+1]+0.9375+4.75+4.75+4.75,Blue1stManABFE[i][j+2]+0.0316);
			glVertex3f(Blue1stManABFE[i+1][j]+15.6875,Blue1stManABFE[i+1][j+1]+0.9375+4.75+4.75+4.75,Blue1stManABFE[i+1][j+2]+0.0316);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+15.6875,Blue1stManCDKL[i][j+1]+0.9375+4.75+4.75+4.75,Blue1stManCDKL[i][j+2]+0.0316);
			glVertex3f(Blue1stManCDKL[i+1][j]+15.6875,Blue1stManCDKL[i+1][j+1]+0.9375+4.75+4.75+4.75,Blue1stManCDKL[i+1][j+2]+0.0316);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+15.6875,Blue1stManEFGH[i][j+1]+0.9375+4.75+4.75+4.75,Blue1stManEFGH[i][j+2]+0.0316);
			glVertex3f(Blue1stManEFGH[i+1][j]+15.6875,Blue1stManEFGH[i+1][j+1]+0.9375+4.75+4.75+4.75,Blue1stManEFGH[i+1][j+2]+0.0316);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+15.6875,Blue1stManGHIJ[i][j+1]+0.9375+4.75+4.75+4.75,Blue1stManGHIJ[i][j+2]+0.0316);
			glVertex3f(Blue1stManGHIJ[i+1][j]+15.6875,Blue1stManGHIJ[i+1][j+1]+0.9375+4.75+4.75+4.75,Blue1stManGHIJ[i+1][j+2]+0.0316);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+15.6875,Blue1stManIJLK[i][j+1]+0.9375+4.75+4.75+4.75,Blue1stManIJLK[i][j+2]+0.0316);
			glVertex3f(Blue1stManIJLK[i+1][j]+15.6875,Blue1stManIJLK[i+1][j+1]+0.9375+4.75+4.75+4.75,Blue1stManIJLK[i+1][j+2]+0.0316);
		}
	glEnd();

	//3rd Blue rod 4th Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+15.6875,-12.034+0.9375+4.75+4.75+4.75,3.4938+0.73235+0.0316);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

/////Blue 3rd Rod 5th Man Model
void Blue3rdRod5thMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	
	//Color of Blue 5th man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+15.6875,Blue1stManAtoD[i][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManAtoD[i][j+2]+0.0316);
			glVertex3f(Blue1stManAtoD[i+1][j]+15.6875,Blue1stManAtoD[i+1][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManAtoD[i+1][j+2]+0.0316);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+15.6875,Blue1stManABFE[i][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManABFE[i][j+2]+0.0316);
			glVertex3f(Blue1stManABFE[i+1][j]+15.6875,Blue1stManABFE[i+1][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManABFE[i+1][j+2]+0.0316);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+15.6875,Blue1stManCDKL[i][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManCDKL[i][j+2]+0.0316);
			glVertex3f(Blue1stManCDKL[i+1][j]+15.6875,Blue1stManCDKL[i+1][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManCDKL[i+1][j+2]+0.0316);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+15.6875,Blue1stManEFGH[i][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManEFGH[i][j+2]+0.0316);
			glVertex3f(Blue1stManEFGH[i+1][j]+15.6875,Blue1stManEFGH[i+1][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManEFGH[i+1][j+2]+0.0316);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+15.6875,Blue1stManGHIJ[i][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManGHIJ[i][j+2]+0.0316);
			glVertex3f(Blue1stManGHIJ[i+1][j]+15.6875,Blue1stManGHIJ[i+1][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManGHIJ[i+1][j+2]+0.0316);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+15.6875,Blue1stManIJLK[i][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManIJLK[i][j+2]+0.0316);
			glVertex3f(Blue1stManIJLK[i+1][j]+15.6875,Blue1stManIJLK[i+1][j+1]+0.9375+4.75+4.75+4.75+4.75,Blue1stManIJLK[i+1][j+2]+0.0316);
		}
	glEnd();

	//3rd Blue rod 5th Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+15.6875,-12.034+0.9375+4.75+4.75+4.75+4.75,3.4938+0.73235+0.0316);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////Blue 4th Rod 1st Man Model
void Blue4thRod1stMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 1st man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+26.5625,Blue1stManAtoD[i][j+1]+1.875,Blue1stManAtoD[i][j+2]+0.125);
			glVertex3f(Blue1stManAtoD[i+1][j]+26.5625,Blue1stManAtoD[i+1][j+1]+1.875,Blue1stManAtoD[i+1][j+2]+0.125);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+26.5625,Blue1stManABFE[i][j+1]+1.875,Blue1stManABFE[i][j+2]+0.125);
			glVertex3f(Blue1stManABFE[i+1][j]+26.5625,Blue1stManABFE[i+1][j+1]+1.875,Blue1stManABFE[i+1][j+2]+0.125);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+26.5625,Blue1stManCDKL[i][j+1]+1.875,Blue1stManCDKL[i][j+2]+0.125);
			glVertex3f(Blue1stManCDKL[i+1][j]+26.5625,Blue1stManCDKL[i+1][j+1]+1.875,Blue1stManCDKL[i+1][j+2]+0.125);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+26.5625,Blue1stManEFGH[i][j+1]+1.875,Blue1stManEFGH[i][j+2]+0.125);
			glVertex3f(Blue1stManEFGH[i+1][j]+26.5625,Blue1stManEFGH[i+1][j+1]+1.875,Blue1stManEFGH[i+1][j+2]+0.125);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+26.5625,Blue1stManGHIJ[i][j+1]+1.875,Blue1stManGHIJ[i][j+2]+0.125);
			glVertex3f(Blue1stManGHIJ[i+1][j]+26.5625,Blue1stManGHIJ[i+1][j+1]+1.875,Blue1stManGHIJ[i+1][j+2]+0.125);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+26.5625,Blue1stManIJLK[i][j+1]+1.875,Blue1stManIJLK[i][j+2]+0.125);
			glVertex3f(Blue1stManIJLK[i+1][j]+26.5625,Blue1stManIJLK[i+1][j+1]+1.875,Blue1stManIJLK[i+1][j+2]+0.125);
		}
	glEnd();

	//4th Blue rod 1st Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+26.5625,-12.034+1.875,3.4938+0.73235+0.125);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////Blue 4th Rod 2nd Man Model
void Blue4thRod2ndMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 2nd man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+26.5625,Blue1stManAtoD[i][j+1]+1.875+8.875,Blue1stManAtoD[i][j+2]+0.125);
			glVertex3f(Blue1stManAtoD[i+1][j]+26.5625,Blue1stManAtoD[i+1][j+1]+1.875+8.875,Blue1stManAtoD[i+1][j+2]+0.125);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+26.5625,Blue1stManABFE[i][j+1]+1.875+8.875,Blue1stManABFE[i][j+2]+0.125);
			glVertex3f(Blue1stManABFE[i+1][j]+26.5625,Blue1stManABFE[i+1][j+1]+1.875+8.875,Blue1stManABFE[i+1][j+2]+0.125);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+26.5625,Blue1stManCDKL[i][j+1]+1.875+8.875,Blue1stManCDKL[i][j+2]+0.125);
			glVertex3f(Blue1stManCDKL[i+1][j]+26.5625,Blue1stManCDKL[i+1][j+1]+1.875+8.875,Blue1stManCDKL[i+1][j+2]+0.125);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+26.5625,Blue1stManEFGH[i][j+1]+1.875+8.875,Blue1stManEFGH[i][j+2]+0.125);
			glVertex3f(Blue1stManEFGH[i+1][j]+26.5625,Blue1stManEFGH[i+1][j+1]+1.875+8.875,Blue1stManEFGH[i+1][j+2]+0.125);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+26.5625,Blue1stManGHIJ[i][j+1]+1.875+8.875,Blue1stManGHIJ[i][j+2]+0.125);
			glVertex3f(Blue1stManGHIJ[i+1][j]+26.5625,Blue1stManGHIJ[i+1][j+1]+1.875+8.875,Blue1stManGHIJ[i+1][j+2]+0.125);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+26.5625,Blue1stManIJLK[i][j+1]+1.875+8.875,Blue1stManIJLK[i][j+2]+0.125);
			glVertex3f(Blue1stManIJLK[i+1][j]+26.5625,Blue1stManIJLK[i+1][j+1]+1.875+8.875,Blue1stManIJLK[i+1][j+2]+0.125);
		}
	glEnd();

	//4th Blue rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+26.5625,-12.034+1.875+8.875,3.4938+0.73235+0.125);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////Blue 4th Rod 3rd Man Model
void Blue4thRod3rdMenModel(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Blue 3rd man
	//glColor3f(0.0,0.0,0.4);

	//Lines for man
	glBegin(GL_POLYGON);
		//Blue1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManAtoD[i][j]+26.5625,Blue1stManAtoD[i][j+1]+1.875+8.875+8.875,Blue1stManAtoD[i][j+2]+0.125);
			glVertex3f(Blue1stManAtoD[i+1][j]+26.5625,Blue1stManAtoD[i+1][j+1]+1.875+8.875+8.875,Blue1stManAtoD[i+1][j+2]+0.125);
		}
		//Blue1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManABFE[i][j]+26.5625,Blue1stManABFE[i][j+1]+1.875+8.875+8.875,Blue1stManABFE[i][j+2]+0.125);
			glVertex3f(Blue1stManABFE[i+1][j]+26.5625,Blue1stManABFE[i+1][j+1]+1.875+8.875+8.875,Blue1stManABFE[i+1][j+2]+0.125);
		}
		//Blue1stManCDKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManCDKL[i][j]+26.5625,Blue1stManCDKL[i][j+1]+1.875+8.875+8.875,Blue1stManCDKL[i][j+2]+0.125);
			glVertex3f(Blue1stManCDKL[i+1][j]+26.5625,Blue1stManCDKL[i+1][j+1]+1.875+8.875+8.875,Blue1stManCDKL[i+1][j+2]+0.125);
		}
		//Blue1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManEFGH[i][j]+26.5625,Blue1stManEFGH[i][j+1]+1.875+8.875+8.875,Blue1stManEFGH[i][j+2]+0.125);
			glVertex3f(Blue1stManEFGH[i+1][j]+26.5625,Blue1stManEFGH[i+1][j+1]+1.875+8.875+8.875,Blue1stManEFGH[i+1][j+2]+0.125);
		}
		//Blue1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManGHIJ[i][j]+26.5625,Blue1stManGHIJ[i][j+1]+1.875+8.875+8.875,Blue1stManGHIJ[i][j+2]+0.125);
			glVertex3f(Blue1stManGHIJ[i+1][j]+26.5625,Blue1stManGHIJ[i+1][j+1]+1.875+8.875+8.875,Blue1stManGHIJ[i+1][j+2]+0.125);
		}
		//Blue1stManIJLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Blue1stManIJLK[i][j]+26.5625,Blue1stManIJLK[i][j+1]+1.875+8.875+8.875,Blue1stManIJLK[i][j+2]+0.125);
			glVertex3f(Blue1stManIJLK[i+1][j]+26.5625,Blue1stManIJLK[i+1][j+1]+1.875+8.875+8.875,Blue1stManIJLK[i+1][j+2]+0.125);
		}
	glEnd();

		//4th Blue rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(-32.7229+26.5625,-12.034+1.875+8.875+8.875,3.4938+0.73235+0.125);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

