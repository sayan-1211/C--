#include<iostream>
using namespace std;
class summation
{
	public:
		int addition(int a,int b)
		{
			int x=a+b;
			return x;
		}
		float addition(float a,float b)
		{
			float x=a+b;
			return x;
		}
};
int main()
{
	summation obj1,obj2;
	cout<<obj1.addition(10,20)<<endl;
	cout<<obj2.addition(4.5f,5.8f);
	return 0;
}
