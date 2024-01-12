#include <iostream>
#include <math.h>
using namespace std;
int armstrong (int);
int main()
{
	int x,S;
	cout << "Enter any number";
	cin >> x;
	S=armstrong(x);
	if (S==x)
	cout << "Armstrong number";
	else
	cout << "Not Armstrong number";
	return 0;
}
int armstrong (int n)
{
	int m,c=0,p,S=0;
	m=n;
	while (m>0)
	{
		c++;
		m=m/10;
	}
	while (n>0)
	{
		p=n%10;
		S+=pow(p,c);
		n=n/10;
	}
	return S;
	
}
