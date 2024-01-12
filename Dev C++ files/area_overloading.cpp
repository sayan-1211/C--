#include<iostream>
using namespace std;
class my_area
{
	public:
		float area(int a)
		{
			float x=3.14*a*a;
			return x;
		}
		int area(int a,int b)
		{
			int x=a*b;
			return x;
		}
		float area(float a,float b)
		{
			float x=0.5*a*b;
			return x;
		}
};
int main()
{
	my_area circle,rectangle,triangle;
	cout<<circle.area(10)<<endl;
	cout<<rectangle.area(10,20)<<endl;
	cout<<triangle.area(10.5f,20.5f)<<endl;
	return 0;
}
