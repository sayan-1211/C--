#include <iostream>
using namespace std;
class Mybase
{
	public:
		void show()
		{
			cout << "This is show for base" << endl;
		}
};
class Myderived:public Mybase
{
	public:
		void show()
		{
			cout << "This is show for derived" << endl;
		}
};
int main()
{
	Myderived ob;
	ob.Mybase::show();
	ob.Myderived::show();
	return 0;
}
