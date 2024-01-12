#include<iostream>
using namespace std;
int main()
{
	int n;
	float p,r,si;
	cout<< "Enter principle amount, number of  years & rate of interest"<<endl;
	cin>> p;
	cin>> n;
	cin>> r;
	si=((p*n*r)/100.0);
	cout<< "Simple Interest is"<<si;
	return 0;
}
