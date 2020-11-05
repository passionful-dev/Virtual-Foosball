static GLfloat d,v,m=4.0,mew=0.3,g=9.81,Fini;
static GLfloat v2,ForceFinally,v3,theta,dist;

void dCalculate()
{
	//printf("\nF1=%f",Force);
	v=(Force*Time)/m;
	d=((v*v)/(2*mew*g))*100;
	Fini=Force;
	printf(",F=%f",Force);
	printf("\nd=%f",d);
}

void MotiondCalculate()
{
	//dist=
	v2=sqrt((2*((0.5*m*v*v)-(mew*m*g*dist)))/m);
	//theta=
	ForceFinally=sqrt((Force*Force)+(Fini*Fini)+(2*Force*Fini*cos(theta)));
	v3=((m*v2)-(ForceFinally*Time))/m;
	v=v3;
	d=((v*v)/(2*mew*g))*100;
}
