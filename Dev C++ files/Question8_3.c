#include <stdio.h>
#include <math.h>
int main()
{
	float v,p,q,r,x,y;
	printf("Enter center and radius");
	scanf("%f%f%f",&p,&q,&r);
	printf("Enter point");
	scanf("%f%f",&x,&y);
	v=pow((x-p),2.0)+pow((y-q),2.0)-pow(r,2.0);
	if (v<0)
	printf ("Point is inside circle");
	else if(v>0)
	printf ("Point is outside circle");
	else 
	printf ("Point is on the circle");
	return 0;
}
