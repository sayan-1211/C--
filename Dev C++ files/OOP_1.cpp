
#include<iostream>
using namespace std;
class summation
{
	public:
		//int a,b;
		void test(int p,int q)
		{
			addition(p,q);
		}
	private:
	    int a,b;	
		void addition(int c,int d)
		{
			a=c;
			b=d;
			int x=a+b;
			cout<<x<<endl;
		}	
};
int main()
{
	summation obj1,obj2;
	obj1.test(10,20);
	obj2.test(40,50);
	return 0;
}
