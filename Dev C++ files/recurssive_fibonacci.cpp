#include <iostream>
#include <math.h>
using namespace std;
int fibonacci (int ,int ,int );
int main()
{
	int x,S, p=0,q=1;
	cout << "Enter any number";
	cin >> x;
	cout << p << "," ;
	S=fibonacci(p,q,x);
	return 0;
}
int fibonacci (int a, int b, int n)
{
	if (b>n)
	return 0;
	else
	{
	    cout << b << ",";
		b=a+b;
		a=b-a;
		fibonacci (a,b,n);
	}
	
}
