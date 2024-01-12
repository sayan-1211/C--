#include <stdio.h>
#include <math.h>
int main()
{
	float x1=3.0,x2=4.0,x3,a,b,c,d;
	while(1)
	{
		a=(2*pow(x1,3.0))-(2*pow(x1,2.0))-(10*x1)-10;
		b=(2*pow(x2,3.0))-(2*pow(x2,2.0))-(10*x2)-10;
		if (a<0.0 && b>0.0)
		x3=((x1*b)-(x2*a))/(b-a);
		c=(2*pow(x3,3.0))-(2*pow(x3,2.0))-(10*x3)-10;
		d=abs(c);
		if (d<0.01)
		{
			printf("The solution is = %f",x3);
			break;
		}
		if (c<0)
		{
			x1=x3;
			a=c;
		}
		if (c>0)
		{
			x2=x3;
			b=c;
		}
	}
	return 0;
}
