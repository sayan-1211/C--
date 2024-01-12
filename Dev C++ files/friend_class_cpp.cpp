#include <iostream>
using namespace std;
class A
{
	private:
		int n;
	public:
		A (int n)
		{
			this->n=n;
		}
	friend class B;
};
class B
{
	public:
		void display (A ob)
		{
			cout << ob.n;
		}
};
int main()
{
	A obj1(10);
	B obj2;
	obj2.display(obj1);
}
