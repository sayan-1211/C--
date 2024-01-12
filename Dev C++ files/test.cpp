#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char name[20];
	string address;
	cout<<"enter name"<<endl;
	cin.getline(name,20);
	getline(cin,address);
	cout<<name<<" "<<address;
	return 0;
}
