#include <stdio.h>
#include <math.h>
int main()
{
	float a,b;
	scanf("%f",&a);
	b=a-((pow(a,3.0)-pow(a,2.0)-(4.0*a)-3.0)/((3.0*pow(a,3.0))-(2.0*a)-4.0));
	printf ("%f",b);
	return 0;
}
