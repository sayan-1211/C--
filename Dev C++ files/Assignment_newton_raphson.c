#include <stdio.h>
#include <math.h>
int main()
{
	float x,p,q;
	printf ("Enter first value \n");
	scanf("%f",&x);
	while(1)
	{
		p=(pow(x,2.0))+(3.5*x)-1.8;
		q=(2.0*x)+3.5;
		if (p<0.01)
		{
			printf("%f",x);
			break;
		}
		else
		x=(x-(p/q));
	}
	return 0;
}
