#include <bits/stdc++.h>
using namespace std;
void begin(int[],int);
void position(int[],int);
void end(int[],int);
int main()
{
	int n,i,ch;
	cout << "Enter size of array" << endl;
	cin >> n;
	int arr[n];
	cout << "Enter any array" << endl;
	for (i=0;i<n;i++)
	cin >> arr[i];
	cout << "Enter any choice" << endl;
	cin >> ch;
	switch (ch)
	{
		case 1:
			begin(arr,n);
			break;
		case 2:
			position(arr,n);
		    break;
		case 3:
			end(arr,n);
		    break;
		default:
		    cout << "Wrong choice" << endl; 
	}
	return 0;
}
void begin(int ar[],int x)
{
	int i,k,b[x-1];
	for (i=1;i<x;i++)
	b[i-1]=ar[i];
	for (k=0;k<x-1;k++)
    cout << b[k] << endl;
}
void position(int ar[],int x)
{
	int i,j,k,p,b[x-1];
    cout << "Enter position" << endl;
    cin >> p;
    for (i=0;i<p-1;i++)
    b[i]=ar[i];
    for (j=p;j<x;j++)
    b[j-1]=ar[j];
    for (k=0;k<x-1;k++)
    cout << b[k] << endl;
}
void end(int ar[],int x)
{
	int i,k,b[x-1];
	for (i=0;i<x-1;i++)
	b[i]=ar[i];
	for (k=0;k<x-1;k++)
    cout << b[k] << endl;
}

