#include <iostream>
using namespace std;
class Factorial
{
	public:
		int number;
		Factorial()
		{
			number=5;
		}
		Factorial(int r)
		{
			number=r;
		}
		Factorial(Factorial &ob)
		{
			number=ob.number;
		}
		int calfact()
		{
			int i,f=1;
			for (i=1;i<=number;i++)
			f*=i;
			return f;
		}
};
int main()
{
	Factorial obj1;
	Factorial obj2(6);
	Factorial obj3(obj2);
	cout << obj1.calfact() << endl;
	cout << obj2.calfact() << endl;
	cout << obj3.calfact() << endl;
	return 0;
}
