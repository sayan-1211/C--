#include<bits/stdc++.h>
using namespace std;
float average(int *,int);
int main ()
{
	int n,i;
	float avg;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int arr[n];
	cout << "Enter any array" << endl;
	for (i=0;i<n;i++)
	cin >> arr[i];
	avg=average (arr,n);
	cout << "Average is " << avg;
	return 0;
}
float average (int *ar,int x)
{
	int i,S=0;
	float a;
	cout << *ar <<endl;
	for(i=0;i<x;i++)
	S+=ar[i];
	a=(float)S/x;
	return a;
}
