#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<< "Enter a number"<<endl;
	cin>> n;
	if (n<5)
	cout<< "Hello";
	else if (n>=5 && n<10)
	cout<< "Hi";
	else if (n>=10)
	cout<< "c++ language";
	return 0;
}
