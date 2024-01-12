#include <iostream>
using namespace std;
int main()
{
	int n,r,c=0;
	cout << "Enter a number" ;
	cin >> n;
	while (n>0)
	{
		r=n%10;
		if (r==0)
		{
			c=1;
			break;
		}
		n=n/10;
	}
	if (c==1)
	cout << "duck  number";
	else 
	cout << "not a duck number";
	return 0;
}

