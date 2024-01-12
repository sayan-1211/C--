#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=100;
	float b=4.5;
	void *ptr1;
	//ptr1=&a;
	ptr1=&b;
	float *ptr2=(float*)ptr1;
	cout << "value at address" << *ptr2 ;
	return 0;
}
