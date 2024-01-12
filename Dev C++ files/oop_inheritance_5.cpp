//multiple-level inheritance
#include <iostream>
using namespace std;
class A
{
	public:
		int x=6;
	void display()
	{
		cout << x << endl;
	}
};
class B
{
	public:
		int x=5;
	void display()
	{
		cout << x << endl;
	}
};
class C:public A,public B
{
	private:
		int c;
};
int main()
{
	C obj;
	cout << obj.A::x << endl;
	cout << obj.B::x << endl;
	obj.A::display();
	obj.B::display();
	return 0;
}
