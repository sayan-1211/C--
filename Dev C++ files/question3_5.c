#include<stdio.h>
#include<math.h>
//Question3_5
int main()
{
	int n,i,j,marks[100],max,min;
	printf("Enter number of students ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter marks of student %d ",i+1);
	    scanf("%d",&marks[i]);
    }
	max=min=marks[0];
    for (j=1;j<n;j++)
    {
    	if (marks[j]>max)
    	max=marks[j];
    	if (marks[j]<min)
    	min=marks[j];
	}
    printf("The highest and lowest marks are: %d and %d",max,min);
	return 0;
}
