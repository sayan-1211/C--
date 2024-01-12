#include <iostream>
using namespace std;
class Mybase
{
	public:
		virtual void show()
		{
			cout << "This is virtual fn" << endl;
		}
};
class Myderived:public Mybase
{
	public:
		void show()
		{
			cout << "This is derived fn" << endl;
		}
};
int main()
{
	Mybase *r;
	Mybase ob1;
	Myderived ob2;
	r=&ob1;
	r->show();
	r=&ob2;
	r->show();
	return 0;
}
