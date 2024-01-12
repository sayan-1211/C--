//multi-level inheritance
#include <iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		A(int a)
		{
			this->a=a;
		}
};
class B:public A
{
	protected:
		int b;
	public:
		B(int a, int b):A(a)
		{
			this->b=b;
		}
};
class C:public B
{
	private:
		int c,s;
	public:
		C(int a, int b, int c):B(a,b)
		{
			this->c=c;
		}
		void display()
		{
			s=a+b+c;
			cout << "sum is " << s << endl;
		}
};
int main()
{
	C obj(3,4,5);
	obj.display();
	return 0;
}
