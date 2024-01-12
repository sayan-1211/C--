#include <iostream>
using namespace std;
int main()
{
	int ar[10],ar2[10],i,j,k,c=0,p=0,n;
	cin >> n;
	for(i=0;i<n;i++)
	cin >> ar[i];
	ar2[0]=ar[0];
	for (j=1;j<n;j++)
	{
		for (k=0;k<=c;k++)
		{
			if (ar[j]==ar2[k])
			{
				p++;
			}
		}
		if (p==0)
		{
			c++;
			ar2[c]=ar[j];
		}
		p=0;
	}
	for (i=0;i<=c;i++)
	cout << ar2[i];
	return 0;
}
