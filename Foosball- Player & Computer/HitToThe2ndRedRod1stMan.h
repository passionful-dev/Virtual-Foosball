void EnabledMotionAof2ndRedRod1stMan()
{
	if ( Checkcount == 1 )
	{
		count = (CentreX-d);
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
		CentreX -= .2;
		EnableMotionAof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		printf("MotionAof2ndRod1stRedManEnabled");
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		printf("EFGHEorGHIJGisDisabled");
		EnableMotionAof2ndRedRod1stMan = 0;
		Counter = 0;
		Checkcount=1;
	}
}

void EnabledMotionBof2ndRedRod1stMan()
{
	if ( Checkcount == 1 )
	{
		count = (CentreX+d);
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
		CentreX += .2;
		EnableMotionBof2ndRedRod1stMan = 1;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		printf("MotionBof2ndRod1stRedManEnabled");
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		printf("IJKLIorCDLKCisDisabled");
		EnableMotionBof2ndRedRod1stMan = 0;
		Counter = 0;
		Checkcount=1;
	}
}

void EnabledMotionCof2ndRedRod1stMan()
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
		EnableMotionCof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		printf("MotionCof2ndRod1stRedManEnabled");
		printf("\nCentreX=%f,CentreY=%f",CentreX,CentreY);
		Checkcount=0;
	}
	else
	{
		printf("ADLIHEAisDisabled");
		EnableMotionCof2ndRedRod1stMan = 0;
		Counter = 0;
		Checkcount=1;
	}
}

void EnabledMotionDof2ndRedRod1stMan()
{

		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
}

/////////Is the Hit to the Second Rod 1st Red Man
void HittoSecondRod1stRedMan()
{
	//glVertex3f(Red1stRod1stManAtoD[i][j]-5.125,Red1stRod1stManAtoD[i][j+1]-0.8125,Red1stRod1stManAtoD[i][j+2]);
	printf("\nCentreX= %f,CentreY= %f,Centrez= %f,",CentreX,CentreY,CentreZ);
	//printf("MouseMoveY= %f", MoveY1st);

	//if ( RodtoMove == 1 || RodtoMove == 3 || RodtoMove == 4 )
	//{
	//	Force = 0;
	//}

	printf("RodtoMove=%d",RodtoMove);
	//if ( ManisMoving == 1 )
	{
	if (( CentreX >= (3.5506-0.8-5.125) && CentreX <= (4.2353-0.8-5.125) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
	   )
	{
		printf("Ball Touched 2ndRod1stMan's EFGHE");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
			printf(",Went to dCalculate");
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionAof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof2ndRedRod1stMan();
	}
	
	else if (( CentreX >= (4.2353-0.8-5.125) && CentreX <= (4.3378-0.8-5.125) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  GHIJG");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionAof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof2ndRedRod1stMan();
	}

	else if (( CentreX >= (4.3378+0.8-5.125) && CentreX <= (5.0506+0.8-5.125) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  IJKLI");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionBof2ndRedRod1stMan = 1;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof2ndRedRod1stMan();
	}

	else if (( CentreX == (5.0506+0.8-5.125) ) && 
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  CDLKC");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionBof2ndRedRod1stMan = 1;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof2ndRedRod1stMan();
	}

	else if (( CentreX >= (3.5506-5.125)  && CentreX <= (4.3378-5.125) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) )
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  ADLIHEA");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionCof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionCof2ndRedRod1stMan();
	}

	else if (( CentreX >= (3.5506-5.125) && CentreX <= (4.3378-5.125) ) &&
		( CentreY == (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  BCKJGFB");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved  == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionDof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionDof2ndRedRod1stMan();
	}
	}

	/*else if ( ManisMoving == 1 && RodtoMove == 2 )
	{
		if (( CentreX >= (3.5506-0.8-5.125-2.2113) && CentreX <= (4.2353-0.8-5.125-2.2113) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
		   )
		{
		printf("Ball Touched 2ndRod1stMan's EFGHE");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
			printf(",Went to dCalculate");
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionAof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof2ndRedRod1stMan();
	}
	
	else if (( CentreX >= (4.2353-0.8-5.125-2.2113) && CentreX <= (4.3378-0.8-5.125-2.2113) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  GHIJG");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionAof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionAof2ndRedRod1stMan();
	}

	else if (( CentreX >= (4.3378+0.8-5.125+2.2113) && CentreX <= (5.0506+0.8-5.125+2.2113) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  IJKLI");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionBof2ndRedRod1stMan = 1;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof2ndRedRod1stMan();
	}

	else if (( CentreX == (5.0506+0.8-5.125+2.2113) ) && 
		( CentreY >= (-8.9715+MoveY1st-0.8125) && CentreY <= (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  CDLKC");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionBof2ndRedRod1stMan = 1;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionBof2ndRedRod1stMan();
	}

	else if (( CentreX >= (3.5506-5.125)  && CentreX <= (4.3378-5.125) ) &&
		( CentreY >= (-8.9715+MoveY1st-0.8125) )
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  ADLIHEA");
		if ( CentreX == AtFirstX && CentreY == AtFirstY &&
			CentreZ == AtFirstZ && BallMoved  == 1 )
		{
			dCalculate();
		}
		else
		{
			dCalculate();
			//printf(",Went to MotiondCalculate");
		//	MotiondCalculate();
		}
		EnableMotionCof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionDof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionCof2ndRedRod1stMan();
	}

	else if (( CentreX >= (3.5506-5.125) && CentreX <= (4.3378-5.125) ) &&
		( CentreY == (-7.3465+MoveY1st-0.8125) ) 
		    )
	{
		printf("Ball Touched 2ndRod1stMan's  BCKJGFB");
		//if ( CentreX == AtFirstX && CentreY == AtFirstY &&
		//	CentreZ == AtFirstZ && BallMoved  == 1 )
		//{
			dCalculate();
		//}
		//else
		//{
		//	MotiondCalculate();
		//}
		EnableMotionDof2ndRedRod1stMan = 1;
		EnableMotionBof2ndRedRod1stMan = 0;
		EnableMotionAof2ndRedRod1stMan = 0;
		EnableMotionCof2ndRedRod1stMan = 0;
		EnableMotionAof1stRedRod1stMan = 0;
		EnableMotionBof1stRedRod1stMan = 0;
		EnableMotionCof1stRedRod1stMan = 0;
		EnableMotionDof1stRedRod1stMan = 0;
		Counter = 0;
		count = 0;
		Checkcount = 1;
		EnabledMotionDof2ndRedRod1stMan();
	}
	}*/

	if ( EnableMotionAof2ndRedRod1stMan == 1 )
	{
		EnabledMotionAof2ndRedRod1stMan();
	}

	else if ( EnableMotionBof2ndRedRod1stMan == 1 )
	{
		EnabledMotionBof2ndRedRod1stMan();
	}

	else if ( EnableMotionCof2ndRedRod1stMan == 1 )
	{
		EnabledMotionCof2ndRedRod1stMan();
	}

	else if ( EnableMotionDof2ndRedRod1stMan == 1 )
	{
		EnabledMotionDof2ndRedRod1stMan();
	}
}