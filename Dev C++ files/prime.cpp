#include <iostream>
#include <math.h>
using namespace std;
int prime (int);
int main()
{
	int x,S;
	cout << "Enter any number";
	cin >> x;
	S=prime(x);
	if (S==0)
	cout << "Prime number";
	else
	cout << "Not Prime number";
	return 0;
}
int prime (int n)
{
	int i,c=0;
	for (i=2;i<n;i++)
	{
		if (n%i==0)
		c++;
	}
	return c;
	
}
