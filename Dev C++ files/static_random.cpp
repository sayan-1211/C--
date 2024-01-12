#include<iostream>
using namespace std;
class summation
{
	public:
		static int c;
		int addition()
		{
			c++;
			return c;
		}
};
int summation::c=0;
int main()
{
	summation obj1,obj2;
	cout<<obj1.addition()<<endl;
	cout<<obj2.addition();
	return 0;
}
