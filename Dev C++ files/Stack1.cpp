#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int top=-1,m=5;
int s[10];
void push();
void pop();
void display();
int main()
{
	int ch,i=0;
	do
	{
	cout<<"Enter choice";
	cin>>ch;
	switch (ch)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
		    break;
		case 3:
			display();
		    break;
		default:
		    cout << "Wrong choice" << endl;
			return 0; 
	}
	}while (i<5);
	return 0;
}
void push()
{
	int e;
	cout << "Enter the element" << endl;
	cin >> e ;
	if (top==m-1)
	cout << "Overflow" ;
	else
	{
		top=top+1;
		s[top]=e;
	}
}
void pop()
{
	if (top==-1)
	cout << "Underflow" ;
	else
	{
		s[top]=NULL;
		top=top-1;
	}
}
void display()
{
	for (int i=top;i>-1;i--)
	cout << s[i] << "\n" ;
}
