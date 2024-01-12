#include <iostream>
using namespace std;
int main()
{
	int i,n,c,p;
	cout << "Enter any number";
	cin >> n;
	int a[n], b[n+1];
	for (i=0;i<n;i++)
	cin >> a[i];
	cout << "Enter new number & position";
	cin >> c >> p;
	b[p-1]=c;
	for (i=0;i<p-1;i++)
	b[i]=a[i];
	for (i=p-1;i<=n;i++)
	b[i+1]=a[i];
	cout << "New array";
	for (i=0;i<=n;i++)
	cout << b[i] << endl;
	return 0;
}
