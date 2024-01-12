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
		~A()
		{
			cout << "This is Destructor A" << endl;
		}
};
class B
{
	public:
		B()
		{
			cout << "This is B" << endl;
		}
		~B()
		{
			cout << "This is Destructor B" << endl;
		}
};
class C:public A, public B
{
	public:
		C()
		{
			cout << "This is C" << endl;
		}
		~C()
		{
			cout << "This is Destructor C" << endl;
		}
};
int main()
{
	C ob;
	return 0;
}
