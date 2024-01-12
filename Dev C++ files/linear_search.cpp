#include<bits/stdc++.h>
using namespace std;
void search(int *,int);
int main ()
{
    int n,i;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int ar[n];
	cout << "Enter any array" << endl;
	for (i=0;i<n;i++)
	cin >> ar[i];
	search (&ar[0],n);
	return 0;
}
void search(int *p,int x)
{
	int i,a;
	cout << "Enter number to be checked" << endl;
	cin >> a;
	for (i=0;i<x;i++)
	{
		if (*p==a)
		{
			cout << " Number is present with index " << i+1 << " & address is " << p <<endl;
			break;
		}
	    p++;
    }
}
