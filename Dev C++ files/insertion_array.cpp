#include <iostream>
using namespace std;
int main()
{
	int i,n;
	cout << "Enter any number";
	cin >> n;
	int a[n], b[n+1];
	for (i=0;i<n;i++)
	cin >> a[i];
	cout << "Enter first number";
	cin >> b[0];
	for (i=0;i<n;i++)
	b[i+1]=a[i];
	cout << "New array";
	for (i=0;i<=n;i++)
	cout << b[i] << endl;
	return 0;
}
