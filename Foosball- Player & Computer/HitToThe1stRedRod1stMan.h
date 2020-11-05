int EnableMotionAof1stRedRod1stMan=0;
int EnableMotionBof1stRedRod1stMan=0;
int EnableMotionCof1stRedRod1stMan=0;
int EnableMotionDof1stRedRod1stMan=0;
int EnableMotionAof2ndRedRod1stMan=0;
int EnableMotionBof2ndRedRod1stMan=0;
int EnableMotionCof2ndRedRod1stMan=0;
int EnableMotionDof2ndRedRod1stMan=0;

int Checkcount=1;
int Counter,Check;

static GLfloat count;

void EnabledMotionAof1stRedRod1stMan()
{
	if ( Checkcount == 1 )
	{
		//printf(",d1:%f", d);
		count = (CentreX-d);
		printf(",Count:%f", count);
		if ( count < 0 )
		{
			Counter = (-1)*count;
		}

		else if ( count > 0 )
		{
			Counter = count;
		}
		else if ( count == 0 )
		{
			Counter = 0;
		}
		printf(",Counter:%d", Counter);
	}
	if (Counter > 0) 
	{
		Counter --;
		printf(",Counter:%d",Counter);
		CentreX -= .2;
		EnableMotionAof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionAof1stRod1stRedManEnabled");
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		printf("EFGHEorGHIJGisDisabled");
		EnableMotionAof1stRedRod1stMan = 0;
		Counter = 0;
		Checkcount=1;
	}
}

void EnabledMotionBof1stRedRod1stMan()
{
	if ( Checkcount == 1 )
	{
		count = (CentreX+d);if ( count < 0 )
		{
			Counter = -1*count;
		}

		else if ( count > 0 )
		{
			Counter = count;
		}
		else if ( count == 0 )
		{
			Counter = 0;
		}

		printf(",Counter:%d", Counter);
	}
	if (Counter > 0) 
	{
		Counter --;
		printf(",Counter:%d",Counter);
		CentreX += .2;
		EnableMotionBof1stRedRod1stMan = 1;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionBof1stRod1stRedManEnabled");
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		printf("IJKLIorCDLKCisDisabled");
		EnableMotionBof1stRedRod1stMan = 0;
		Counter = 0;
		Checkcount=1;
	}
}

void EnabledMotionCof1stRedRod1stMan()
{
	if ( Checkcount == 1 )
	{
		count = (CentreY-d);
		if ( count < 0 )
		{
			Counter = -1*count;
		}

		else if ( count > 0 )
		{
			Counter = count;
		}
		else if ( count == 0 )
		{
			Counter = 0;
		}

		printf(",Counter:%d", Counter);
	}
	if (Counter > 0) 
	{
		Counter --;
		printf(",Counter:%d",Counter);
		CentreY -= .2;
		EnableMotionCof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionCof1stRod1stRedManEnabled");
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		printf("ADLIHEAisDisabled");
		EnableMotionCof1stRedRod1stMan = 0;
		Counter = 0;
		Checkcount=1;
	}
}

void EnabledMotionDof1stRedRod1stMan()
{
	if ( Checkcount == 1 )
	{
		count = (CentreY+d);
		if ( count < 0 )
		{
			Counter = -1*count;
		}

		else if ( count > 0 )
		{
			Counter = count;
		}
		else if ( count == 0 )
		{
			Counter = 0;
		}

		printf(",Counter:%d", Counter);
	}
	if (Counter > 0) 
	{
		Counter --;
		printf(",Counter:%d",Counter);
		CentreY += .2;
		EnableMotionDof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionDof1stRod1stRedManEnabled");
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		printf("ADLIHEAisDisabled");
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		Checkcount=1;
	}

}


/////////Is the Hit to the First Rod 1st Red Man
void HittoFirstRod1stRedMan()
{
	//printf("\nCentreX= %f,CentreY= %f,Centrez= %f,",CentreX,CentreY,CentreZ);
	//printf("MouseMoveY= %f", MoveY1st);

	if ( RodtoMove == 2 || RodtoMove == 3 || RodtoMove == 4 )
	{
		Force = 0;
	}

	//if ( ManisMoving == 1 )
	{
	if (( CentreX >= (3.5506-0.8) && CentreX <= (4.2353-0.8) ) &&
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
	   )
	{
		printf("Ball Touched 1stRod1stMan's EFGHE");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionAof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionAof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof1stRedRod1stMan();
	}
	
	else if (( CentreX >= (4.2353-0.8) && CentreX <= (4.3378-0.8) ) &&
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  GHIJG");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionAof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionAof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof1stRedRod1stMan();
	}

	else if (( CentreX >= (4.3378+0.8) && CentreX <= (5.0506+0.8) ) &&
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  IJKLI");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1  )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionBof1stRedRod1stMan = 1;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionBof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof1stRedRod1stMan();
	}

	else if (( CentreX == (5.0506+0.8) ) && 
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  CDLKC");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionBof1stRedRod1stMan = 1;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionBof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof1stRedRod1stMan();
	}

	else if (( CentreX >= (3.5506)  && CentreX <= (4.3378) ) &&
		( CentreY >= (-8.9715+MoveY1st) )// && CentreY <= (-8.4+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  ADLIHEA");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionCof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionCof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionCof1stRedRod1stMan();
	}

	else if (( CentreX >= (3.5506) && CentreX <= (4.3378) ) &&
		( CentreY == (-7.3465+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  BCKJGFB");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionDof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionDof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionDof1stRedRod1stMan();
	}
	}

	/*else if ( ManisMoving == 1 && RodtoMove == 1 )
	{
	if (( CentreX >= (3.5506-0.8-2.2113) && CentreX <= (4.2353-0.8-2.2113) ) &&
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
	   )
	{
		printf("Ball Touched 1stRod1stMan's EFGHE");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionAof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionAof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof1stRedRod1stMan();
	}
	
	else if (( CentreX >= (4.2353-0.8-2.2113) && CentreX <= (4.3378-0.8-2.2113) ) &&
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  GHIJG");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionAof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionAof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof1stRedRod1stMan();
	}

	else if (( CentreX >= (4.3378+0.8+2.2113) && CentreX <= (5.0506+0.8+2.2113) ) &&
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  IJKLI");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1  )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionBof1stRedRod1stMan = 1;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionBof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof1stRedRod1stMan();
	}

	else if (( CentreX == (5.0506+0.8+2.2113) ) && 
		( CentreY >= (-8.9715+MoveY1st) && CentreY <= (-7.3465+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  CDLKC");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionBof1stRedRod1stMan = 1;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionBof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof1stRedRod1stMan();
	}

	else if (( CentreX >= (3.5506)  && CentreX <= (4.3378) ) &&
		( CentreY >= (-8.9715+MoveY1st+0.8) )// && CentreY <= (-8.4+MoveY1st) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  ADLIHEA");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionCof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionCof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionCof1stRedRod1stMan();
	}

	else if (( CentreX >= (3.5506) && CentreX <= (4.3378) ) &&
		( CentreY == (-7.3465+MoveY1st-0.8) ) 
		    )
	{
		printf("Ball Touched 1stRod1stMan's  BCKJGFB");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionDof1stRedRod1stMan = 1;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		printf("MotionDof1stRod1stRedManEnabled");
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionDof1stRedRod1stMan();
	}
	}*/


	if ( EnableMotionAof1stRedRod1stMan == 1 )
	{
		EnabledMotionAof1stRedRod1stMan();
		//printf("EnableMotionAof1stRedRod1stMan",EnableMotionAof1stRedRod1stMan);
	}

	else if ( EnableMotionBof1stRedRod1stMan == 1 )
	{
		EnabledMotionBof1stRedRod1stMan();
	}

	else if ( EnableMotionCof1stRedRod1stMan == 1 )
	{
		EnabledMotionCof1stRedRod1stMan();
	}

	else if ( EnableMotionDof1stRedRod1stMan == 1 )
	{
		EnabledMotionDof1stRedRod1stMan();
	}
}