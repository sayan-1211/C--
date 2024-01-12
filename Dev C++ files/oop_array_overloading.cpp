#include <iostream>
using namespace std;
class MyArray
{
	public:
		int i,m,v;
		int ai[10],array[10];
		float af[10];
		MyArray (int m, int ar[], int v)
		{
			this->m=m;
			for (i=0;i<m;i++)
			ai[i]=ar[i];
		}
		MyArray (int m, float ar[], int v)
		{
			this->m=m;
			for (i=0;i<m;i++)
			af[i]=ar[i];
		}
		void insert1()
		{
			for (i=1;i<=m;i++)
			array[i]=ai[i-1];
			array[0]=v;
		}
		void insert2()
		{
			for (i=0;i<m;i++)
			array[i]=ai[i];
			array[m]=v;
		}
		void display()
		{
			for (i=0;i<=m;i++)
			cout << array[i];
		}
};
int main()
{
	int i,n,x;
	cout << "Enter size of array" << endl;
	cin >> n;
	int ar1[n];
	float ar2[n];
	cout << "Enter value of integer array" << endl;
	for (i=0;i<n;i++)
	cin >> ar1[i];
	cout << "Enter value of float array" << endl;
	for (i=0;i<n;i++)
	ar2[i];
	cout << "Enter value to be inserted" << endl;
	cin >> x;
	MyArray obj1(n,ar1,x);
	MyArray obj2(n,ar2,x);
	obj1.insert1();
	obj2.insert2();
	obj1.display();
	obj2.display();
	return 0;
}
