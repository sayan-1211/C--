#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
void myfn(struct student[]);
struct student
{
	char name[20];
	string address;
	int roll;
	int phone;
};
int main()
{
	struct student s[3];
	for (int i=0;i<3;i++)
	{
		fflush(stdin);
		cin.getline(s[i].name,20);
		fflush(stdin);
		getline(cin,s[i].address);
		fflush(stdin);
		cin >> s[i].roll;
		cin >> s[i].phone;
	}
	myfn(s);
	return 0;
}
void myfn(struct student s[])
{
	for (int i=0;i<3;i++)
	{
		cout << s[i].name <<endl;
		cout << s[i].address <<endl;
		cout << s[i].roll <<endl;
		cout << s[i].phone <<endl;
	}
}

