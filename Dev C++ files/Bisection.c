#include <stdio.h>
#include <math.h>
int main()
{
	float x1,x2,x3,a,b,c,d,e;
	x1=-1.0;
	x2=0.0;
	while(1)
	{
		a=pow(x1,3.0)-(2*pow(x1,2.0))+(11*x1)+12;
		b=pow(x2,3.0)-(2*pow(x2,2.0))+(11*x2)+12;
		if (a<0 && b>0)
		x3=((x1+x2)/2.0);
		c=pow(x3,3.0)-(2*pow(x3,2.0))+(11*x3)+12;
		e=x2-x1;
		if (e<0.01)
		{
			printf("The solution is = %f",x3);
			break;
		}
		if (c<0)
		{
			x1=x3;
			d=c;
		}
		if (c>0)
		{
			x2=x3;
			d=c;
		}
	}
	return 0;
}
