//Up Wall Points
GLfloat wallPointsUp1to4[5][3]={
		{-42.0422,-15.5340,0.0000},//1
		{-42.0422,-15.5340,4.2500},//2
		{-38.2922,-15.5340,4.2500},//3
		{-38.2922,-15.5340,0.0000},//4
		{-42.0422,-15.5340,0.0000}//1
						};

GLfloat wallPointsUp5to8[5][3]={
		{-38.2922,14.4660,0.0000},//5
		{-38.2922,14.4660,4.2500},//6
		{-42.0422,14.4660,4.2500},//7
		{-42.0422,14.4660,0.0000},//8
		{-38.2922,14.4660,0.0000}//5
						};

GLfloat wallInteriorUp1to10[10][3]={
		{-38.2922,-14.0340,4.2500},//1
		{-38.2922,-14.0340,0.0000},//2
		{-38.2922,-8.52700,0.0000},//3
		{-38.2922,-4.72150,0.0000},//4
		{-38.2922,-4.72150,2.5000},//5
		{-38.2922,3.6535,2.5000},//6
		{-38.2922,3.6535,0.0000},//7
		{-38.2922,7.4591,0.0000},//8
		{-38.2922,12.9660,0.0000},//9
		{-38.2922,12.9660,4.2500}//10
						};

GLfloat PostUp1to4[4][3]={
		{-42.0422,-4.7215,0.0000},
		{-42.0422,-4.7215,2.5000},
		{-42.0422,3.6535,2.5000},
		{-42.0422,3.6535,0.0000}
						};

/*////////Floodfill Algorithm
void floodfill(float pointx,float pointy,float f[3],float o[3])
{
    float intensity,pixels[3];
    glReadPixels(pointx,pointy,1.0,1.0,GL_RGB,GL_FLOAT,pixels);
    if(pixels[0]==o[0] && (pixels[1])==o[1] && (pixels[2])==o[2])
    {
        glFlush();
        glBegin(GL_POINTS);
			glColor3fv(f);
			glVertex2i(pointx,pointy);
        glEnd();
        glFlush();
        floodfill(pointx+1,pointy,f,o);
        floodfill(pointx,pointy+1,f,o);
        floodfill(pointx-1,pointy,f,o);
        floodfill(pointx,pointy-1,f,o);
    }
}*/


////Up Wall Model
void WallUpModel(void)
{
	glBegin(GL_LINES);
		//Line Colour of wall- Black
		//glColor3f(0.0,0.0,0.0);
		
		//Left face lines
		for(i=0; i<=3; i++)		
		{
			glVertex3f(wallPointsUp1to4[i][j],wallPointsUp1to4[i][j+1],wallPointsUp1to4[i][j+2]);
			glVertex3f(wallPointsUp1to4[i+1][j],wallPointsUp1to4[i+1][j+1],wallPointsUp1to4[i+1][j+2]);
		}
	
		//glVertex3f(wallPointsUp1to4[3][j],wallPointsUp1to4[3][j+1],wallPointsUp1to4[3][j+2]);
		//glVertex3f(wallPointsUp1to4[0][j],wallPointsUp1to4[0][j+1],wallPointsUp1to4[0][j+2]);
		
		//Right face lines
		for(i=0; i<=3; i++)		
		{
			glVertex3f(wallPointsUp5to8[i][j],wallPointsUp5to8[i][j+1],wallPointsUp5to8[i][j+2]);
			glVertex3f(wallPointsUp5to8[i+1][j],wallPointsUp5to8[i+1][j+1],wallPointsUp5to8[i+1][j+2]);
		}
	
		//glVertex3f(wallPointsUp5to8[3][j],wallPointsUp5to8[3][j+1],wallPointsUp5to8[3][j+2]);
		//glVertex3f(wallPointsUp5to8[0][j],wallPointsUp5to8[0][j+1],wallPointsUp5to8[0][j+2]);
		
		//Upward face lines
		glVertex3f(wallPointsUp1to4[1][j],wallPointsUp1to4[1][j+1],wallPointsUp1to4[1][j+2]);
		glVertex3f(wallPointsUp5to8[2][j],wallPointsUp5to8[2][j+1],wallPointsUp5to8[2][j+2]);
		glVertex3f(wallPointsUp1to4[2][j],wallPointsUp1to4[2][j+1],wallPointsUp1to4[2][j+2]);
		glVertex3f(wallPointsUp5to8[1][j],wallPointsUp5to8[1][j+1],wallPointsUp5to8[1][j+2]);

		//Downward face line
		glVertex3f(wallPointsUp5to8[3][j],wallPointsUp5to8[3][j+1],wallPointsUp5to8[3][j+2]);
		glVertex3f(wallPointsUp1to4[0][j],wallPointsUp1to4[0][j+1],wallPointsUp1to4[0][j+2]);

		//Interior part lines
		glVertex3f(-38.2922,-15.5340,0.0000);//0
		glVertex3f(-38.2922,-14.0340,0.0000);//2

		glVertex3f(-38.2922,12.9660,0.0000);//9
		glVertex3f(-38.2922,14.4660,0.0000);//11

		for (i=0;i<=8;i++)
		{
			glVertex3f(wallInteriorUp1to10[i][j],wallInteriorUp1to10[i][j+1],wallInteriorUp1to10[i][j+2]);
			glVertex3f(wallInteriorUp1to10[i+1][j],wallInteriorUp1to10[i+1][j+1],wallInteriorUp1to10[i+1][j+2]);
		}

		//Post lines
		for (i=0;i<=2;i++)
		{
			glVertex3f(PostUp1to4[i][j],PostUp1to4[i][j+1],PostUp1to4[i][j+2]);
			glVertex3f(PostUp1to4[i+1][j],PostUp1to4[i+1][j+1],PostUp1to4[i+1][j+2]);
		}
		
		glVertex3f(PostUp1to4[0][j],PostUp1to4[0][j+1],PostUp1to4[0][j+2]);
		glVertex3f(wallInteriorUp1to10[3][j],wallInteriorUp1to10[3][j+1],wallInteriorUp1to10[3][j+2]);

		glVertex3f(PostUp1to4[3][j],PostUp1to4[3][j+1],PostUp1to4[3][j+2]);
		glVertex3f(wallInteriorUp1to10[6][j],wallInteriorUp1to10[6][j+1],wallInteriorUp1to10[6][j+2]);
		
		glVertex3f(PostUp1to4[1][j],PostUp1to4[1][j+1],PostUp1to4[1][j+2]);
		glVertex3f(wallInteriorUp1to10[4][j],wallInteriorUp1to10[4][j+1],wallInteriorUp1to10[4][j+2]);

		glVertex3f(PostUp1to4[2][j],PostUp1to4[2][j+1],PostUp1to4[2][j+2]);
		glVertex3f(wallInteriorUp1to10[5][j],wallInteriorUp1to10[5][j+1],wallInteriorUp1to10[5][j+2]);
	
	glEnd();
}

////Down Wall Points
GLfloat wallPointsDown1to4[5][3]={
		{9.7078,-15.5340,0.0000},//1
		{13.4578,-15.5340,0.0000},//2
		{13.4578,-15.5340,4.2500},//3
		{9.7078,-15.5340,4.25000},//4
		{9.7078,-15.5340,0.0000}//1
						};

GLfloat wallPointsDown5to8[5][3]={
		{9.7078,14.4660,0.0000},//5
		{13.4578,14.4660,0.000},//6
		{13.4578,14.4660,4.2500},//7
		{9.7078,14.4660,4.25000},//8
		{9.7078,14.4660,0.0000}//5
						};

GLfloat wallInteriorDown1to10[10][3]={
		{9.7078,-14.0340,4.2500},//1
		{9.7078,-14.0340,0.0000},//2
		{9.7078,-8.52700,0.0000},//3
		{9.7078,-4.72150,0.0000},//4
		{9.7078,-4.72150,2.5000},//5
		{9.7078,3.6535,2.5000},//6
		{9.7078,3.6535,0.0000},//7
		{9.7078,7.4591,0.0000},//8
		{9.7078,12.9660,0.0000},//9
		{9.7078,12.9660,4.2500}//10
						};

GLfloat PostDown1to4[4][3]={
		{13.4578,-4.7215,0.0000},
		{13.4578,-4.7215,2.5000},
		{13.4578,3.6535,2.5000},
		{13.4578,3.6535,0.0000}
						};


/////////////Down Wall Model
void WallDownModel(void)
{
	glBegin(GL_LINES);
		//Line Colour of wall- Black
		//glColor3f(0.0,0.0,0.0);
		
		//Left face lines
		for(i=0; i<=3; i++)		
		{
			glVertex3f(wallPointsDown1to4[i][j],wallPointsDown1to4[i][j+1],wallPointsDown1to4[i][j+2]);
			glVertex3f(wallPointsDown1to4[i+1][j],wallPointsDown1to4[i+1][j+1],wallPointsDown1to4[i+1][j+2]);
		}
	
		//glVertex3f(wallPointsDown1to4[3][j],wallPointsDown1to4[3][j+1],wallPointsDown1to4[3][j+2]);
		//glVertex3f(wallPointsDown1to4[0][j],wallPointsDown1to4[0][j+1],wallPointsDown1to4[0][j+2]);
		
		//Right face lines
		for(i=0; i<=2; i++)		
		{
			glVertex3f(wallPointsDown5to8[i][j],wallPointsDown5to8[i][j+1],wallPointsDown5to8[i][j+2]);
			glVertex3f(wallPointsDown5to8[i+1][j],wallPointsDown5to8[i+1][j+1],wallPointsDown5to8[i+1][j+2]);
		}
	
		//glVertex3f(wallPointsDown5to8[3][j],wallPointsDown5to8[3][j+1],wallPointsDown5to8[3][j+2]);
		//glVertex3f(wallPointsDown5to8[0][j],wallPointsDown5to8[0][j+1],wallPointsDown5to8[0][j+2]);
		
		//Upward face lines
		glVertex3f(wallPointsDown5to8[2][j],wallPointsDown5to8[2][j+1],wallPointsDown5to8[2][j+2]);
		glVertex3f(wallPointsDown1to4[2][j],wallPointsDown1to4[2][j+1],wallPointsDown1to4[2][j+2]);

		glVertex3f(wallPointsDown1to4[3][j],wallPointsDown1to4[3][j+1],wallPointsDown1to4[3][j+2]);
		glVertex3f(wallPointsDown5to8[3][j],wallPointsDown5to8[3][j+1],wallPointsDown5to8[3][j+2]);

		//Downward face line
		glVertex3f(wallPointsDown1to4[1][j],wallPointsDown1to4[1][j+1],wallPointsDown1to4[1][j+2]);
		glVertex3f(wallPointsDown5to8[1][j],wallPointsDown5to8[1][j+1],wallPointsDown5to8[1][j+2]);

		//Interior part lines
		glVertex3f(9.7078,-15.5340,0.0000);//0
		glVertex3f(9.7078,-14.0340,0.0000);//2

		glVertex3f(9.7078,12.9660,0.0000);//9
		glVertex3f(9.7078,14.4660,0.0000);//11

		for (i=0;i<=8;i++)
		{
			glVertex3f(wallInteriorDown1to10[i][j],wallInteriorDown1to10[i][j+1],wallInteriorDown1to10[i][j+2]);
			glVertex3f(wallInteriorDown1to10[i+1][j],wallInteriorDown1to10[i+1][j+1],wallInteriorDown1to10[i+1][j+2]);
		}

		//Post lines
		for (i=0;i<=2;i++)
		{
			glVertex3f(PostDown1to4[i][j],PostDown1to4[i][j+1],PostDown1to4[i][j+2]);
			glVertex3f(PostDown1to4[i+1][j],PostDown1to4[i+1][j+1],PostDown1to4[i+1][j+2]);
		}
		
		glVertex3f(PostDown1to4[0][j],PostDown1to4[0][j+1],PostDown1to4[0][j+2]);
		glVertex3f(wallInteriorDown1to10[3][j],wallInteriorDown1to10[3][j+1],wallInteriorDown1to10[3][j+2]);

		glVertex3f(PostDown1to4[3][j],PostDown1to4[3][j+1],PostDown1to4[3][j+2]);
		glVertex3f(wallInteriorDown1to10[6][j],wallInteriorDown1to10[6][j+1],wallInteriorDown1to10[6][j+2]);
		
		glVertex3f(PostDown1to4[1][j],PostDown1to4[1][j+1],PostDown1to4[1][j+2]);
		glVertex3f(wallInteriorDown1to10[4][j],wallInteriorDown1to10[4][j+1],wallInteriorDown1to10[4][j+2]);

		glVertex3f(PostDown1to4[2][j],PostDown1to4[2][j+1],PostDown1to4[2][j+2]);
		glVertex3f(wallInteriorDown1to10[5][j],wallInteriorDown1to10[5][j+1],wallInteriorDown1to10[5][j+2]);
	
	glEnd();
}

/////////////Wall Side Points
GLfloat SidePoints[16][3]={
		{-38.2922,-15.5340,4.2500},//3  //1
		{9.7078,-15.5340,4.25000},//4    //4
		{-38.2922,-14.0340,4.2500},//1  //9
		{9.7078,-14.0340,4.2500},//1    //12
		{-38.2922,-15.5340,0.0000},//4   //2
		{9.7078,-15.5340,0.0000},//1    //3
		{-38.2922,-14.0340,0.0000},//2  //10
		{9.7078,-14.0340,0.0000},//2    //11
		{-38.2922,12.9660,4.2500},//10   //13
		{9.7078,12.9660,4.2500},//10     //16
		{-38.2922,12.9660,0.0000},//9   //14
		{9.7078,12.9660,0.0000},//9     //15
		{-38.2922,14.4660,4.2500},      //5
		{9.7078,14.4660,4.25000},		//8
		{-38.2922,14.4660,0.0000},		//6
		{9.7078,14.4660,0.0000}			//7
				};

/////////////Side Wall Model
void SideWallModel(void)
{
	//Line Colour of wall- Black
	//glColor3f(0.0,0.0,0.0);
		
	glBegin(GL_LINES);
		for (i=0;i<=14;i=i+2)	
		{
			glVertex3f(SidePoints[i][j],SidePoints[i][j+1],SidePoints[i][j+2]);
			glVertex3f(SidePoints[i+1][j],SidePoints[i+1][j+1],SidePoints[i+1][j+2]);
		}
	glEnd();

}
 
