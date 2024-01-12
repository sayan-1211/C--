#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,p,q,x,y;
	printf("Enter first point");
	scanf("%f%f",&a,&b);
	printf("Enter second point");
	scanf("%f%f",&p,&q);
	printf("Enter third point");
	scanf("%f%f",&x,&y);
	if (((q-b)/(p-a))==((y-b)/(x-a)))
	printf ("Same straight line");
	else
	printf ("Not same straight line");
	return 0;
}

