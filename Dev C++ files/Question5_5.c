#include<stdio.h>
#include<math.h>
//Question5_5
int main()
{
	int n,p,i,j,ar[100],S=0;
	printf("Enter number of inputs= ");
	scanf("%d",&n);
	printf("Enter a number= ");
	scanf("%d",&p);
	for (i=0;i<n;i++)
	{
		printf("Enter number %d= ",i+1);
	    scanf("%d",&ar[i]);
    }

    for (j=0;j<n;j++)
    {
    	if (p==ar[j])
    	{
    		S+=1;
    		printf ("Position %d \n",j+1);
		}
    }
	printf("The number %d is present %d times",p,S);
	return 1;
}
