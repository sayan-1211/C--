#include <bits/stdc++.h>
using namespace std;
void fn(int *[2][2]);
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
    fn(ptr);
}
void fn(int *p[2][2])
{
	int i,j;
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			cout << *p[i][j] << " ";
		}
		cout << endl;
	}
}
