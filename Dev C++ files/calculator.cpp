#include<iostream>
using namespace std;
int main()
{
	int a,b;
	float c;
	char ch;
	cout<< "Enter two numbers"<<endl;
	cin>> a;
	cin>> b;
	cout<< "Enter operation"<<endl;
	cin>> ch;
	switch (ch)
	{
		case '+':
			c=a+b;
			cout<< c;
			break;
		case '-':
			c=a-b;
			cout<< c;
			break;
		case '*':
			c=a*b;
			cout<< c;
			break;
		case '/':
			c=(float)a/b;
			cout<< c;
			break;
		default :
			cout<< "Wrong Input";
	}
	return 0;
}
