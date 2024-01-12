#include <stdio.h>
#include <math.h>
int main()
{
	int g;
	float h,c,t;
	printf("Enter Hardness, Carbon content and tensile strength");
	scanf("%f%f%f",&h,&c,&t);
	if (h>50 && c<0.7 && t>5600)
	g=10;
	else if (h>50 && c<0.7 && t<5600)
	g=9;
	else if (h<50 && c<0.7 && t>5600)
	g=8;
	else if (h>50 && c>0.7 && t>5600)
	g=7;
	else if (h>50 || c<0.7 || t>5600)
	g=6;
    else
    g=5;
    printf("Grade is %d",g);
    return 0;
}
