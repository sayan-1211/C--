//Evaluation of Multiple
#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout << "This is A" << endl;
		}
};
class B
{
	public:
		B()
		{
			cout << "This is B" << endl;
		}
};
class C:public A, public B
{
	public:
		C()
		{
			cout << "This is C" << endl;
		}
};
int main()
{
	C ob;
	return 0;
}
