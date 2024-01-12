#include <bits/stdc++.h>
using namespace std;
void fn(int *[],int );
int main()
{
	int n,i;
	cout << "Enter array size";
	cin >> n;
	int a[n],*ptr[n];
	cout << "Enter any array" ;
	for (i=0;i<n;i++)
	{
		cin >> a[i];
		ptr[i]=&a[i];
	}
	fn(ptr,n);
	return 0;
}
void fn(int *p[],int x)
{
	int i, max=*p[0],min=*p[0],val;
	for (i=0;i<x;i++)
	{
		cout << "Value at" << p[i] << "is" << *p[i] << endl;
		if (i==0)
		continue;
		if(*p[i]>max)
		max=*p[i];
		if (*p[i]<min)
		min=*p[i];
	}
	cout << "max is" << max << "and min is" << min;
}
