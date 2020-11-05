#include<process.h>

//static GLfloat CentreX=3.5506-0.8,CentreY=-8.159,CentreZ=1.0;//1ST RED ROD 1ST MAN
//static GLfloat CentreX=5.0-0.8,CentreY=-8.159,CentreZ=1.0;//1ST RED ROD 1ST MAN's Middle
//static GLfloat CentreX=5.0+0.8,CentreY=-8.159,CentreZ=1.0;//To IJKLIorCDLKC
//static GLfloat CentreX=4.0,CentreY=-8.9715-0.8,CentreZ=1.0;//To ADLIHEA
//static GLfloat CentreX=4.3,CentreY=-8.00,CentreZ=1.0;//To the side ghijg
//static GLfloat CentreX=6.5506-0.8,CentreY=-7.3465,CentreZ=1.0;//To the side bckjgjb
static GLfloat CentreX=-14.3922,CentreY=-0.5098,CentreZ=1.0; //In the centre
static GLfloat AtFirstX,AtFirstY,AtFirstZ;
AtFirstX=3.5506-0.8;
AtFirstY=-8.159;
AtFirstZ=1.0;

//int Forward=0;
//int Backward=0;
//int Upward=0;
//int Downward=0;
//int BalltouchedMan = 0;


//Ball drawing
void Ball()
{
//	unsigned char *PixForward=malloc(3);
//	unsigned char *PixBackward=malloc(3);
//	unsigned char *PixUpward=malloc(3);
//	unsigned char *PixDownward=malloc(3);

	GLUquadricObj *quadric;
	quadric = gluNewQuadric();

/*	glReadPixels(CentreX-1.0,CentreY,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixForward);
	glReadPixels(CentreX+1.0,CentreY,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixBackward);
	glReadPixels(CentreX,CentreY-1,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixUpward);
	glReadPixels(CentreX,CentreY+1,1,1,GL_RGB, GL_UNSIGNED_BYTE,PixDownward);
	//printf("R:%d\tG:%d\tB:%d\n",*(pix+0),*(pix+1),*(pix+2));
		
    if ((ManisMoving == 1) && (*(PixForward+0)>=(205) && *(PixForward+1)>=(205) && *(PixForward+2)>=(205))) 
	{
		//printf("\n\nMan Touched\n\n");
		BalltouchedMan = 1;
		Forward = 1;
		Backward = 0;
		Upward = 0;
		Downward = 0;
		printf("\nForward:%d",Forward);
		printf("Balltouchedman");
	}

	else if ((ManisMoving == 1) && (*(PixBackward+0)>=(205) && *(PixBackward+1)>=(205) && *(PixBackward+2)>=(205))) 
	{
		BalltouchedMan = 1;
		Forward = 0;
		Backward = 1;
		Upward = 0;
		Downward = 0;
		printf("\nBackward:%d",Backward);
		printf("Balltouchedman");
	}

	else if ((ManisMoving == 1) && (*(PixUpward+0)>=(205) && *(PixUpward+1)>=(205) && *(PixUpward+2)>=(205))) 
	{
		BalltouchedMan = 1;
		Forward = 0;
		Backward = 0;
		Upward = 1;
		Downward = 0;
		printf("\nUpward:%d",Upward);
		printf("Balltouchedman");
	}

	else if ((ManisMoving == 1) && (*(PixDownward+0)>=(205) && *(PixDownward+1)>=(205) && *(PixDownward+2)>=(205))) 
	{
		BalltouchedMan = 1;
		Forward = 0;
		Backward = 0;
		Upward = 0;
		Downward = 1;
		printf("\nDownward:%d",Downward);
		printf("Balltouchedman");
	}

	else if ( ManisMoving != 1 )
	{
		BalltouchedMan = 0;
		Forward = 0;
		Backward = 0;
		Upward = 0;
		Downward = 0;
		printf("\nBallDIDN'Ttouchedman");
	}*/


	//Color of ball- Yellow
	//glColor3f(1.0,1.0,0.0);

	//Draw Ball
	glPushMatrix();
		//glTranslatef(1.0-38.2922,-4.7731,1.0); //In the blue man's post at down

		//glTranslatef(3.5506-1.0,-8.159,1.0); //In the 1st rod 1st man
		glTranslatef(CentreX,CentreY,CentreZ); //In the 1st rod 1st man	

		//glTranslatef(-14.3922,-0.5098,1.0); //In the centre
		gluSphere(quadric,1.0f, 15, 15 );
		//glutSolidSphere(0.73235f, 15, 15);
	glPopMatrix();

}
