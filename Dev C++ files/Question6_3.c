#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c;
	printf("Enter case");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			{
				printf("Enter angles of a triangle");
				scanf("%d%d%d",&a,&b,&c);
				if ((a+b+c)==180)
				printf ("Triangle is possible");
				else
				printf("Triangle is not possible");
				break;
			}
		case 2:
		    {
		    	printf("Enter sides of a triangle");
				scanf("%d%d%d",&a,&b,&c);
			    if (((a+b)>c)&&((b+c)>a)&&((a+c)>b))
				printf ("Triangle is possible");
				else
				printf("Triangle is not possible");
				break;
			}
		default:
		printf("Wrong choice");	
	}
	return 0;
}
	
