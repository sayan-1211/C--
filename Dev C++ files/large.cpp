#include <iostream>
using namespace std;
int large (int, int, int);
int main()
{
	int a,b,c,r;
	cout << "Enter 3 numbers" << endl;
	cin >> a >> b >> c;
	r=large (a,b,c);
	cout << "Largest is" << r <<endl;
	return 0;
}
int large (int a, int b, int c)
{
	int l;
	if (a>b)
	{
		if (b>c)
		l=a;
		else
		{
			if (a>c)
			l=a;
			else
			l=c;
		}
	}
	else
	{
		if (b>c)
		l=b;
		else
		l=c;
	}
	return l;
}
