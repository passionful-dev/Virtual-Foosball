//Points for Red1stRod1stMan
//Man points from AtoD
GLfloat Red1stRod1stManAtoD[5][3]={
		{3.5506,-8.9715,3.4938},//A
		{3.5506,-7.3465,3.4938},//B
		{5.0506,-7.3465,3.4938},//C
		{5.0506,-8.9715,3.4938},//D
		{3.5506,-8.9715,3.4938}//A
				};
//Man points ABFE
GLfloat Red1stRod1stManABFE[5][3]={
		{3.5506,-8.9715,3.4938},//A
		{3.5506,-7.3465,3.4938},//B
		{3.5506,-7.3465,1.8073},//F
		{3.5506,-8.9715,1.8073},//E
		{3.5506,-8.9715,3.4938},//A
				};
//Man points CDLK
GLfloat Red1stRod1stManCDLK[5][3]={
		{5.0506,-7.3465,3.4938},//C
		{5.0506,-8.9715,3.4938},//D
		{5.0506,-8.9715,0.8897},//L
		{5.0506,-7.3465,0.8897},//K
		{5.0506,-7.3465,3.4938},//C
				};
//Man points EFGH
GLfloat Red1stRod1stManEFGH[5][3]={
		{3.5506,-8.9715,1.8073},//E
		{3.5506,-7.3465,1.8073},//F
		{4.2353,-7.3465,0.3336},//G
		{4.2353,-8.9715,0.3336},//H
		{3.5506,-8.9715,1.8073},//E
				};
//Man points GHIJ
GLfloat Red1stRod1stManGHIJ[5][3]={
		{4.2353,-7.3465,0.3336},//G
		{4.2353,-8.9715,0.3336},//H
		{4.3378,-8.9715,0.1766},//I
		{4.3378,-7.3465,0.1766},//J
		{4.2353,-7.3465,0.3336},//G
				};
//Man points IJKL
GLfloat Red1stRod1stManIJKL[5][3]={
		{4.3378,-8.9715,0.1766},//I
		{4.3378,-7.3465,0.1766},//J
		{5.0506,-7.3465,0.8897},//K
		{5.0506,-8.9715,0.8897},//L
		{4.3378,-8.9715,0.1766},//I
				};

///////Red 1st Rod 1st Man
void Red1stRod1stMan(void)
{
	//Color of Red 1st man
	//glColor3f(0.8,0.0,0.0);

	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	
	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j],Red1stRod1stManAtoD[i][j+1],Red1stRod1stManAtoD[i][j+2]);
			glVertex3f(Red1stRod1stManAtoD[i+1][j],Red1stRod1stManAtoD[i+1][j+1],Red1stRod1stManAtoD[i+1][j+2]);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j],Red1stRod1stManABFE[i][j+1],Red1stRod1stManABFE[i][j+2]);
			glVertex3f(Red1stRod1stManABFE[i+1][j],Red1stRod1stManABFE[i+1][j+1],Red1stRod1stManABFE[i+1][j+2]);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j],Red1stRod1stManCDLK[i][j+1],Red1stRod1stManCDLK[i][j+2]);
			glVertex3f(Red1stRod1stManCDLK[i+1][j],Red1stRod1stManCDLK[i+1][j+1],Red1stRod1stManCDLK[i+1][j+2]);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j],Red1stRod1stManEFGH[i][j+1],Red1stRod1stManEFGH[i][j+2]);
			glVertex3f(Red1stRod1stManEFGH[i+1][j],Red1stRod1stManEFGH[i+1][j+1],Red1stRod1stManEFGH[i+1][j+2]);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j],Red1stRod1stManGHIJ[i][j+1],Red1stRod1stManGHIJ[i][j+2]);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j],Red1stRod1stManGHIJ[i+1][j+1],Red1stRod1stManGHIJ[i+1][j+2]);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j],Red1stRod1stManIJKL[i][j+1],Red1stRod1stManIJKL[i][j+2]);
			glVertex3f(Red1stRod1stManIJKL[i+1][j],Red1stRod1stManIJKL[i+1][j+1],Red1stRod1stManIJKL[i+1][j+2]);
		}
	glEnd();

	//1st Red rod
	glPushMatrix();
		glTranslatef(4.3006,-8.159,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

///////Red 1st Rod 2nd Man
void Red1stRod2ndMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 2nd man
	glColor3ub(204,0,0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j],Red1stRod1stManAtoD[i][j+1]+9.75,Red1stRod1stManAtoD[i][j+2]);
			glVertex3f(Red1stRod1stManAtoD[i+1][j],Red1stRod1stManAtoD[i+1][j+1]+9.75,Red1stRod1stManAtoD[i+1][j+2]);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j],Red1stRod1stManABFE[i][j+1]+9.75,Red1stRod1stManABFE[i][j+2]);
			glVertex3f(Red1stRod1stManABFE[i+1][j],Red1stRod1stManABFE[i+1][j+1]+9.75,Red1stRod1stManABFE[i+1][j+2]);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j],Red1stRod1stManCDLK[i][j+1]+9.75,Red1stRod1stManCDLK[i][j+2]);
			glVertex3f(Red1stRod1stManCDLK[i+1][j],Red1stRod1stManCDLK[i+1][j+1]+9.75,Red1stRod1stManCDLK[i+1][j+2]);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j],Red1stRod1stManEFGH[i][j+1]+9.75,Red1stRod1stManEFGH[i][j+2]);
			glVertex3f(Red1stRod1stManEFGH[i+1][j],Red1stRod1stManEFGH[i+1][j+1]+9.75,Red1stRod1stManEFGH[i+1][j+2]);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j],Red1stRod1stManGHIJ[i][j+1]+9.75,Red1stRod1stManGHIJ[i][j+2]);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j],Red1stRod1stManGHIJ[i+1][j+1]+9.75,Red1stRod1stManGHIJ[i+1][j+2]);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j],Red1stRod1stManIJKL[i][j+1]+9.75,Red1stRod1stManIJKL[i][j+2]);
			glVertex3f(Red1stRod1stManIJKL[i+1][j],Red1stRod1stManIJKL[i+1][j+1]+9.75,Red1stRod1stManIJKL[i+1][j+2]);
		}
	glEnd();

	//1st Red rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(4.3006,-8.159+9.75,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

///////Red 1st Rod 3rd Man
void Red1stRod3rdMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 3rd man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j],Red1stRod1stManAtoD[i][j+1]+9.75+9.75,Red1stRod1stManAtoD[i][j+2]);
			glVertex3f(Red1stRod1stManAtoD[i+1][j],Red1stRod1stManAtoD[i+1][j+1]+9.75+9.75,Red1stRod1stManAtoD[i+1][j+2]);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j],Red1stRod1stManABFE[i][j+1]+9.75+9.75,Red1stRod1stManABFE[i][j+2]);
			glVertex3f(Red1stRod1stManABFE[i+1][j],Red1stRod1stManABFE[i+1][j+1]+9.75+9.75,Red1stRod1stManABFE[i+1][j+2]);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j],Red1stRod1stManCDLK[i][j+1]+9.75+9.75,Red1stRod1stManCDLK[i][j+2]);
			glVertex3f(Red1stRod1stManCDLK[i+1][j],Red1stRod1stManCDLK[i+1][j+1]+9.75+9.75,Red1stRod1stManCDLK[i+1][j+2]);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j],Red1stRod1stManEFGH[i][j+1]+9.75+9.75,Red1stRod1stManEFGH[i][j+2]);
			glVertex3f(Red1stRod1stManEFGH[i+1][j],Red1stRod1stManEFGH[i+1][j+1]+9.75+9.75,Red1stRod1stManEFGH[i+1][j+2]);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j],Red1stRod1stManGHIJ[i][j+1]+9.75+9.75,Red1stRod1stManGHIJ[i][j+2]);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j],Red1stRod1stManGHIJ[i+1][j+1]+9.75+9.75,Red1stRod1stManGHIJ[i+1][j+2]);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j],Red1stRod1stManIJKL[i][j+1]+9.75+9.75,Red1stRod1stManIJKL[i][j+2]);
			glVertex3f(Red1stRod1stManIJKL[i+1][j],Red1stRod1stManIJKL[i+1][j+1]+9.75+9.75,Red1stRod1stManIJKL[i+1][j+2]);
		}
	glEnd();

	//1st Red rod 1st Man Sphere
	glPushMatrix();
		glTranslatef(4.3006,-8.159+9.75+9.75,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 2nd Rod 1st Man
void Red2ndRod1stMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 1st man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-5.125,Red1stRod1stManAtoD[i][j+1]-0.8125,Red1stRod1stManAtoD[i][j+2]);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-5.125,Red1stRod1stManAtoD[i+1][j+1]-0.8125,Red1stRod1stManAtoD[i+1][j+2]);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-5.125,Red1stRod1stManABFE[i][j+1]-0.8125,Red1stRod1stManABFE[i][j+2]);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-5.125,Red1stRod1stManABFE[i+1][j+1]-0.8125,Red1stRod1stManABFE[i+1][j+2]);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-5.125,Red1stRod1stManCDLK[i][j+1]-0.8125,Red1stRod1stManCDLK[i][j+2]);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-5.125,Red1stRod1stManCDLK[i+1][j+1]-0.8125,Red1stRod1stManCDLK[i+1][j+2]);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-5.125,Red1stRod1stManEFGH[i][j+1]-0.8125,Red1stRod1stManEFGH[i][j+2]);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-5.125,Red1stRod1stManEFGH[i+1][j+1]-0.8125,Red1stRod1stManEFGH[i+1][j+2]);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-5.125,Red1stRod1stManGHIJ[i][j+1]-0.8125,Red1stRod1stManGHIJ[i][j+2]);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-5.125,Red1stRod1stManGHIJ[i+1][j+1]-0.8125,Red1stRod1stManGHIJ[i+1][j+2]);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-5.125,Red1stRod1stManIJKL[i][j+1]-0.8125,Red1stRod1stManIJKL[i][j+2]);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-5.125,Red1stRod1stManIJKL[i+1][j+1]-0.8125,Red1stRod1stManIJKL[i+1][j+2]);
		}
	glEnd();

	//2nd Red rod 1st Man Sphere
	glPushMatrix();
		glTranslatef(4.3006-5.125,-8.159-0.8125,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 2nd Rod 2nd Man
void Red2ndRod2ndMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 2nd man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-5.125,Red1stRod1stManAtoD[i][j+1]-0.8125+11.125,Red1stRod1stManAtoD[i][j+2]);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-5.125,Red1stRod1stManAtoD[i+1][j+1]-0.8125+11.125,Red1stRod1stManAtoD[i+1][j+2]);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-5.125,Red1stRod1stManABFE[i][j+1]-0.8125+11.125,Red1stRod1stManABFE[i][j+2]);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-5.125,Red1stRod1stManABFE[i+1][j+1]-0.8125+11.125,Red1stRod1stManABFE[i+1][j+2]);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-5.125,Red1stRod1stManCDLK[i][j+1]-0.8125+11.125,Red1stRod1stManCDLK[i][j+2]);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-5.125,Red1stRod1stManCDLK[i+1][j+1]-0.8125+11.125,Red1stRod1stManCDLK[i+1][j+2]);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-5.125,Red1stRod1stManEFGH[i][j+1]-0.8125+11.125,Red1stRod1stManEFGH[i][j+2]);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-5.125,Red1stRod1stManEFGH[i+1][j+1]-0.8125+11.125,Red1stRod1stManEFGH[i+1][j+2]);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-5.125,Red1stRod1stManGHIJ[i][j+1]-0.8125+11.125,Red1stRod1stManGHIJ[i][j+2]);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-5.125,Red1stRod1stManGHIJ[i+1][j+1]-0.8125+11.125,Red1stRod1stManGHIJ[i+1][j+2]);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-5.125,Red1stRod1stManIJKL[i][j+1]-0.8125+11.125,Red1stRod1stManIJKL[i][j+2]);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-5.125,Red1stRod1stManIJKL[i+1][j+1]-0.8125+11.125,Red1stRod1stManIJKL[i+1][j+2]);
		}
	glEnd();

	//2nd Red rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(4.3006-5.125,-8.159-0.8125+11.125,3.4938+0.73235);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 3rd Rod 1st Man
void Red3rdRod1stMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 1st man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-15.858,Red1stRod1stManAtoD[i][j+1]+0.125,Red1stRod1stManAtoD[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-15.858,Red1stRod1stManAtoD[i+1][j+1]+0.125,Red1stRod1stManAtoD[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-15.858,Red1stRod1stManABFE[i][j+1]+0.125,Red1stRod1stManABFE[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-15.858,Red1stRod1stManABFE[i+1][j+1]+0.125,Red1stRod1stManABFE[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-15.858,Red1stRod1stManCDLK[i][j+1]+0.125,Red1stRod1stManCDLK[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-15.858,Red1stRod1stManCDLK[i+1][j+1]+0.125,Red1stRod1stManCDLK[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-15.858,Red1stRod1stManEFGH[i][j+1]+0.125,Red1stRod1stManEFGH[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-15.858,Red1stRod1stManEFGH[i+1][j+1]+0.125,Red1stRod1stManEFGH[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-15.858,Red1stRod1stManGHIJ[i][j+1]+0.125,Red1stRod1stManGHIJ[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-15.858,Red1stRod1stManGHIJ[i+1][j+1]+0.125,Red1stRod1stManGHIJ[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-15.858,Red1stRod1stManIJKL[i][j+1]+0.125,Red1stRod1stManIJKL[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-15.858,Red1stRod1stManIJKL[i+1][j+1]+0.125,Red1stRod1stManIJKL[i+1][j+2]+0.0625);
		}
	glEnd();

	//3rd Rod 1st Man
	glPushMatrix();
		glTranslatef(4.3006-15.858,-8.159+0.125,3.4938+0.73235+0.0625);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 3rd Rod 2nd Man
void Red3rdRod2ndMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 2nd man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-15.858,Red1stRod1stManAtoD[i][j+1]+0.125+4.75,Red1stRod1stManAtoD[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-15.858,Red1stRod1stManAtoD[i+1][j+1]+0.125+4.75,Red1stRod1stManAtoD[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-15.858,Red1stRod1stManABFE[i][j+1]+0.125+4.75,Red1stRod1stManABFE[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-15.858,Red1stRod1stManABFE[i+1][j+1]+0.125+4.75,Red1stRod1stManABFE[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-15.858,Red1stRod1stManCDLK[i][j+1]+0.125+4.75,Red1stRod1stManCDLK[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-15.858,Red1stRod1stManCDLK[i+1][j+1]+0.125+4.75,Red1stRod1stManCDLK[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-15.858,Red1stRod1stManEFGH[i][j+1]+0.125+4.75,Red1stRod1stManEFGH[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-15.858,Red1stRod1stManEFGH[i+1][j+1]+0.125+4.75,Red1stRod1stManEFGH[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-15.858,Red1stRod1stManGHIJ[i][j+1]+0.125+4.75,Red1stRod1stManGHIJ[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-15.858,Red1stRod1stManGHIJ[i+1][j+1]+0.125+4.75,Red1stRod1stManGHIJ[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-15.858,Red1stRod1stManIJKL[i][j+1]+0.125+4.75,Red1stRod1stManIJKL[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-15.858,Red1stRod1stManIJKL[i+1][j+1]+0.125+4.75,Red1stRod1stManIJKL[i+1][j+2]+0.0625);
		}
	glEnd();

	//3rd Rod 2nd Man
	glPushMatrix();
		glTranslatef(4.3006-15.858,-8.159+0.125+4.75,3.4938+0.73235+0.0625);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 3rd Rod 3rd Man
void Red3rdRod3rdMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 3rd man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-15.858,Red1stRod1stManAtoD[i][j+1]+0.125+4.75+4.75,Red1stRod1stManAtoD[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-15.858,Red1stRod1stManAtoD[i+1][j+1]+0.125+4.75+4.75,Red1stRod1stManAtoD[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-15.858,Red1stRod1stManABFE[i][j+1]+0.125+4.75+4.75,Red1stRod1stManABFE[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-15.858,Red1stRod1stManABFE[i+1][j+1]+0.125+4.75+4.75,Red1stRod1stManABFE[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-15.858,Red1stRod1stManCDLK[i][j+1]+0.125+4.75+4.75,Red1stRod1stManCDLK[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-15.858,Red1stRod1stManCDLK[i+1][j+1]+0.125+4.75+4.75,Red1stRod1stManCDLK[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-15.858,Red1stRod1stManEFGH[i][j+1]+0.125+4.75+4.75,Red1stRod1stManEFGH[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-15.858,Red1stRod1stManEFGH[i+1][j+1]+0.125+4.75+4.75,Red1stRod1stManEFGH[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-15.858,Red1stRod1stManGHIJ[i][j+1]+0.125+4.75+4.75,Red1stRod1stManGHIJ[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-15.858,Red1stRod1stManGHIJ[i+1][j+1]+0.125+4.75+4.75,Red1stRod1stManGHIJ[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-15.858,Red1stRod1stManIJKL[i][j+1]+0.125+4.75+4.75,Red1stRod1stManIJKL[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-15.858,Red1stRod1stManIJKL[i+1][j+1]+0.125+4.75+4.75,Red1stRod1stManIJKL[i+1][j+2]+0.0625);
		}
	glEnd();

	//3rd Rod 3rd Man
	glPushMatrix();
		glTranslatef(4.3006-15.858,-8.159+0.125+4.75+4.75,3.4938+0.73235+0.0625);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 3rd Rod 4th Man
void Red3rdRod4thMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 4th man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-15.858,Red1stRod1stManAtoD[i][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManAtoD[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-15.858,Red1stRod1stManAtoD[i+1][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManAtoD[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-15.858,Red1stRod1stManABFE[i][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManABFE[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-15.858,Red1stRod1stManABFE[i+1][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManABFE[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-15.858,Red1stRod1stManCDLK[i][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManCDLK[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-15.858,Red1stRod1stManCDLK[i+1][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManCDLK[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-15.858,Red1stRod1stManEFGH[i][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManEFGH[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-15.858,Red1stRod1stManEFGH[i+1][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManEFGH[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-15.858,Red1stRod1stManGHIJ[i][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManGHIJ[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-15.858,Red1stRod1stManGHIJ[i+1][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManGHIJ[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-15.858,Red1stRod1stManIJKL[i][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManIJKL[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-15.858,Red1stRod1stManIJKL[i+1][j+1]+0.125+4.75+4.75+4.75,Red1stRod1stManIJKL[i+1][j+2]+0.0625);
		}
	glEnd();

	//3rd Rod 4th Man
	glPushMatrix();
		glTranslatef(4.3006-15.858,-8.159+0.125+4.75+4.75+4.75,3.4938+0.73235+0.0625);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 3rd Rod 5th Man
void Red3rdRod5thMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 5th man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-15.858,Red1stRod1stManAtoD[i][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManAtoD[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-15.858,Red1stRod1stManAtoD[i+1][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManAtoD[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-15.858,Red1stRod1stManABFE[i][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManABFE[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-15.858,Red1stRod1stManABFE[i+1][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManABFE[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-15.858,Red1stRod1stManCDLK[i][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManCDLK[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-15.858,Red1stRod1stManCDLK[i+1][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManCDLK[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-15.858,Red1stRod1stManEFGH[i][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManEFGH[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-15.858,Red1stRod1stManEFGH[i+1][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManEFGH[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-15.858,Red1stRod1stManGHIJ[i][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManGHIJ[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-15.858,Red1stRod1stManGHIJ[i+1][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManGHIJ[i+1][j+2]+0.0625);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-15.858,Red1stRod1stManIJKL[i][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManIJKL[i][j+2]+0.0625);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-15.858,Red1stRod1stManIJKL[i+1][j+1]+0.125+4.75+4.75+4.75+4.75,Red1stRod1stManIJKL[i+1][j+2]+0.0625);
		}
	glEnd();

	//3rd Red rod 5th Man Sphere
	glPushMatrix();
		glTranslatef(4.3006-15.858,-8.159+0.125+4.75+4.75+4.75+4.75,3.4938+0.73235+0.0625);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 4th Rod 1st Man
void Red4thRod1stMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 1st man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-26.5235,Red1stRod1stManAtoD[i][j+1]-2.6875,Red1stRod1stManAtoD[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-26.5235,Red1stRod1stManAtoD[i+1][j+1]-2.6875,Red1stRod1stManAtoD[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-26.5235,Red1stRod1stManABFE[i][j+1]-2.6875,Red1stRod1stManABFE[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-26.5235,Red1stRod1stManABFE[i+1][j+1]-2.6875,Red1stRod1stManABFE[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-26.5235,Red1stRod1stManCDLK[i][j+1]-2.6875,Red1stRod1stManCDLK[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-26.5235,Red1stRod1stManCDLK[i+1][j+1]-2.6875,Red1stRod1stManCDLK[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-26.5235,Red1stRod1stManEFGH[i][j+1]-2.6875,Red1stRod1stManEFGH[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-26.5235,Red1stRod1stManEFGH[i+1][j+1]-2.6875,Red1stRod1stManEFGH[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-26.5235,Red1stRod1stManGHIJ[i][j+1]-2.6875,Red1stRod1stManGHIJ[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-26.5235,Red1stRod1stManGHIJ[i+1][j+1]-2.6875,Red1stRod1stManGHIJ[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-26.5235,Red1stRod1stManIJKL[i][j+1]-2.6875,Red1stRod1stManIJKL[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-26.5235,Red1stRod1stManIJKL[i+1][j+1]-2.6875,Red1stRod1stManIJKL[i+1][j+2]-0.0218);
		}
	glEnd();	

	//4th Rod 1st Man Sphere
	glPushMatrix();
		glTranslatef(4.3006-26.5235,-8.159-2.6875,3.4938+0.73235-0.0218);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 4th Rod 2nd Man
void Red4thRod2ndMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 2nd man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-26.5235,Red1stRod1stManAtoD[i][j+1]-2.6875+8.875,Red1stRod1stManAtoD[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-26.5235,Red1stRod1stManAtoD[i+1][j+1]-2.6875+8.875,Red1stRod1stManAtoD[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-26.5235,Red1stRod1stManABFE[i][j+1]-2.6875+8.875,Red1stRod1stManABFE[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-26.5235,Red1stRod1stManABFE[i+1][j+1]-2.6875+8.875,Red1stRod1stManABFE[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-26.5235,Red1stRod1stManCDLK[i][j+1]-2.6875+8.875,Red1stRod1stManCDLK[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-26.5235,Red1stRod1stManCDLK[i+1][j+1]-2.6875+8.875,Red1stRod1stManCDLK[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-26.5235,Red1stRod1stManEFGH[i][j+1]-2.6875+8.875,Red1stRod1stManEFGH[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-26.5235,Red1stRod1stManEFGH[i+1][j+1]-2.6875+8.875,Red1stRod1stManEFGH[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-26.5235,Red1stRod1stManGHIJ[i][j+1]-2.6875+8.875,Red1stRod1stManGHIJ[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-26.5235,Red1stRod1stManGHIJ[i+1][j+1]-2.6875+8.875,Red1stRod1stManGHIJ[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-26.5235,Red1stRod1stManIJKL[i][j+1]-2.6875+8.875,Red1stRod1stManIJKL[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-26.5235,Red1stRod1stManIJKL[i+1][j+1]-2.6875+8.875,Red1stRod1stManIJKL[i+1][j+2]-0.0218);
		}
	glEnd();

	//4th Rod 2nd Man Sphere
	glPushMatrix();
		glTranslatef(4.3006-26.5253,-8.159-2.6875+8.875,3.4938+0.73235-0.0218);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}

////////////Red 4th Rod 3rd Man
void Red4thRod3rdMan(void)
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

	//Color of Red 3th man
	//glColor3f(0.8,0.0,0.0);

	//Lines for man
	glBegin(GL_POLYGON);
		//Red1stRod1stManAtoD
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManAtoD[i][j]-26.5235,Red1stRod1stManAtoD[i][j+1]-2.6875+8.875+8.875,Red1stRod1stManAtoD[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManAtoD[i+1][j]-26.5235,Red1stRod1stManAtoD[i+1][j+1]-2.6875+8.875+8.875,Red1stRod1stManAtoD[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManABFE
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManABFE[i][j]-26.5235,Red1stRod1stManABFE[i][j+1]-2.6875+8.875+8.875,Red1stRod1stManABFE[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManABFE[i+1][j]-26.5235,Red1stRod1stManABFE[i+1][j+1]-2.6875+8.875+8.875,Red1stRod1stManABFE[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManCDLK
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManCDLK[i][j]-26.5235,Red1stRod1stManCDLK[i][j+1]-2.6875+8.875+8.875,Red1stRod1stManCDLK[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManCDLK[i+1][j]-26.5235,Red1stRod1stManCDLK[i+1][j+1]-2.6875+8.875+8.875,Red1stRod1stManCDLK[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManEFGH
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManEFGH[i][j]-26.5235,Red1stRod1stManEFGH[i][j+1]-2.6875+8.875+8.875,Red1stRod1stManEFGH[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManEFGH[i+1][j]-26.5235,Red1stRod1stManEFGH[i+1][j+1]-2.6875+8.875+8.875,Red1stRod1stManEFGH[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManGHIJ
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManGHIJ[i][j]-26.5235,Red1stRod1stManGHIJ[i][j+1]-2.6875+8.875+8.875,Red1stRod1stManGHIJ[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManGHIJ[i+1][j]-26.5235,Red1stRod1stManGHIJ[i+1][j+1]-2.6875+8.875+8.875,Red1stRod1stManGHIJ[i+1][j+2]-0.0218);
		}
		//Red1stRod1stManIJKL
		for(i=0;i<=3;i++)
		{
			glVertex3f(Red1stRod1stManIJKL[i][j]-26.5235,Red1stRod1stManIJKL[i][j+1]-2.6875+8.875+8.875,Red1stRod1stManIJKL[i][j+2]-0.0218);
			glVertex3f(Red1stRod1stManIJKL[i+1][j]-26.5235,Red1stRod1stManIJKL[i+1][j+1]-2.6875+8.875+8.875,Red1stRod1stManIJKL[i+1][j+2]-0.0218);
		}
	glEnd();

	//4th Rod 3rd Man Sphere
	glPushMatrix();
		glTranslatef(4.3006-26.5253,-8.159-2.6875+8.875+8.875,3.4938+0.73235-0.0218);
		gluSphere(quadric,0.73235f, 15, 15 );
	glPopMatrix();
}


//Draw 1st Red Rod
void FirstRodofRedMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//1st Red rod
	glPushMatrix();
		//glTranslatef(4.1244,-14.0340,3.1250);
		
		glTranslatef(4.1244,-19.4592,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,41.5,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,41.5,20,2);
	
		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}

//Draw 2nd Red Rod
void SecondRodofRedMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//2nd Red rod
	glPushMatrix();
	glTranslatef(-1.0006,-27.0340,3.1250);
	
		//glTranslatef(-1.0006,-14.0340,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,48.375,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,48.375,20,2);

		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}

//Draw 3rd Red Rod
void ThirdRodofRedMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//3rd Red rod
	glPushMatrix();
		//glTranslatef(-11.6360,-14.0340,3.1250);

		glTranslatef(-11.6360,-17.5340,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,38.875,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,38.875,20,2);
	
		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}

//Draw 4th Red Rod
void FourthRodofRedMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//4th Red rod
	glPushMatrix();
		//glTranslatef(-22.3547,-14.0340,3.1250);

		glTranslatef(-22.3547,-23.4715,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,43.375,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,43.375,20,2);
	
		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}
