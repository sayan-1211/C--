#include <stdio.h>
#include <math.h>
//keplers law
int main(void) {
	int t,t1[10],t2[10],r1[10],r2[10],i,a,b;
	scanf("%d",&t);
	for (i=0;i<t;i++)
	{
	    scanf("%d %d %d %d",&t1[i],&t2[i],&r1[i],&r2[i]);
	    a=(pow(t1[i],2))/(pow(r1[i],3));
	    b=(pow(t2[i],2))/(pow(r2[i],3));
	    if (a==b)
	    printf("YES \n");
	    else
	    printf("NO \n");
	}    
	return 0;
}
