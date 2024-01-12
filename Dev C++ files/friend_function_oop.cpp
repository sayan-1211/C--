#include <iostream>
using namespace std;
class Myfriend
{
	private:
		int a;
	public:
		Myfriend (int b)
		{
			a=b;
		}
	friend void display(Myfriend m);
};
void display (Myfriend m)
{
	cout << m.a << endl;
	m.a++;
	cout << m.a;
}
int main()
{
	Myfriend obj(10);
	display(obj);
	return 0;
}	
