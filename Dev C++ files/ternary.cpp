#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	float avg;
	cout << "Enter 3 numbers" << endl;
	cin >> a >> b >> c;
	avg= float ((a+b+c)/3);
	//(avg>40)? cout << "Pass" : cout << "Fail";
	string str= (avg>40)? "pass" : "fail";
	cout << str;
	return 0;
}

