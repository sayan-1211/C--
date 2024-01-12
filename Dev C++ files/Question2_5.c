#include<stdio.h>
#include<math.h>
//Question2_5
int main()
{
	int n,i,j,marks[100],S=0;
	float avg;
	printf("Enter number of students ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter marks of student %d ",i+1);
	    scanf("%d",&marks[i]);
	}
    for (j=0;j<n;j++)
    S+=marks[j];
    avg=S/n;
    printf("The average is: %f",avg);
	return 0;
}
