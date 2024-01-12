
#include <stdio.h>

int main(void) {
	long int t,i,n,k,l,p=1,s=0,a[10000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    for(k=0;k<n;k++)
	    {
	        scanf("%d",&a[k]);
	        for(l=1;l<=a[k];l++)
	        p*=l;
	        s+=p;
	        p=1;
	    }
	    printf("%d \n",s);
	    s=0;
	}
	return 0;
}
/*
3
1
2
2
1 2
3
3 1 3
*/
