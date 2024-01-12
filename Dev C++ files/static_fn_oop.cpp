
#include <iostream>
using namespace std;
class Mystatic
{
	public:
		static int count;
		static void myfn()
		{
			count++;
			cout<<count;
		}
};
int Mystatic::count=0;
int main()
{
	Mystatic::myfn();
	return 0;
}
/*
#include <iostream>
using namespace std;
class Mystatic
{
	private:
	 int count;
	public:
		Mystatic()
		{
			count=0;
		}
		void myfn()
		{
			count++;
			cout<<count;
		}
};

int main()
{
	Mystatic obj;
	obj.myfn();
	return 0;
}
*/
