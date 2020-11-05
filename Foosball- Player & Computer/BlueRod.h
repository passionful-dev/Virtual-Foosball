//Draw 1st Blue Rod
void FirstRodofBlueMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//1st Blue rod
	glPushMatrix();
		//glTranslatef(-32.7922,-14.0340,3.1250);

		glTranslatef(-32.7922,-25.0,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,41.5,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,41.5,20,2);
	
		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}	
	
//Draw 2nd Blue Rod
void SecondRodofBlueMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//2nd Blue rod
	glPushMatrix();
		//glTranslatef(-27.6672,-14.0340,3.1250);

		glTranslatef(-27.6672,-24.4,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,48.375,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,48.375,20,2);
	
		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}

//Draw 3rd Blue Rod
void ThirdRodofBlueMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//3rd Blue rod
	glPushMatrix();
		//glTranslatef(-16.8743,-14.0340,3.1250);	

		glTranslatef(-16.8743,-21.0340,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,38.875,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,38.875,20,2);
	
		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}

//Draw 4th Blue Rod
void FourthRodofBlueMen()
{
	GLUquadricObj *quadric;
	quadric = gluNewQuadric();
	//4th Blue rod
	glPushMatrix();
		//glTranslatef(-6.1556,-14.0340,3.1250);

		glTranslatef(-6.1556,-22.7215,3.1250);
		glRotatef(-120,1.0,1.0,1.0);
		gluCylinder(quadric,0.15470593,0.15470593,43.375,20,2);
		gluCylinder(quadric,0.306874673,0.306874673,43.375,20,2);
	
		//gluCylinder(quadric,0.15470593,0.15470593,27.0,20,2);
		//gluCylinder(quadric,0.306874673,0.306874673,27.0,20,2);
	glPopMatrix();
}

