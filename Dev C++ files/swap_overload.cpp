#include<iostream>
using namespace std;
class swapping
{
	public:
		void swap(int a,int b)
		{
			int c;
			c=a;
			a=b;
			b=c;
			cout<<a<<" & "<<b<<endl;
		}
		void swap(float a,float b)
		{
			float c;
			c=a;
			a=b;
			b=c;
			cout<<a<<" & "<<b<<endl;
		}
		void swap(char a,char b)
		{
			char c;
			c=a;
			a=b;
			b=c;
			cout<<a<<" & "<<b<<endl;
		}
};
int main()
{
	swapping sint,sfloat,schar;
	sint.swap(10,20);
	sfloat.swap(10.5f,20.5f);
	schar.swap('x','y');
	return 0;
}
