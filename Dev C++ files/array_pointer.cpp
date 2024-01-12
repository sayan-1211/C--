#include<bits/stdc++.h>
using namespace std;
void print_address(int *,int);
int main ()
{
    int n,i;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int ar[n];
	cout << "Enter any array" << endl;
	for (i=0;i<n;i++)
	cin >> ar[i];
	print_address (&ar[0],n);
	return 0;
}
void print_address(int *p,int x)
{
	int i;
	for (i=0;i<x;i++)
	{
	    cout << "Value is " << *p << " & address is " << p <<endl;
	    p++;
    }
}
