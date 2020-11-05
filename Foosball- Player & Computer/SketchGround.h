////////////Ground Sketch Points
//Points UP
GLfloat Ground1to4Up[4][3]={
		{-38.2922,-4.7731,0.0000},//1
		{-29.5872,-4.7731,0.0000},//2
		{-29.5872,3.7052,0.0000},//3
		{-38.2922,3.7052,0.0000},//4
					};
GLfloat Ground5to8Up[4][3]={
		{-38.2922,-4.9731,0.0000},//5
		{-29.3899,-4.9731,0.0000},//6
		{-29.4008,3.9052,0.0000},//7
		{-38.2922,3.9052,0.0000},//8
					};
GLfloat Ground9to12Up[4][3]={
		{-38.2922,-8.5270,0.0000},//9
		{-25.7922,-8.5270,0.0000},//10
		{-25.7922,7.4591,0.0000},//11
		{-38.2922,7.4591,0.0000},//12
					};
GLfloat Ground13to15Up[3][3]={
		{-38.2922,-8.7270,0.0000},//13
		{-25.5922,-8.7270,0.0000},//14
		{-25.5922,-4.5881,0.0000},//15
					};
GLfloat Ground16to18Up[3][3]={
		{-25.5922,3.2569,0.0000},//16
		{-25.5922,7.6591,0.0000},//17
		{-38.2922,7.6591,0.0000},//18
					};

//Points Down
GLfloat Ground29to32Down[4][3]={
		{9.7078,-4.7215,0.0000},//29
		{0.9300,-4.7731,0.0000},//30
		{0.9300,3.7052,0.0000},//31
		{9.7078,3.6535,0.0000},//32
					};
GLfloat Ground33to36Down[4][3]={
		{9.7078,-4.9233,0.0000},//33
		{0.7300,-4.9731,0.0000},//34
		{0.7300,3.9052,0.0000},//35
		{9.7078,3.8554,0.0000},//36
					};
GLfloat Ground37to40Down[4][3]={
		{9.7078,-8.5270,0.0000},//37
		{-2.8131,-8.5270,0.0000},//38
		{-2.8131,7.4591,0.0000},//39
		{9.7078,7.4591,0.0000},//40
					};
GLfloat Ground41to43Down[3][3]={
		{9.7078,-8.7270,0.0000},//41
		{-3.0131,-8.7270,0.0000},//42
		{-3.0131,-4.4841,0.0000},//43
					};
GLfloat Ground44to46Down[3][3]={
		{-3.0131,3.2569,0.0000},//44
		{-3.0131,7.6591,0.0000},//45
		{9.7078,7.6591,0.0000},//46
					};

void SketchGround(void)
{
	
	//Ground lines
	glBegin(GL_LINES);
		//Up sketch
		//lines1to4
		for(i=0;i<=2;i++)	
		{
			glVertex3f(Ground1to4Up[i][j],Ground1to4Up[i][j+1],Ground1to4Up[i][j+2]);
			glVertex3f(Ground1to4Up[i+1][j],Ground1to4Up[i+1][j+1],Ground1to4Up[i+1][j+2]);
		}
		//lines5to8
		for(i=0;i<=2;i++)	
		{
			glVertex3f(Ground5to8Up[i][j],Ground5to8Up[i][j+1],Ground5to8Up[i][j+2]);
			glVertex3f(Ground5to8Up[i+1][j],Ground5to8Up[i+1][j+1],Ground5to8Up[i+1][j+2]);
		}
		//lines9to12
		for(i=0;i<=2;i++)	
		{
			glVertex3f(Ground9to12Up[i][j],Ground9to12Up[i][j+1],Ground9to12Up[i][j+2]);
			glVertex3f(Ground9to12Up[i+1][j],Ground9to12Up[i+1][j+1],Ground9to12Up[i+1][j+2]);
		}
		//lines13to15
		for(i=0;i<=1;i++)	
		{
			glVertex3f(Ground13to15Up[i][j],Ground13to15Up[i][j+1],Ground13to15Up[i][j+2]);
			glVertex3f(Ground13to15Up[i+1][j],Ground13to15Up[i+1][j+1],Ground13to15Up[i+1][j+2]);
		}
		//lines16to18
		for(i=0;i<=1;i++)	
		{
			glVertex3f(Ground16to18Up[i][j],Ground16to18Up[i][j+1],Ground16to18Up[i][j+2]);
			glVertex3f(Ground16to18Up[i+1][j],Ground16to18Up[i+1][j+1],Ground16to18Up[i+1][j+2]);
		}
		//lines19to20
		glVertex3f(-25.5922,-4.2587,0.0000);//19
		glVertex3f(-25.5922,2.9275,0.0000);//20
		
		//Middle sketch
		//Lines21to28
		glVertex3f(-14.3922,-14.0340,0.0000);//21
		glVertex3f(-14.3922,-4.4986,0.0000);//22
		glVertex3f(-14.3922,3.4790,0.0000);//23
		glVertex3f(-14.3922,12.9660,0.0000);//24
		
		glVertex3f(-14.1922,-14.0340,0.0000);//25
		glVertex3f(-14.1437,-4.5175,0.0000);//26
		glVertex3f(-14.1922,3.4307,0.0000);//27
		glVertex3f(-14.1922,12.9660,0.0000);//28
		//Down sketch
		//lines29to32
		for(i=0;i<=2;i++)	
		{
			glVertex3f(Ground29to32Down[i][j],Ground29to32Down[i][j+1],Ground29to32Down[i][j+2]);
			glVertex3f(Ground29to32Down[i+1][j],Ground29to32Down[i+1][j+1],Ground29to32Down[i+1][j+2]);
		}
		//lines33to36
		for(i=0;i<=2;i++)	
		{
			glVertex3f(Ground33to36Down[i][j],Ground33to36Down[i][j+1],Ground33to36Down[i][j+2]);
			glVertex3f(Ground33to36Down[i+1][j],Ground33to36Down[i+1][j+1],Ground33to36Down[i+1][j+2]);
		}
		//lines37to40
		for(i=0;i<=2;i++)	
		{
			glVertex3f(Ground37to40Down[i][j],Ground37to40Down[i][j+1],Ground37to40Down[i][j+2]);
			glVertex3f(Ground37to40Down[i+1][j],Ground37to40Down[i+1][j+1],Ground37to40Down[i+1][j+2]);
		}
		//lines41to43
		for(i=0;i<=1;i++)	
		{
			glVertex3f(Ground41to43Down[i][j],Ground41to43Down[i][j+1],Ground41to43Down[i][j+2]);
			glVertex3f(Ground41to43Down[i+1][j],Ground41to43Down[i+1][j+1],Ground41to43Down[i+1][j+2]);
		}
		//lines44to46
		for(i=0;i<=1;i++)	
		{
			glVertex3f(Ground44to46Down[i][j],Ground44to46Down[i][j+1],Ground44to46Down[i][j+2]);
			glVertex3f(Ground44to46Down[i+1][j],Ground44to46Down[i+1][j+1],Ground44to46Down[i+1][j+2]);
		}
		//lines47to48
		glVertex3f(-3.0131,-4.2587,0.0000);//47
		glVertex3f(-3.0131,2.9275,0.0000);//48
		
	glEnd();
}


/////Ground sketched Middle Curve
void MiddleCurve()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//Middle Curve 
	glPushMatrix();
		glTranslatef(-14.3922,-4.4986+3.9888,0.00);
		gluQuadricDrawStyle(quadric,GLU_SILHOUETTE);
		gluDisk(quadric,1.0,3.9888,20,1 );
	glPopMatrix();
}	

/////Ground sketched Up Curve
void UpCurve()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//Up Curve
	glPushMatrix();
		glTranslatef(-25.5922,-4.5881+3.9225,0.00);
		gluQuadricDrawStyle(quadric,GLU_SILHOUETTE);
		gluPartialDisk(quadric,0.0,3.9225,20,1,0,180 );
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-25.5922,-4.2587+3.5931,0.00);
		gluPartialDisk(quadric,0.0,3.5931,20,1,0,180 );
	glPopMatrix();
}

/////Ground sketched Down Curve
void DownCurve()	
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//Down Curve
	glPushMatrix();
		glTranslatef(-3.0131,-4.4841+3.8705,0.00);
		gluQuadricDrawStyle(quadric,GLU_SILHOUETTE);
		gluPartialDisk(quadric,0.0,3.8705,20,1,180,180 );
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-3.0131,-4.2587+3.5931,0.00);
		gluPartialDisk(quadric,0.0,3.5931,20,1,180,180 );
	glPopMatrix();
}	

