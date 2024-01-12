#include <iostream>
using namespace std;
int main()
{
	int n,m,p,S=0;
	cout << "Enter any number";
	cin >> n;
	m=n;
	while (m>0)
	{
		p=m%10;
		S=(S*10)+p;
		m=m/10;
	}
	if (S==n)
	cout << "Palindrome number";
	else
	cout << "Not Palindrome number";
	return 0;
}
