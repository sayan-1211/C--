#include<stdio.h>
#include<math.h>
//Question6_5
int main()
{
	int n,i,j,l,k,ar[100],t;
	printf("Enter number of inputs= ");
	scanf("%d",&n);
	printf("Enter array of numbers= ");
	for (k=0;k<n;k++)
	scanf("%d",&ar[k]);
    for (i=0;i<(n-1);i++)
    {
    	for (j=0;j<(n-1-i);j++)
    	{
    		if (ar[j]>ar[j+1])
    		{
    			
    			t=ar[j];
    			ar[j]=ar[j+1];
    			ar[j+1]=t;
			}
    	}
    }
	printf("The arranged numbers are");
	for (l=0;l<n;l++)
	printf("\n %d",ar[l]);
	return 0;
}
