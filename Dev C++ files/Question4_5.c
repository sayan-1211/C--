#include<stdio.h>
#include<math.h>
//Question4_5
int main()
{
	int n,i,j,k,marks[100],S;
	printf("Enter number of students= ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter marks of student %d= ",i+1);
	    scanf("%d",&marks[i]);
    }
    for (k=1;k<=100;k++)
    {
    	S=0;
    	for (j=1;j<n;j++)
    	{
    		if (k==marks[j])
    		S+=1;
		}
		printf("Frequency of student getting %d marks = %d \n",k,S);
	}
	return 0;
}
