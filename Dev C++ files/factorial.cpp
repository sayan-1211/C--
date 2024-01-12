#include <iostream>
using namespace std;
int fact (int *);
int main()
{
	int n,r;
	cout << "Enter a  number" << endl;
	cin >> n;
	r=fact (&n);
	cout << "Factorial is" << r <<endl;
	return 0;
}
int fact (int *p)
{
	int i,f=1;
	for (i=1;i<=*p;i++)
	f*=i;
	return f;
}
