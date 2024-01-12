#include <iostream>
using namespace std;
class Myprime
{
	private:
		int a;
	public:
		Myprime (int b)
		{
			a=b;
		}
	friend void prime(Myprime m);
};
void prime (Myprime m)
{
	int c=0;
	for (int i=2;i<m.a;i++)
			{
				if (m.a%i==0)
				c++;
			}
	if (c==0)
	cout << "Prime number" << endl;
	else
	cout << "Not Prime number" << endl;
}
int main()
{
	int n;
	cout << "Enter any number" << endl;
	cin >> n;
	Myprime obj(n);
	prime(obj);
	return 0;
}	
