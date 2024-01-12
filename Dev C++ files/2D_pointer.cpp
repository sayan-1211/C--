#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[2][2],i,j;
	int *ptr[2][2];
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
	        cin >> a[i][j];
	        ptr[i][j]=&a[i][j];
	    }
    }
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout << *ptr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
