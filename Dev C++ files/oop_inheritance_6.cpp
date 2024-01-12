//hybrid-level inheritance
#include <iostream>
using namespace std;
class A
{
	public:
		int x=100;
	void show()
	{
		cout << x << endl;
	}
};
class B:virtual public A
{
};
class C:virtual public A
{
};
class D:public B, public C
{
};
int main()
{
	D ob;
	cout << ob.x << endl;
	ob.show();
	return 0;
}
