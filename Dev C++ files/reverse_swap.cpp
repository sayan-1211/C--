#include <iostream>
#include <math.h>
using namespace std;
void swap (int);
int main()
{
	int x;
	cout << "Enter any number";
	cin >> x;
	swap(x);
	return 0;
}
void swap (int n)
{
	int m,c=0,a,d,e,b;
	m=n;
	while (m>0)
	{
		c++;
		m=m/10;
	}
	a=n%10;
	e=n/10;
	b=e/pow(10,(c-2));
	d=pow(10,(c-2));
	e=e%d;
	cout << a << e << b;
}
