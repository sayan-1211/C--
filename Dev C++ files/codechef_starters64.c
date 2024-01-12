
/*3
21 63
72 72
25 20*/
#include <stdio.h>

int main(void) {
    int t,i,a,b,j,s[1000],c=0,k,d=0,p=0;
	scanf("%d",&t);
	for (i=0;i<t;i++)
	{
	    scanf("%d %d",&a,&b);
	    for (j=1;j<=b;j++)
	    {
	        for (k=1;k<j;k++)
	        {
	            if (j%k==0)
	            p++;
	        }
	        if ((b%j)==0 && p==1)
	        {
	            s[c]=j;
	            c++;
	        }
	        p=0;
	    }
	    for (k=0;k<c;k++)
	    {
	        if (a%s[k]==0)
	        d++;
	    }
	    if (c==d)
	    printf ("Yes \n");
	    else
	    printf ("No \n");
	    c=0;
	    d=0;
	}    
	return 0;
}

