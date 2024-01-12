#include <iostream>
using namespace std;
void swap(int *,int *);
int main()
{
	int a,b;
	cout << "Enter 2  numbers" << endl;
	cin >> a >> b;
	swap (&a,&b);
	return 0;
}
void swap (int *p, int *q)
{
	int c;
	//*p=*p+*q;
	//*q=*p-*q;
	//*p=*p-*q;
	c=*p;
	*p=*q;
	*q=c;
	cout << "Swapped numbers are " << *p << "and" << *q << endl;
}
