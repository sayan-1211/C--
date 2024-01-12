#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=100,*ptr1,**ptr2;
	ptr1=&a;
	ptr2=&ptr1;
	cout << a << " " << ptr1 << " " << ptr2 << endl;
	cout << "value at address" << *ptr1 << " " << **ptr2;
	return 0;
}
