#include <iostream>
using namespace std;
class Addition
{
	private:
		int a,b;
	public:
	    Addition()
	    {
	        a=0;
	        b=1;
	        cout<<a<<" "<<b<<endl;
	     }
		Addition(int a, int b)
		{
			this->a=a;
			this->b=b;
		}
		int sum()
		{
			int c=a+b;
			return c;
		}
		
};
class Myderived:public Addition
{
	private:
		float x,y;
	public:
		Myderived(float x,float y,int p,int q):Addition(p,q)
		{
		    this->x=x;
			this->y=y;
		}
		Myderived():Addition()
		{
		    x=3;
		    y=5;
		    cout<<x<<" "<<y<<endl;
		}
		void sumf()
		{
		   cout<<sum()<<" ";
			float z=x+y;
			cout<<z;
		}
		
};
int main()
{	
	Myderived ob(2.4f,5.6f,20,40);
	Myderived obj;
	//ob.sum();
	ob.sumf();
	return 0;
}
	

